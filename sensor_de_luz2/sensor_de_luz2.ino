const int pinoLDR = A0; // pino onde o LRD está conectado
const int pinoLED = 7; // pino onde o LED está conectado
int leitura = 0; // variável para armazenar o valor lido pelo ADC
float tensao = 0.0; // variável para armazenar a tensão

void setup() {
  Serial.begin(9600);// 9600bps

  
  // configura os pinos do LDR e LED
  pinMode(pinoLDR, INPUT); 
  pinMode(pinoLED, OUTPUT);
}
void loop() {
  // le o valor de ADC no pino do LDR
  leitura = analogRead(pinoLDR);
  
// imprime valor lido pelo arduino(0 a 1023)
  Serial.print("Leitura:");
  Serial.print(leitura);
  Serial.print("\t"); //tabulação

  //converte e imprime o valor em tensão elétrica

  tensao = leitura * 5.0/1024.0;
  Serial.print("Tensão: ");
  Serial.print (tensao);
  Serial.print("V");

  Serial.println(); //nova linha


  // verifica luminosidade do ambiente
  if(leitura < 40){ // se a luminosidade for menor que 40
    digitalWrite(pinoLED,HIGH); // acende o LED
  }
  else { // se não
    digitalWrite(pinoLED,LOW); // apaga o LED
  }
  delay(1000); // aguarda 100 milissegundos para uma nova leitura
}
