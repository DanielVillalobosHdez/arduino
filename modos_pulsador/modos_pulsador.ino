int pulsador = 13;   
const int ledCount = 8;

int ledPins[] = {
  2, 3, 4, 5, 6, 7, 8, 9
}; 

void setup() {
 for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    pinMode(ledPins[thisLed], OUTPUT);
  }
 pinMode(pulsador, INPUT);
}

void loop() {
  
  int modo1 = digitalRead(pulsador);
  int modo = 0;

   digitalWrite(ledPins[7], HIGH);
      digitalWrite(ledPins[6], LOW);
      digitalWrite(ledPins[5], HIGH);
      digitalWrite(ledPins[4], LOW);
      digitalWrite(ledPins[3], HIGH);
      digitalWrite(ledPins[2], LOW);
      digitalWrite(ledPins[1], HIGH);
      digitalWrite(ledPins[0], LOW);    
      delay(100);
      digitalWrite(ledPins[7], LOW);
      digitalWrite(ledPins[6], HIGH);
      digitalWrite(ledPins[5], LOW);
      digitalWrite(ledPins[4], HIGH);
      digitalWrite(ledPins[3], LOW);
      digitalWrite(ledPins[2], HIGH);
      digitalWrite(ledPins[1], LOW);
      digitalWrite(ledPins[0], HIGH);

  if(modo1 == LOW){
     digitalWrite(ledPins[7], LOW);
      digitalWrite(ledPins[6], LOW);
      digitalWrite(ledPins[5], LOW);
      digitalWrite(ledPins[4], LOW);
      digitalWrite(ledPins[3], LOW);
      digitalWrite(ledPins[2], LOW);
      digitalWrite(ledPins[1], LOW);
      digitalWrite(ledPins[0], LOW);
  }  
}
