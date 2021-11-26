
const int pinoLDR = A0;
int leitura = 0;


void setup() {
Serial.begin(9600);

pinMode(pinoLDR, INPUT);
}

void loop() {
 leitura = analogRead(pinoLDR);

 Serial.print("Leitura: ");
 Serial.print (leitura);
 Serial.print("\t");

 Serial.print("Obstaculo: ");
 if ( leitura <= 512){
  Serial.print("Sim");
  
 }
else {
  Serial.print("Não");
  
}
Serial.println();
 
delay (2000);
}
