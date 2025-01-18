#include <Servo.h>

Servo HipL;
Servo HipR;
Servo LegL;
Servo LegR;
Servo KneeL;
Servo KneeR;
Servo AnkleL;
Servo AnkleR;

void setup() {
  HipL.attach(0);
  HipR.attach(0);
  LegL.attach(0);
  LegR.attach(0);
  KneeL.attach(0);
  KneeR.attach(0);
  AnkleL.attach(0);
  AnkleR.attach(0);
}

void loop() {
  AnkleL.write(90);
  AnkleR.write(90);
}