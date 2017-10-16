#include <AFMotor.h>

AF_DCMotor motor(2, MOTOR12_64KHZ);

void setup() {
  motor.setSpeed(50);
}

void loop() {
  spin();
  delay(86400000);
}

void spin() {
  motor.run(FORWARD);
  delay(80);
  motor.run(RELEASE);
}
