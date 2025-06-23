const int TRIGGER_PIN = A0;
const int ECHO_PIN = A1;
const int inter_time = 1000;
const int ledVerde1 = 13;
const int ledVerde2 = 12;
const int ledAmarelo1 = 11;
const int ledAmarelo2 = 10;
const int ledVermelho1 = 9;
const int ledVermelho2 = 8;
const int buzzer = 3;
int distancia;

void setup() {
  
  Serial.begin(9600);
  	pinMode(TRIGGER_PIN, OUTPUT); // define os pinos como entrada/saída
  	pinMode(ECHO_PIN, INPUT);
  	pinMode(ledVerde1, OUTPUT);
  	pinMode(ledVerde2, OUTPUT);
  	pinMode(ledAmarelo1, OUTPUT);
  	pinMode(ledAmarelo2, OUTPUT);
  	pinMode(ledVermelho1, OUTPUT);
  	pinMode(ledVermelho2, OUTPUT);
  	pinMode(buzzer, OUTPUT);

}


void loop() {
  digitalWrite(TRIGGER_PIN, LOW);  
	delayMicroseconds(2);  
	digitalWrite(TRIGGER_PIN, HIGH);  
	delayMicroseconds(10);  
	digitalWrite(TRIGGER_PIN, LOW);  // medir a distancia, garantindo que o sensor estava desligado inicialmente


  distancia = pulseIn(ECHO_PIN, HIGH);
  distancia = distancia*0.034/2;
  Serial.println(distancia);

   if (distancia == 0 || distancia >= 332) { 
    digitalWrite(ledVerde1,LOW);
    digitalWrite(ledVerde2,LOW);
    digitalWrite(ledAmarelo1,LOW);
    digitalWrite(ledAmarelo2,LOW);
    digitalWrite(ledVermelho1,LOW);
    digitalWrite(ledVermelho2,LOW);
    noTone(buzzer); 
    delay(500);
   }
  else if(distancia >= 200 && distancia <= 332){
    digitalWrite(ledVerde1,HIGH);
    digitalWrite(ledVerde2,HIGH);
    tone(buzzer, 500);
    delay(500);
    noTone(buzzer); 
    digitalWrite(ledVerde1,LOW);
    digitalWrite(ledVerde2,LOW);
    
  }
  else if(distancia >= 100 && distancia < 200){
    digitalWrite(ledAmarelo1,HIGH);
    digitalWrite(ledAmarelo2,HIGH);
    tone(buzzer, 1000);
    delay(500);
    noTone(buzzer); 
    digitalWrite(ledAmarelo1,LOW);
    digitalWrite(ledAmarelo2,LOW);
  }
  else if(distancia >= 2 && distancia < 100){
    digitalWrite(ledVermelho1,HIGH);
    digitalWrite(ledVermelho2,HIGH);
    tone(buzzer, 2000);
    delay(500);
    noTone(buzzer); 
    digitalWrite(ledVermelho1,LOW);
    digitalWrite(ledVermelho2,LOW);
  }
  
  delay(100);const int TRIGGER_PIN = A0;
const int ECHO_PIN = A1;
const int inter_time = 1000;
const int ledVerde1 = 13;
const int ledVerde2 = 12;
const int ledAmarelo1 = 11;
const int ledAmarelo2 = 10;
const int ledVermelho1 = 9;
const int ledVermelho2 = 8;
const int buzzer = 3;
int distancia;

void setup() {
  
  Serial.begin(9600);
  pinMode(TRIGGER_PIN, OUTPUT); // define os pinos como entrada/saída
  pinMode(ECHO_PIN, INPUT);
  pinMode(ledVerde1, OUTPUT);
  pinMode(ledVerde2, OUTPUT);
  pinMode(ledAmarelo1, OUTPUT);
  pinMode(ledAmarelo2, OUTPUT);
  pinMode(ledVermelho1, OUTPUT);
  pinMode(ledVermelho2, OUTPUT);
  pinMode(buzzer, OUTPUT);

}


void loop() {
  digitalWrite(TRIGGER_PIN, LOW);  
  delayMicroseconds(2);  
  digitalWrite(TRIGGER_PIN, HIGH);  
  delayMicroseconds(10);  
  digitalWrite(TRIGGER_PIN, LOW);  // medir a distancia, garantindo que o sensor estava desligado inicialmente


  distancia = pulseIn(ECHO_PIN, HIGH); 
  distancia = distancia*0.034/2; // converte a duração lida pelo pulseIn em distância
  // Serial.println(distancia);

  // ativam os leds e definem a frequência dos buzzers de acordo com a distância: 
  if (distancia == 0 || distancia >= 332) { 
    digitalWrite(ledVerde1,LOW);
    digitalWrite(ledVerde2,LOW);
    digitalWrite(ledAmarelo1,LOW);
    digitalWrite(ledAmarelo2,LOW);
    digitalWrite(ledVermelho1,LOW);
    digitalWrite(ledVermelho2,LOW);
    noTone(buzzer); 
    delay(500);
   }
  else if(distancia >= 200 && distancia <= 332){
    digitalWrite(ledVerde1,HIGH);
    digitalWrite(ledVerde2,HIGH);
    tone(buzzer, 500);
    delay(500);
    noTone(buzzer); 
    digitalWrite(ledVerde1,LOW);
    digitalWrite(ledVerde2,LOW);
    
  }
  else if(distancia >= 100 && distancia < 200){
    digitalWrite(ledAmarelo1,HIGH);
    digitalWrite(ledAmarelo2,HIGH);
    tone(buzzer, 1000);
    delay(500);
    noTone(buzzer); 
    digitalWrite(ledAmarelo1,LOW);
    digitalWrite(ledAmarelo2,LOW);
  }
  else if(distancia >= 2 && distancia < 100){
    digitalWrite(ledVermelho1,HIGH);
    digitalWrite(ledVermelho2,HIGH);
    tone(buzzer, 2000);
    delay(500);
    noTone(buzzer); 
    digitalWrite(ledVermelho1,LOW);
    digitalWrite(ledVermelho2,LOW);
  }
  
  delay(100);
  
}
  
}