#include "Motor.h"
#include "Arduino.h"


//Serial
Motor::Motor(int enA, int enB, int in1, int in2, int in3, int in4) {
  _enA = enA;
  _enB = enB;
  _in1 = in1;
  _in2 = in2;
  _in3 = in3;
  _in4 = in4;
  pinMode (_enA, OUTPUT);
  pinMode (_enB, OUTPUT);
  pinMode (_in1, OUTPUT);
  pinMode (_in2, OUTPUT);
  pinMode (_in3, OUTPUT);
  pinMode (_in4, OUTPUT);
}

// Motor
void Motor::Adelante() {
  Adelante(255);
}

void Motor::Adelante(int vel) {
  if (vel > 255) {
    vel = 255;
  } else if (vel < 0) {
    vel = 0;
  }
  //Direccion motor A
  digitalWrite (_in1, HIGH);
  digitalWrite (_in2, LOW);
  analogWrite (_enA, vel); //Velocidad motor A
  //Direccion motor B
  digitalWrite (_in3, HIGH);
  digitalWrite (_in4, LOW);
  analogWrite (_enB, vel); //Velocidad motor B
}

void Motor::Parar() {
  //Direccion motor A
  digitalWrite (_in1, LOW);
  digitalWrite (_in2, LOW);
  analogWrite (_enA, 0); //Velocidad motor A
  //Direccion motor B
  digitalWrite (_in3, LOW);
  digitalWrite (_in4, LOW);
  analogWrite (_enB, 0); //Velocidad motor B

}

void Motor::Derecha() {
  Derecha(255,255);
}

void Motor::Derecha(int vel) {
  Derecha(vel, 0);
}

void Motor::Derecha(int vel, int vel2) {
  if (vel > 255) {
    vel = 255;
  } else if (vel < 0) {
    vel = 0;
  }
  if (vel2 > 255) {
    vel2 = 255;
  } else if (vel2 < 0) {
    vel2 = 0;
  }
  //Direccion motor A
  digitalWrite (_in1, HIGH);
  digitalWrite (_in2, LOW);
  analogWrite (_enA, vel); //Velocidad motor A
  //Direccion motor B
  digitalWrite (_in3, LOW);
  digitalWrite (_in4, HIGH);
  analogWrite (_enB, vel2); //Velocidad motor B
}
void Motor::Izquierda() {
  Izquierda(255, 0);
}

void Motor::Izquierda(int vel) {
  Izquierda(vel, 0);
}

void Motor::Izquierda(int vel, int vel2) {
  if (vel > 255) {
    vel = 255;
  } else if (vel < 0) {
    vel = 0;
  }
  if (vel2 > 255) {
    vel2 = 255;
  } else if (vel2 < 0) {
    vel2 = 0;
  }
  //Direccion motor A
  digitalWrite (_in1, LOW);
  digitalWrite (_in2, HIGH);
  analogWrite (_enA, vel2); //Velocidad motor A
  //Direccion motor B
  digitalWrite (_in3, HIGH);
  digitalWrite (_in4, LOW);
  analogWrite (_enB, vel); //Velocidad motor B
}

void Motor::Atras() {
  Atras(255);
}

void Motor::Atras(int vel) {
  if (vel > 255) {
    vel = 255;
  } else if (vel < 0) {
    vel = 0;
  }
  //Direccion motor A
  digitalWrite (_in1, LOW);
  digitalWrite (_in2, HIGH);
  analogWrite (_enA, vel); //Velocidad motor A
  //Direccion motor B
  digitalWrite (_in3, LOW);
  digitalWrite (_in4, HIGH);
  analogWrite (_enB, vel); //Velocidad motor B
}
void Motor::Giro ()
{
  Giro(255);
}
void Motor::Giro (int vel)
{
  if (vel > 255) {
    vel = 255;
  } else if (vel < 0) {
    vel = 0;
  }
  //Direccion motor A
  digitalWrite (_in1, LOW);
  digitalWrite (_in2, HIGH);
  analogWrite (_enA, vel); //Velocidad motor A
  //Direccion motor B
  digitalWrite (_in3, HIGH);
  digitalWrite (_in4, LOW);
  analogWrite (_enB, vel); //Velocidad motor B
}
void Motor::GiroOp ()
{
  GiroOp(255);
}
void Motor::GiroOp (int vel)
{
  if (vel > 255) {
    vel = 255;
  } else if (vel < 0) {
    vel = 0;
  }
  //Direccion motor A
  digitalWrite (_in1, HIGH);
  digitalWrite (_in2, LOW);
  analogWrite (_enA, vel); //Velocidad motor A
  //Direccion motor B
  digitalWrite (_in3, LOW);
  digitalWrite (_in4, HIGH);
  analogWrite (_enB, vel); //Velocidad motor B
}
void Motor::Bloqueo() {
  //Direccion motor A
  digitalWrite (_in1, LOW);
  digitalWrite (_in2, LOW);
  analogWrite (_enA, 255); //Velocidad motor A
  //Direccion motor B
  digitalWrite (_in3, LOW);
  digitalWrite (_in4, LOW);
  analogWrite (_enB, 255); //Velocidad motor B
}
