#include "pines.h"
#include "motor.h"
#include "adelante.h"
#include "parar.h"
#include <SoftwareSerial.h>
SoftwareSerial BT1(0, 1); //RX | TX

void setup ()
{
  // Declaramos todos los pines como salidas
  configpines();  //pines.h
  Serial.begin(9600);
  BT1.begin(9600);
}

void loop ()
{
  
  Parar(50);
  while (BT1.available()) {
    char a = ' ';
    Parar(500);
    //Serial.write(BT1.read());
    a = BT1.read();
    //delay(100);
    //Serial.println(a);
    //Serial.println((int)a);
    switch (a) {
      case '1':
        Adelante(750);
        break;
      case '2':
        Motor(0x0,0x0,255, 255);
        break;
      case '3':
        Motor(1,0,255, 0);
        break;
      case '4':
        Motor(0,1,0, 255);
        break;
      case '5':
        Motor(0,1,255, 255);
        break;
      case '6':
        Motor(1,0,255, 255);
        break;
      default:
        Serial.print("No permitido");
        BT1.write("No permitido");
        break;
    }
  }
}
