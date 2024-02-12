#include <Motor.h>

Motor m(10, 5, 9, 8, 6, 7);   //enA, enB, in1, in2, in3, in4

void setup() {
  Serial.begin(9600);
}

void loop() {
  while (Serial.available()) {
    
    m.Parar();
    delay(1000);
    char a = ' ';
    a = Serial.read();
    switch (a) {
      case '1':
        m.Adelante(150);
        break;
      case '2':
        m.Atras();
        break;
      case '3':
        m.Derecha();
        break;
      case '4':
        m.Izquierda();
        break;
      case '5':
        m.Giro();
        break;
      case '6':
        m.GiroOp();
        break;
      default:
        Serial.print("No permitido");
        break;
    }
    delay(1000);
  }
}
