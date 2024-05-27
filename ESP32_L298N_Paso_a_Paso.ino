
/*

Programa que permite controlar un motor paso a paso bipolar de cuatro conductores
con un puente H del tipo L298N

Lo único que hay que identificar son los dos pares de cables que se conectan a cada 
una de las dos bobinas. Una bobina se conecta a OUT1 y EOUT2 y la otra a OUT3 y OUT4, la polaridad no importa.

Para encontrar los dos cables de una bobina, haga lo siguiente con el motor desconectado:

Intente hacer girar el eje del motor paso a paso con la mano y fíjese en lo difícil que es girar.
Ahora elija un par de cables al azar del motor y toca los extremos desnudos entre sí.
A continuación, intente hacer girar de nuevo el eje del motor paso a paso.
Si siente mucha resistencia, ha encontrado un par de cables de la misma bobina. Si puede girar el eje libremente, pruebe con otro par de cables.
Ahora conecta las dos bobinas a los terminales de salida indicadas en el diagrama de cableado anterior.

*/
#include "Stepper.h"

// Definir el número de pasos por revolución:
const int pasosPorRevolucion = 200;

// Inicializar la librería Stepper en los pines IN1, IN2, IN3 & IN4
Stepper miMotorPasoAPaso = Stepper(pasosPorRevolucion, 32, 33, 25, 26);

// Dejar puestos los puentes en los pines ENA y ENB del Puente H

void setup() {
  // Establecer la velocidad del motor (en RPM):
  miMotorPasoAPaso.setSpeed(100);
}

void loop() {
  // Hacer que el motor dé una revolución en una dirección:
  miMotorPasoAPaso.step(200);

  delay(2000);

  // Hacer que el motor dé una revolución en la dirección opuesta:
  miMotorPasoAPaso.step(-200);

  delay(2000);
}
