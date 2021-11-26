const int pinoPotenciometro = A0;
const int pinoLED = 12;
const int periodo = 1023;
int tempo_ligado, tempo_desligado;


void setup() {
  
  pinMode (pinoPotenciometro, INPUT);
  pinMode (pinoLED, OUTPUT);
  Serial.begin(9600);

}

void loop() {
   
  tempo_ligado = analogRead(pinoPotenciometro);
  tempo_desligado = periodo - tempo_ligado;

  digitalWrite(pinoLED, HIGH);
  delayMicroseconds(tempo_ligado);
  digitalWrite(pinoLED,LOW);
  delayMicroseconds (tempo_desligado);
  Serial.print(tempo_ligado);
  Serial.print("\t");
  Serial.println(tempo_desligado);

}
