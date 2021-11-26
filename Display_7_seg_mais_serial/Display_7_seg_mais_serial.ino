//Pinos responsaveis pelo código BCD
const int pino_a = 12; 
const int pino_b = 9; 
const int pino_c = 10; 
const int pino_d = 11; 

char  leitura_serial;
void setup() {
  //Configuraçao dos pinos
  pinMode(pino_a, OUTPUT); 
  pinMode(pino_b, OUTPUT);
  pinMode(pino_c, OUTPUT);
  pinMode(pino_d, OUTPUT);
  
  //Inicializacao da comunicacao serial
  Serial.begin(9600);
  Serial.println("Digite um numero de 0 a 9");
}

void loop() {
  if(Serial.available()>0){ // Verifica se há algum byte na porta serial
    leitura_serial = Serial.read(); // Armazena os bytes da porta serial
    Serial.println(leitura_serial); // Exibe o que foi armazenado
    leitura_serial = leitura_serial - 48;
      if(leitura_serial == 0){
          digitalWrite(pino_a, LOW);
          digitalWrite(pino_b, LOW);
          digitalWrite(pino_c, LOW);
          digitalWrite(pino_d, LOW);
      }
        
      if(leitura_serial == 1){
          digitalWrite(pino_a, HIGH);
          digitalWrite(pino_b, LOW);
          digitalWrite(pino_c, LOW);
          digitalWrite(pino_d, LOW);
      }
        
      if(leitura_serial == 2){
          digitalWrite(pino_a, LOW);
          digitalWrite(pino_b, HIGH);
          digitalWrite(pino_c, LOW);
          digitalWrite(pino_d, LOW);
      }
        
      if(leitura_serial == 3){
          digitalWrite(pino_a, HIGH);
          digitalWrite(pino_b, HIGH);
          digitalWrite(pino_c, LOW);
          digitalWrite(pino_d, LOW);
      }
        
      if(leitura_serial == 4){
          digitalWrite(pino_a, LOW);
          digitalWrite(pino_b, LOW);
          digitalWrite(pino_c, HIGH);
          digitalWrite(pino_d, LOW);
      }
        
      if(leitura_serial == 5){
          digitalWrite(pino_a, HIGH);
          digitalWrite(pino_b, LOW);
          digitalWrite(pino_c, HIGH);
          digitalWrite(pino_d, LOW);
      }
        
      if(leitura_serial == 6){
          digitalWrite(pino_a, LOW);
          digitalWrite(pino_b, HIGH);
          digitalWrite(pino_c, HIGH);
          digitalWrite(pino_d, LOW);
      }
        
      if(leitura_serial == 7){
          digitalWrite(pino_a, HIGH);
          digitalWrite(pino_b, HIGH);
          digitalWrite(pino_c, HIGH);
          digitalWrite(pino_d, LOW);
      }
        
      if(leitura_serial == 8){
          digitalWrite(pino_a, LOW);
          digitalWrite(pino_b, LOW);
          digitalWrite(pino_c, LOW);
          digitalWrite(pino_d, HIGH);
      }
        
      if(leitura_serial == 9){
          digitalWrite(pino_a, HIGH);
          digitalWrite(pino_b, LOW);
          digitalWrite(pino_c, LOW);
          digitalWrite(pino_d, HIGH);
      }
    }
  }
