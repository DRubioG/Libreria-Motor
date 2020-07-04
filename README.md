# Librería Motor
Esta librería es la encargada de hacer funcionar los motores de un vehiculo de dos motores

## Funciones
- **_Motor(int enA, int enB, int in1, int in2, int in3, int in4)_**: esta función es la encargada de configurar los pines del motor, en el siguiente orden: 
  - enA: pin PWM del motor A
  - enB: pin PWM del motor B
  - in1: pin del motor A
  - in2: otro pin del motor A
  - in3: pin del motor B
  - in4: otro pin del motor B
- **_Adelante()_**: esta función en la encargada de hacer que el motor vaya hacia delante con un valor de PWM de 255
- **_Adelante(int vel)_**: esta función es la encargada de que el motor vaya hacia delante con un valor de _vel_
- **_Parar()_**: esta función es la encargada de parar el motor
- **_Derecha()_**: esta función es la encargada de hacer que el vehículo gire a la derecha, el motor izquierdo recibirá un código de PWM de 255, y el derecho uno de 0
- **_Derecha(int vel)_**: esta función es la encargada de hacer que el vehículo gire a la derecha, el motor izquierdo recibirá el código de PWM de _vel_, y el derecho de 0
- **_Derecha(int vel, int vel2)_**: esta función es la encargada de hacer que el vehículo gire a la derecha, el motor izquierdo recibirá el código de _vel_, y el derecho de _vel2_
- **_Izquierda()_**: esta función es la encargada de hacer que el vehículo gire a la izquierda, el motor derecho recibirá un código de PWM de 255, y el izquierdo uno de 0
- **_Izquierda(int vel)_**: esta función es la encargada de hacer que el vehículo gire a la izquierda, el motor derecho recibirá el código de PWM de _vel_, y el izquierdo de 0
- **_Izquierda(int vel, int vel2)_**: esta función es la encargada de hacer que el vehículo gire a la izquierda, el motor derecho recibirá el código de _vel_, y el izquierdo de _vel2_
- **_Atras()_**: esta función es la encargada de hacer que el vehículo vaya hacia atrás con un valor de PWM de 255
- **_Atras(int vel)_**: esta función es la encargada de hacer que el vehículo vaya hacia atrás con un valor de PWM de _vel
- **_Giro()_**: esta función es la encargada de de hacer que el vehículo gire en sentido antihorario, con un valor de PWM para ambos motores de 255
- **_Giro(int vel)_**: esta función es la encargada de hacer que el vehículo gire en sentido antihorario, con un valor de PWM para ambos motores de _vel_
- **_GiroOp()_**: esta función es la encargada de de hacer que el vehículo gire en sentido horario, con un valor de PWM para ambos motores de 255
- **_GiroOp(int vel)_**: esta función es la encargada de hacer que el vehículo gire en sentido horario, con un valor de PWM para ambos motores de _vel_
- **_Bloqueo()_**: esta función es la encargada de hacer que el vehículo bloqueé ambos motores

### Ejemplos ###
Esta librería incorpora dos ejemplos:
  - Motor_Example: que hace funcionar el vehículo mediante un código
  - Motor_Bluetooth_Example: que hace lo mismo que el anterior ejemplo pero el código se le manda por Bluetooth
    
