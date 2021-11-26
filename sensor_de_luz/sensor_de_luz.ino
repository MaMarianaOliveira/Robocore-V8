
const int pinoLDR = A0;// pino onde o LDR está conectado
int leitura = 0;//variável para armazenar o valor lido pelo ADC
float tensao = 0.0; // variável para armazenar a tensão




void setup() {
 //Inicia e configura a Serial
 Serial.begin(9600);// 9600bps

 //configura o pino com LDR como entrada

 pinMode(pinoLDR, INPUT); // pino A0
 
 }

void loop() {
  //le o valor de tensão no pino do LDR
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

  delay(1000); // aguarda 1 segundo para uma nova leitura
}
