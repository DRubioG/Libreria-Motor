class Motor{
  private:
    int _enA,_enB, _in1, _in2, _in3, _in4;

  public:
    
    Motor(int, int, int, int, int, int);  //Serial
    
    //Motor
    void Adelante();
    void Adelante(int);
    void Parar();
    void Derecha();
    void Derecha(int);
    void Derecha(int, int);
    void Izquierda();
    void Izquierda(int);
    void Izquierda(int, int);
    void Atras();
    void Atras(int);
    void Giro();
    void Giro(int);
    void GiroOp();
    void GiroOp(int);
    void Bloqueo();
};
