
const int pinoLEDR = 11;
const int pinoLEDG = 10;
const int pinoLEDB = 9;
const int pinoBotaoR = 7;
const int pinoBotaoG = 6;
const int pinoBotaoB = 5;
const int pinoBotaoA = 4;
const int pinoPotenciometro = A0;

int leituraBotaoR;
int leituraBotaoG;
int leituraBotaoB;
int leituraBotaoA;
int leituraPotenciometro;
int pwmR = 255;
int pwmG = 255;
int pwmB = 255;


void setup() {
pinMode (pinoLEDR, OUTPUT);
pinMode (pinoLEDG, OUTPUT);
pinMode (pinoLEDB, OUTPUT);
pinMode (pinoBotaoR, INPUT_PULLUP);
pinMode (pinoBotaoG, INPUT_PULLUP);
pinMode (pinoBotaoB, INPUT_PULLUP);
pinMode (pinoBotaoA, INPUT_PULLUP);
pinMode (pinoPotenciometro, INPUT);
}

void loop() {


leituraBotaoR = digitalRead(pinoBotaoR);
leituraBotaoG = digitalRead(pinoBotaoG);
leituraBotaoB = digitalRead(pinoBotaoB);
leituraBotaoA = digitalRead(pinoBotaoA);
leituraPotenciometro = analogRead(pinoPotenciometro);

if(leituraBotaoR == LOW) {
  if (leituraBotaoA == LOW){
    pwmR = map(leituraPotenciometro, 0, 1023, 0, 255);
  
  analogWrite (pinoLEDR, pwmR);
  } else {
    analogWrite (pinoLEDR, 0);
  }
if( leituraBotaoG == LOW){

  if (leituraBotaoA == LOW){
    pwmG = map(leituraPotenciometro, 0, 1023, 0, 255);
  }
  analogWrite (pinoLEDG, pwmG);
} else {
  analogWrite(pinoLEDG, 0);
}
if (leituraBotaoB == LOW){
  if(leituraBotaoA == LOW){
    pwmB = map(leituraPotenciometro, 0, 1023, 0, 255);
  }
  analogWrite(pinoLEDB, pwmB);
} else{
  analogWrite (pinoLEDB, 0);
}
delay (100);
} 
}


  
  
