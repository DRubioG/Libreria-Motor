void Motor(int en_Izd, int en_Dch, int vel_Izd, int vel_Dch){
    //Direccion motor A
    digitalWrite (IN1, en_Izd);
    digitalWrite (IN2, (!en_Izd));
    analogWrite (ENA, vel_Izd); //Velocidad motor A
    //Direccion motor B
    digitalWrite (IN3, en_Dch);
    digitalWrite (IN4, (!en_Dch));
    analogWrite (ENB, vel_Dch); //Velocidad motor B
}