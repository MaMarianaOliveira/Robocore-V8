

const int VRX = A4;
const int VRY = A5;
const int SW = 2;

int leitura_botao = 0, leitura_VRX, leitura_VRY;

void setup() {
 Serial.begin(9600);
 pinMode(VRX, INPUT);
 pinMode(VRY,INPUT);
 pinMode(SW, INPUT_PULLUP);

}

void loop() {
  leitura_VRX = analogRead(VRX);
  leitura_VRY = analogRead(VRY);
  leitura_botao = digitalRead(SW);

  Serial.print("Leitura em VRX: ");
  Serial.print("\t");
  Serial.print(leitura_VRX);
  Serial.print("\t");
  Serial.print("Leitura em VRY: ");
  Serial.print("\t");
  Serial.print(leitura_VRY);
  Serial.print("\t");
  Serial.print("Leitura do botão: ");
  Serial.println(leitura_botao);

  delay(1000);
  

}
