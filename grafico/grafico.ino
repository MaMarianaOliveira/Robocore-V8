
const int pinoPotenciometro = A0;
int leitura = 0;
float tensao = 0.0;


void setup() {
Serial.begin (9600);

pinMode(pinoPotenciometro, INPUT);

}

void loop() {
  leitura = analogRead(pinoPotenciometro);

  tensao = leitura * 5.0 / 1024.0;

Serial.println(leitura);
Serial.print(" ");
Serial.print(tensao*100);
Serial.print(" ");
Serial.print(tensao*90);
Serial.print(" ");
Serial.print(leitura/2);
Serial.print(" ");
Serial.println(tensao*80);

delay (100);
}
