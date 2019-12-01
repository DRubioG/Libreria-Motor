// Motor A
int ENA = 10;
int IN1 = 8;
int IN2 = 9;

// Motor B
int ENB = 5;
int IN3 = 7;
int IN4 = 6;

void configpines(){
  pinMode (ENA, OUTPUT);
  pinMode (ENB, OUTPUT);
  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  pinMode (IN3, OUTPUT);
  pinMode (IN4, OUTPUT);
}
