//Pinos responsáveis pelo código BCD
const int pino_a = 12;
const int pino_b = 9;
const int pino_c = 10;
const int pino_d = 11;

//Pino para o botão de sorteio
const int pino_botao = 2 ; 

int  leitura_botao, resultado; //  variáveis para leitura do botão 

void setup() {
  Serial.begin(9600);
  //Configuraçao dos pinos do código BCD
  pinMode(pino_a, OUTPUT); //digito menos significativo
  pinMode(pino_b, OUTPUT);
  pinMode(pino_c, OUTPUT);
  pinMode(pino_d, OUTPUT); //digito mais significativo

  pinMode(pino_botao, INPUT_PULLUP); //pino para o botão de sorteio
}

void loop() {
  leitura_botao = digitalRead(pino_botao); // leitura do botão
  if (leitura_botao == LOW) {  // verifica se o botão foi pressionado
    delay(150); // delay de 100 ms para que o código não fique sorteando diversos números
    resultado = random(1, 9);// sorteia valores de 1 a 8
    switch (resultado) { // verifica em qual case o valor da variável resultado é igual
      case 1: // aciona os pinos para o dígito 1, caso o valor da váriavel resultado seja igual a 1
        digitalWrite(pino_a, HIGH);
        digitalWrite(pino_b, LOW);
        digitalWrite(pino_c, LOW);
        digitalWrite(pino_d, LOW);
      break; // encerra o switch

      case 2: // aciona os pinos para o dígito 2, caso o valor da váriavel resultado seja igual a 2
        digitalWrite(pino_a, LOW);
        digitalWrite(pino_b, HIGH);
        digitalWrite(pino_c, LOW);
        digitalWrite(pino_d, LOW);
      break; // encerra o switch

      case 3: // aciona os pinos para o dígito 3, caso o valor da váriavel resultado seja igual a 3
        digitalWrite(pino_a, HIGH);
        digitalWrite(pino_b, HIGH);
        digitalWrite(pino_c, LOW);
        digitalWrite(pino_d, LOW);
      break; // encerra o switch

      case 4: // aciona os pinos para o dígito 4, caso o valor da váriavel resultado seja igual a 4
        digitalWrite(pino_a, LOW);
        digitalWrite(pino_b, LOW);
        digitalWrite(pino_c, HIGH);
        digitalWrite(pino_d, LOW);
      break; // encerra o switch

      case 5: // aciona os pinos para o dígito 5, caso o valor da váriavel resultado seja igual a 5
        digitalWrite(pino_a, HIGH);
        digitalWrite(pino_b, LOW);
        digitalWrite(pino_c, HIGH);
        digitalWrite(pino_d, LOW);
      break; // encerra o switch

      case 6: // aciona os pinos para o dígito 6, caso o valor da váriavel resultado seja igual a 6
        digitalWrite(pino_a, LOW);
        digitalWrite(pino_b, HIGH);
        digitalWrite(pino_c, HIGH);
        digitalWrite(pino_d, LOW);
      break; // encerra o switch

      case 7: // aciona os pinos para o dígito 7, caso o valor da váriavel resultado seja igual a 7
        digitalWrite(pino_a, HIGH);
        digitalWrite(pino_b, HIGH);
        digitalWrite(pino_c, HIGH);
        digitalWrite(pino_d, LOW);
      break; // encerra o switch

      case 8: // aciona os pinos para o dígito 8, caso o valor da váriavel resultado seja igual a 8
        digitalWrite(pino_a, LOW);
        digitalWrite(pino_b, LOW);
        digitalWrite(pino_c, LOW);
        digitalWrite(pino_d, HIGH);
      break; // encerra o switch
    }
  }
}
