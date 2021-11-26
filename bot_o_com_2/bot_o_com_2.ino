void setup() {
  pinMode(9, INPUT);// configura o pino com o botão como entrada
  pinMode(12,OUTPUT);// configura o pino com o LED como saída
  pinMode(11,INPUT);// configura o pino com o botão2 como entrada
  pinMode(13,OUTPUT); // configura o pino com o LED2 como saída

}

void loop() {
  if(digitalRead(9) == HIGH) {// se o botão tiver pressionado
    digitalWrite(12,HIGH); // acende o LED
  }
  else{ // se não estiver pressionado(LOW)
    digitalWrite(12,LOW);
  }
if(digitalRead(11) == HIGH) { // se botão2 tiver pressionado
  digitalWrite(13,HIGH); //acende o LED2
}
else{ // se não estiver pressionado(LOW)
  digitalWrite(13,LOW);
}
}
