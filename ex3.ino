// dados para LCD:
// lcd.setCursor(0, 0); --> coloca o cursor na (coluna 0, linha 0)


#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int LED_PIN = 10;
const int PIR_PIN = 9;

void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
  pinMode(PIR_PIN, INPUT); // configura o pino do sensor PIR para entrada
  lcd.begin(16,2); // inicializa o lcd
}

void loop() {
  
  if(digitalRead(PIR_PIN) == 1){ // se o sensor PIR tiver valor 1/HIGH (detectou movimento)

    digitalWrite(LED_PIN, HIGH);
    lcd.setCursor(0,0); // imprime no lcd:
    lcd.print("Movimento");
    lcd.setCursor(0,1);
    lcd.print("Detectado!"); 
    delay(500);
    digitalWrite(LED_PIN, LOW);
    lcd.clear(); // limpa o lcd
    
  }
  else if(digitalRead(PIR_PIN) == 0) { // se não, se o sensor PIR tiver valor 0/LOW (não detectou movimento)

    lcd.setCursor(0,0);
    lcd.print("Nenhum movimento");
    lcd.setCursor(0,1);
    lcd.print("foi detectado!");
    delay(500);
    lcd.clear();
    
  }
  
}
 