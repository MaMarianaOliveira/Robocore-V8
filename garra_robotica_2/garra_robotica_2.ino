#include <Servo.h> //Inclui biblioteca para servo motor

const int SW = 2; // Pino para o botão do joystick
const int PIN_SERVO = 9; // Pino de comandos para o servo motor
const int VRX = A4; // Pino para leitura do eixo X
const int VRY = A5; // Pino para leitura do eixo Y

const int CLOSE = 170; // Limite de fechamento do servo
const int OPEN = 90; // Limite de abertura do servo

int melhor_posi = 500; // Variável de referência
int posi_servo = 0;
int flag = 0; // Variável de sentido.

Servo servo_motor;

void setup() {
  pinMode(VRX, INPUT);
  pinMode(VRY, INPUT);
  pinMode(SW, INPUT_PULLUP);
  servo_motor.attach(PIN_SERVO);
}

void loop() {
  if (analogRead(VRY) >= 620 && flag == 0) {
    flag = 1;
  }
  else if (analogRead(VRY) <= 500 && flag == 0) {
    flag = -1;
  }
  if (digitalRead(SW) == HIGH) {
    if (flag == 1) {
      if (analogRead(VRY) >= melhor_posi) {
        melhor_posi = analogRead(VRY);
      }
    }
    else if (flag == -1) {
      if (analogRead(VRY) <= melhor_posi) {
        melhor_posi = analogRead(VRY);
      }
    }
    else {
      melhor_posi = analogRead(VRX);
    }
  }
  else {
    flag = 0;
    melhor_posi = 500;
  }
  posi_servo = map(melhor_posi, 0, 1023, CLOSE, OPEN);
  servo_motor.write(posi_servo);
  delay(10);
}
