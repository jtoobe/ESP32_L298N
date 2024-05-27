
/*

Programa que permite controlar un motor paso a paso bipolar de cuatro conductores
con un puente H del tipo L298N

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
