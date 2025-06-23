#include <Servo.h>

Servo servo;
int pot = A2; 
int potValor = 0; // armazena o valor referente ao angulo do potenciometro (0 - 1023)
int conv; //armazena a conversao de potValor para graus (0 - 180)

void setup() {
  
 Serial.begin(9600);
 servo.attach(10);
 
}

void loop() {

  potValor = analogRead(pot); 
  conv = (potValor*180.0)/1023.0; // faz a conversão (regra de tres) - usando float para maior precisão
  servo.write((int)conv);  
  

}
