void setup() {
  // Configurar os pinos dos LEDs como saída
  pinMode(11,OUTPUT);// LED verde
  pinMode(12,OUTPUT); // LED amarelo
  pinMode(13,OUTPUT); // LED vermelho
  pinMode(10,OUTPUT); //LED verm semaforo
  pinMode(9,OUTPUT); //LED verd semaforo

}

void loop() {
  // Sinal aberto: apaga LED vermelho, acende LED verde
  digitalWrite(11,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
  delay(4000);
 

  //Sinal atenção: apaga LED verde, acende LED amarelo
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(13,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
  delay(2000);

  //Sinal fechado: apaga LED amarelo, acende LED vermelho
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(9,HIGH);
  delay(5000);

  //Sinal vermelho do pedestre piscar

  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  delay(500);
  digitalWrite(10,HIGH);
  delay(500);
  digitalWrite(10, LOW);
  delay(500);
  digitalWrite(10,HIGH);
  delay(500);
  digitalWrite(10, LOW);
  delay(500);
  digitalWrite(10,HIGH);
  delay(500);
  digitalWrite(10, LOW);
  delay(500);
  

}
