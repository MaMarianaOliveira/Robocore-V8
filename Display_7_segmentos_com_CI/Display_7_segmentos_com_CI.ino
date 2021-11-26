// pinos onde cada um dos bits estão conectados:
const int pino_a = 12; 
const int pino_b = 9; 
const int pino_c = 10; 
const int pino_d = 11; 

void setup() {
  // configura os pinos de cada bit como saída:
  pinMode(pino_a, OUTPUT);
  pinMode(pino_b, OUTPUT);
  pinMode(pino_c, OUTPUT);
  pinMode(pino_d, OUTPUT);
}

void loop() {
  // aciona os bits de modo a formar o número 0000 = 0 (zero):
  digitalWrite(pino_a, LOW);
  digitalWrite(pino_b, LOW);
  digitalWrite(pino_c, LOW);
  digitalWrite(pino_d, LOW);
  delay(1000); // aguarda 1 segundo
  
  // aciona os bits de modo a formar o número 0001 = 1 (um):
  digitalWrite(pino_a, HIGH);
  digitalWrite(pino_b, LOW);
  digitalWrite(pino_c, LOW);
  digitalWrite(pino_d, LOW);
  delay(1000); // aguarda 1 segundo

  // aciona os bits de modo a formar o número 0010 = 2 (dois):
  digitalWrite(pino_a, LOW);
  digitalWrite(pino_b, HIGH);
  digitalWrite(pino_c, LOW);
  digitalWrite(pino_d, LOW);
  delay(1000); // aguarda 1 segundo

  // aciona os bits de modo a formar o número 0011 = 3 (três):
  digitalWrite(pino_a, HIGH);
  digitalWrite(pino_b, HIGH);
  digitalWrite(pino_c, LOW);
  digitalWrite(pino_d, LOW);
  delay(1000); // aguarda 1 segundo

  // aciona os bits de modo a formar o número 0100 = 4 (quatro):
  digitalWrite(pino_a, LOW);
  digitalWrite(pino_b, LOW);
  digitalWrite(pino_c, HIGH);
  digitalWrite(pino_d, LOW);
  delay(1000); // aguarda 1 segundo

  // aciona os bits de modo a formar o número 0101 = 5 (cinco):
  digitalWrite(pino_a, HIGH);
  digitalWrite(pino_b, LOW);
  digitalWrite(pino_c, HIGH);
  digitalWrite(pino_d, LOW);
  delay(1000); // aguarda 1 segundo

  // aciona os bits de modo a formar o número 0110 = 6 (seis):
  digitalWrite(pino_a, LOW);
  digitalWrite(pino_b, HIGH);
  digitalWrite(pino_c, HIGH);
  digitalWrite(pino_d, LOW);
  delay(1000); // aguarda 1 segundo

  // aciona os bits de modo a formar o número 0111 = 7 (sete):
  digitalWrite(pino_a, HIGH);
  digitalWrite(pino_b, HIGH);
  digitalWrite(pino_c, HIGH);
  digitalWrite(pino_d, LOW);
  delay(1000); // aguarda 1 segundo

  // aciona os bits de modo a formar o número 1000 = 8 (oito):
  digitalWrite(pino_a, LOW);
  digitalWrite(pino_b, LOW);
  digitalWrite(pino_c, LOW);
  digitalWrite(pino_d, HIGH);
  delay(1000); // aguarda 1 segundo

  // aciona os bits de modo a formar o número 1001 = 9 (nove):
  digitalWrite(pino_a, HIGH);
  digitalWrite(pino_b, LOW);
  digitalWrite(pino_c, LOW);
  digitalWrite(pino_d, HIGH);
  delay(1000); // aguarda 1 segundo
}
