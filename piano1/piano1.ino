
const int pino_buzzer = 10; // pino onde o buzzer está conectado

//Frequencias de cada nota musical
const int c = 261;//Dó
const int d = 293;//Ré
const int e = 329;//Mi
const int f = 349;//Fá
const int g = 391;//Sol
const int a = 440;//Lá
const int b = 493; //Si
void setup() {
  pinMode(pino_buzzer,OUTPUT);// configura o pino com o buzzer como saída
  

}

void loop() {
  // Toca a nota Dó por 1 segundo
  tone(pino_buzzer,c);
  delay(1000);
  //Toca a nota Ré por 1 segundo
  tone(pino_buzzer,d);
  delay(1000);
  // Toca a nota Mi por 1 segundo
  tone(pino_buzzer, e );
  delay(1000);
  //Toca a nota Fá por 1 segundo
  tone(pino_buzzer, f);
  delay(1000);
  //Toca a nota Sol por 1 segundo
  tone(pino_buzzer, g);
  delay(1000);
  //Toca a nota Lá por 1 segundo
  tone(pino_buzzer, a);
  delay(1000);
  //Toca a nota Si por 1 segundo
  tone(pino_buzzer, b);
  delay(1000);

 // Desliga o buzzer por 2 segundos
 noTone(pino_buzzer);
 delay(2000);
  

}
