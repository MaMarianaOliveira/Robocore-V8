//Pinos responsáveis pelo código BCD
const int pino_a = 12;
const int pino_b = 9;
const int pino_c = 10;
const int pino_d = 11;

//Pino para o botão de sorteio
const int pino_botao = 2 ;

int  leitura_botao, resultado, i, resultado_1 = 0, resultado_2 = 0, resultado_3 = 0, resultado_4 = 0, resultado_5 = 0, resultado_6 = 0; //  variáveis para leitura do botão

void setup() {
  Serial.begin(9600);
  //Configuraçao dos pinos do código BCD
  pinMode(pino_a, OUTPUT); //digito menos significativo
  pinMode(pino_b, OUTPUT);
  pinMode(pino_c, OUTPUT);
  pinMode(pino_d, OUTPUT); //digito mais significativo

  pinMode(pino_botao, INPUT_PULLUP); //pino para o botão de sorteio
  
  Serial.println("|1|\t|2|\t|3|\t|4|\t|5|\t|6|");
}

void loop() {
  leitura_botao = digitalRead(pino_botao); // leitura do botão
  if (leitura_botao == LOW) {  // verifica se o botão foi pressionado
    resultado_1 = 0;
    resultado_2 = 0;
    resultado_3 = 0;
    resultado_4 = 0;
    resultado_5 = 0;
    resultado_6 = 0;
    delay(10); // delay de 100 ms para que o código não fique sorteando diversos números
    for (i = 0; i < 1000; i++) {
      resultado = random(1, 7); // sorteia valores de 1 a 6
      if (resultado != 2) {
        resultado = random(1, 7); // sorteia valores de 1 a 6
      }
      if (resultado == 1) {
        resultado_1 ++;
      }
      else if (resultado == 2) {
        resultado_2 ++;
      }
      else if (resultado == 3) {
        resultado_3 ++;
      }
      else if (resultado == 4) {
        resultado_4 ++;
      }
      else if (resultado == 5) {
        resultado_5 ++;
      }
      else if (resultado == 6) {
        resultado_6 ++;
      }
    }
    Serial.print(resultado_1);
    Serial.print("\t"); // tabulação
    Serial.print(resultado_2);
    Serial.print("\t"); // tabulação
    Serial.print(resultado_3);
    Serial.print("\t"); // tabulação
    Serial.print(resultado_4);
    Serial.print("\t"); // tabulação
    Serial.print(resultado_5);
    Serial.print("\t"); // tabulação
    Serial.println(resultado_6);
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
    }
  }
}
