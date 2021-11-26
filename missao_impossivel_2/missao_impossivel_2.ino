// Declaração dos pinos dos componentes

const int pinoLDR = A0;
const int pinoBuzzer = 9;
const int pinoBotao = 8; 

// Variáveis gerais

int leituraLDR = 0;
int leituraBotao = 0;

void setup() {
  // Configura os pinos
 Serial.begin(9600);
  
  pinMode(pinoLDR, INPUT);
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoBotao, INPUT_PULLUP);
}

void loop() {
  // le o valor de tensão no pino do LDR
  leituraLDR = analogRead(pinoLDR);
  // le o estado do botao
  leituraBotao = digitalRead(pinoBotao);
  
  // Se existir um obstáculo
  if (leituraLDR == HIGH) {
    tone(pinoBuzzer, 1000); // aciona o buzzer
  }
  else if (leituraBotao == LOW) { // senão e o botão estiver pressionado
    noTone(pinoBuzzer); // desliga o buzzer
  }
  
  delay(100); // aguarda 100 milissegundos para uma nova leitura
}
