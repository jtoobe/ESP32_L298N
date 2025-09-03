#include "MotorDC.h"

MotorDC motor(33, 32, 25);

void setup() {
  Serial.begin(115200);
}

void loop() {
  // lógica adicional
  motor.adelante(100);
  delay(2000);
  motor.parar();
  delay(2000);
  motor.atras(100);
  delay(2000);
  motor.parar();
  delay(2000);
}
