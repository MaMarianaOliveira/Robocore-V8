
#include <Servo.h>

const int pot = A5;
int leitura;

Servo servo_motor;

void setup() {
 pinMode(pot,INPUT);
 servo_motor.attach(9);

}

void loop() {
  leitura = analogRead(pot);
  leitura = map(leitura,0,1023,10,170);

  servo_motor.write(leitura);

  delay(1000);

}
