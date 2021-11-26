
#include <Servo.h>

Servo servo_motor;

void setup() {
 servo_motor.attach(9);

 servo_motor.write(10);

}

void loop() {

}
