
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
  
  tone(pino_buzzer,c);
  delay(400);
  
  tone(pino_buzzer,d);
  delay(400);
  
  tone(pino_buzzer, e );
  delay(400);
 
  tone(pino_buzzer, g);
  delay(400);
  
  tone(pino_buzzer, g);
  delay(400);
  
  tone(pino_buzzer, e);
  delay(400);
  
  tone(pino_buzzer, f);
  delay(400);

  tone(pino_buzzer, f);
  delay(400);

  noTone(pino_buzzer);
  delay(300);
  
  
  tone(pino_buzzer, c);
  delay(400);
  
  tone(pino_buzzer, d);
  delay(400);
  
  tone(pino_buzzer, e);
  delay(400);
    
  tone(pino_buzzer,g);
  delay(400);
   
   tone(pino_buzzer, g);
  delay(400);
    
  tone(pino_buzzer,f);
  delay(400);

  tone(pino_buzzer,e);
  delay(400);
  
  noTone(pino_buzzer);
  delay(300);
  
  tone(pino_buzzer,c);
  delay(400);
  
  tone(pino_buzzer, c );
  delay(400);
 
  tone(pino_buzzer, d);
  delay(400);  
   
    tone(pino_buzzer, e );
  delay(400);
 
  tone(pino_buzzer, g);
  delay(400);
  
  noTone(pino_buzzer);
  delay(300);

  tone(pino_buzzer, g);
  delay(400);
  
  tone(pino_buzzer, f);
  delay(400);

  tone(pino_buzzer,e);
  delay(400);
    
  tone(pino_buzzer,c);
  delay(400);

   tone(pino_buzzer,f);
  delay(400);

   noTone(pino_buzzer);
  delay(300);
  
  tone(pino_buzzer,f);
  delay(400);
  
  tone(pino_buzzer, e );
  delay(400);
 
  tone(pino_buzzer, d);
  delay(400);
  
  tone(pino_buzzer, d);
  delay(400);
  
  tone(pino_buzzer, e);
  delay(400);
  
  noTone(pino_buzzer);
  delay(300);
  
  tone(pino_buzzer, d);
  delay(400); 
  
 
  tone(pino_buzzer, d);
  delay(400);

  tone(pino_buzzer, c);
  delay(400);
    
  tone(pino_buzzer,c);
  delay(400);
  
     noTone(pino_buzzer);
  delay(300);
  
  //começa a virada
 
  
    
  tone(pino_buzzer,c);
  delay(400);
  
  tone(pino_buzzer,a);
  delay(400);
  
  tone(pino_buzzer, b );
  delay(400);
 
  tone(pino_buzzer, g);
  delay(400);
  
  tone(pino_buzzer, a);
  delay(400);
  
  tone(pino_buzzer, g);
  delay(400);
  
  tone(pino_buzzer, e);
  delay(400);

  tone(pino_buzzer, g);
  delay(400);
  
  tone(pino_buzzer, g);
  delay(400);
  
 noTone(pino_buzzer);
 delay(2000);
  

}
