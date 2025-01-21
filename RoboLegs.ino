#include <Servo.h>

Servo HipL;
Servo HipR;
Servo LegLL;
Servo LegLR;
Servo LegRL;
Servo LegRR;
Servo KneeLL;
Servo KneeLR;
Servo KneeRL;
Servo KneeRR;
Servo AnkleL;
Servo AnkleR;

void setup() {
  HipL.attach(30);
  HipR.attach(31);

  LegLL.attach(32);
  LegLR.attach(33);
  LegRL.attach(34);
  LegRR.attach(35);


  KneeLL.attach(36);
  KneeLR.attach(37);
  KneeRL.attach(38);
  KneeRR.attach(39);
  
  AnkleL.attach(40);
  AnkleR.attach(41);
  

  HipL.write(110);
  HipR.write(80);

  LegLL.write(150);
  LegLR.write(30);
  LegRL.write(150);
  LegRR.write(30);
  
  KneeLL.write(150);
  KneeLR.write(30);
  KneeRL.write(150);
  KneeRR.write(30);
  
  AnkleL.write(100);
  AnkleR.write(80);
  
}

void loop() {
}