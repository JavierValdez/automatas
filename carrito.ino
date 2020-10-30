//funcion donde se configuran los pines
void setup() {
//Define la velocidad del puerto Serial
Serial.begin(9600);
//Configura los pines que se utilizaran para mover el motor como salidas
pinMode(11 , OUTPUT);
pinMode(10 , OUTPUT);
pinMode(9 , OUTPUT);
pinMode(8 , OUTPUT);

}
//Funcion que permitira configurar las acciones de los pines y se repetira constantemente
void loop() {
  //Condicion que verifica si existe algun puerto serial activo
  //si existe por lo menos un puerto serial disponible ejecutara el codigo englobado dentro de ella
  if (Serial.available() > 0) {
    //Define una variable de tipo caracter y le almacena un valor recibido por el puerto serial
    char dato = Serial.read();
    //Verifica si el caracter recibido es una w configura los motores de ambas ruedas de tal forma de que giren ambas hacia adelante
    if (dato == 'w') {
      
      //pin 11 y 10 controlan la rueda izquierda
      //Configura el pin 11 en bajo a tal forma de ser usado como tierra
      digitalWrite(11 , LOW);
      //Configura el pin 10 en alto dandole un voltaje
      digitalWrite(10 , HIGH);
      
      //pin 9 y 8 controlan la rueda derecha
      //Configura el pin 9 en bajo a tal forma de ser usado como tierra
      digitalWrite(9 , LOW);
      //Configura el pin 8 en alto dandole un voltaje
      digitalWrite(8 , HIGH);

    }
    //Verifica si el caracter recibido es una s configura los motores de ambas ruedas de tal forma de que giren ambas hacia atras
    else if (dato == 's') {
      //pin 11 y 10 controlan la rueda izquierda
      //Configura el pin 11 en alto dandole un voltaje
      digitalWrite(11, HIGH);
      //Configura el pin 10 en bajo a tal forma de ser usado como tierra
      digitalWrite(10, LOW);

      //pin 9 y 8 controlan la rueda derecha
      //Configura el pin 9 en alto dandole un voltaje
      digitalWrite(9, HIGH);
      //Configura el pin 8 en bajo a tal forma de ser usado como tierra
      digitalWrite(8, LOW);

    }
    //Verifica si el caracter recibido es una d configura los motores de tal forma que el auto gire a la derecha
    //Deteniendo el motor del lado derecho y haciendo girar al izquierdo
    else if (dato == 'd') {
      //pin 11 y 10 controlan la rueda izquierda
      //Configura el pin 11 en bajo a tal forma de ser usado como tierra
      digitalWrite(11 , LOW);
      //Configura el pin 10 en alto dandole un voltaje
      digitalWrite(10 , HIGH);

      //pin 9 y 8 controlan la rueda derecha
      //Configura el pin 9 en bajo a tal forma de ser usado como tierra
      digitalWrite(9, LOW);
      //Configura el pin 9 en bajo a tal forma de ser usado como tierra
      digitalWrite(8, LOW);

    }
     //Verifica si el caracter recibido es una a configura los motores de tal forma que el auto gire a la izquierda
    //Deteniendo el motor del lado izquierdo y haciendo girar al derecho
    else if (dato == 'a') {
      //pin 11 y 10 controlan la rueda izquierda
      //Configura el pin 11 en bajo a tal forma de ser usado como tierra
      digitalWrite(11, LOW);
      //Configura el pin 10 en bajo a tal forma de ser usado como tierra
      digitalWrite(10, LOW);

      //pin 9 y 8 controlan la rueda derecha
      //Configura el pin 11 en bajo a tal forma de ser usado como tierra
      digitalWrite(9 , LOW);
      //Configura el pin 8 en alto dandole un voltaje
      digitalWrite(8 , HIGH);

    }
    ////Verifica si el caracter recibido es una r configura los motores de tal forma que ambos queden inactivos
    else if (dato == 'r') {
      ///Configura el pin 11 en bajo a tal forma de ser usado como tierra
      digitalWrite(11, LOW);
      //Configura el pin 10 en bajo a tal forma de ser usado como tierra
      digitalWrite(10, LOW);
      //Configura el pin 9 en bajo a tal forma de ser usado como tierra
      digitalWrite(9 , LOW);
      //Configura el pin 8 en bajo a tal forma de ser usado como tierra
      digitalWrite(8 , LOW);
    }
  }


}
