int pulsador = A0;   
const int ledCount = 9;

int ledPins[] = {
  2, 3, 4, 5, 6, 7, 8, 9, 10
}; 

void setup() {
    for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    pinMode(ledPins[thisLed], OUTPUT);
  }
}

void loop() {
  
//  int sensorReading = analogRead(analogPin);
  int avionesneg = 8;

/*  for(int aviones; aviones<4; aviones++){
      digitalWrite(ledPins[aviones], HIGH);
      digitalWrite(ledPins[avionesneg], HIGH);
      delay(100);
      digitalWrite(ledPins[aviones], LOW);
      digitalWrite(ledPins[avionesneg], LOW);
      avionesneg = avionesneg-1;
      if( avionesneg = 4)
        avionesneg = 8;
  }*/

  
/*  digitalWrite(ledPins[0], HIGH);
  delay(100);
  digitalWrite(ledPins[0], LOW);
  digitalWrite(ledPins[1], HIGH);
  delay(100);
  digitalWrite(ledPins[1], LOW);
  digitalWrite(ledPins[2], HIGH);
  delay(100);
  digitalWrite(ledPins[2], LOW);
  digitalWrite(ledPins[3], HIGH);
  delay(100);
  digitalWrite(ledPins[3], LOW);
  digitalWrite(ledPins[4], HIGH);
  delay(100);
  digitalWrite(ledPins[4], LOW);
  digitalWrite(ledPins[5], HIGH);
  delay(100);
  digitalWrite(ledPins[5], LOW);
  digitalWrite(ledPins[6], HIGH);
  delay(100);
  digitalWrite(ledPins[6], LOW);
  digitalWrite(ledPins[7], HIGH);
  delay(100);
  digitalWrite(ledPins[7], LOW);
  digitalWrite(ledPins[8], HIGH);
  delay(100);
  digitalWrite(ledPins[0], HIGH);
  delay(100);
  digitalWrite(ledPins[0], LOW);
  digitalWrite(ledPins[1], HIGH);
  delay(100);
  digitalWrite(ledPins[1], LOW);
  digitalWrite(ledPins[2], HIGH);
  delay(100);
  digitalWrite(ledPins[2], LOW);
  digitalWrite(ledPins[3], HIGH);
  delay(100);
  digitalWrite(ledPins[3], LOW);
  digitalWrite(ledPins[4], HIGH);
  delay(100);
  digitalWrite(ledPins[4], LOW);
  digitalWrite(ledPins[5], HIGH);
  delay(100);
  digitalWrite(ledPins[5], LOW);
  digitalWrite(ledPins[6], HIGH);
  delay(100);
  digitalWrite(ledPins[6], LOW);
  digitalWrite(ledPins[7], HIGH);
  delay(100);
  digitalWrite(ledPins[0], HIGH);
  delay(100);
  digitalWrite(ledPins[0], LOW);
  digitalWrite(ledPins[1], HIGH);
  delay(100);
  digitalWrite(ledPins[1], LOW);
  digitalWrite(ledPins[2], HIGH);
  delay(100);
  digitalWrite(ledPins[2], LOW);
  digitalWrite(ledPins[3], HIGH);
  delay(100);
  digitalWrite(ledPins[3], LOW);
  digitalWrite(ledPins[4], HIGH);
  delay(100);
  digitalWrite(ledPins[4], LOW);
  digitalWrite(ledPins[5], HIGH);
  delay(100);
  digitalWrite(ledPins[5], LOW);
  digitalWrite(ledPins[6], HIGH);
  delay(100);
  digitalWrite(ledPins[0], HIGH);
  delay(100);
  digitalWrite(ledPins[0], LOW);
  digitalWrite(ledPins[1], HIGH);
  delay(100);
  digitalWrite(ledPins[1], LOW);
  digitalWrite(ledPins[2], HIGH);
  delay(100);
  digitalWrite(ledPins[2], LOW);
  digitalWrite(ledPins[3], HIGH);
  delay(100);
  digitalWrite(ledPins[3], LOW);
  digitalWrite(ledPins[4], HIGH);
  delay(100);
  digitalWrite(ledPins[4], LOW);
  digitalWrite(ledPins[5], HIGH);
  delay(100);
  digitalWrite(ledPins[0], HIGH);
  delay(100);
  digitalWrite(ledPins[0], LOW);
  digitalWrite(ledPins[1], HIGH);
  delay(100);
  digitalWrite(ledPins[1], LOW);
  digitalWrite(ledPins[2], HIGH);
  delay(100);
  digitalWrite(ledPins[2], LOW);
  digitalWrite(ledPins[3], HIGH);
  delay(100);
  digitalWrite(ledPins[3], LOW);
  digitalWrite(ledPins[4], HIGH);
  delay(100);
  digitalWrite(ledPins[0], HIGH);
  delay(100);
  digitalWrite(ledPins[0], LOW);
  digitalWrite(ledPins[1], HIGH);
  delay(100);
  digitalWrite(ledPins[1], LOW);
  digitalWrite(ledPins[2], HIGH);
  delay(100);
  digitalWrite(ledPins[2], LOW);
  digitalWrite(ledPins[3], HIGH);
  delay(100);
  digitalWrite(ledPins[0], LOW);
  digitalWrite(ledPins[1], HIGH);
  delay(100);
  digitalWrite(ledPins[1], LOW);
  digitalWrite(ledPins[2], HIGH);
  delay(100);
  digitalWrite(ledPins[3], HIGH);
  digitalWrite(ledPins[0], HIGH);
  delay(100);
  digitalWrite(ledPins[0], LOW);
  digitalWrite(ledPins[1], HIGH);
  delay(100);
  digitalWrite(ledPins[0], HIGH);
  delay(100);
  digitalWrite(ledPins[0], LOW);
  digitalWrite(ledPins[1], LOW);
  digitalWrite(ledPins[2], LOW);
  digitalWrite(ledPins[3], LOW);
  digitalWrite(ledPins[4], LOW);
  digitalWrite(ledPins[5], LOW);
  digitalWrite(ledPins[6], LOW);
  digitalWrite(ledPins[7], LOW);
  digitalWrite(ledPins[8], LOW);
  delay(100);
  digitalWrite(ledPins[0], HIGH);
  delay(100);
  digitalWrite(ledPins[0], LOW);
  digitalWrite(ledPins[1], HIGH);
  delay(100);
  digitalWrite(ledPins[1], LOW);
  digitalWrite(ledPins[2], HIGH);
  delay(100);
  digitalWrite(ledPins[2], LOW);
  digitalWrite(ledPins[3], HIGH);
  delay(100);
  digitalWrite(ledPins[3], LOW);
  digitalWrite(ledPins[4], HIGH);
  delay(100);
  digitalWrite(ledPins[4], LOW);
  digitalWrite(ledPins[5], HIGH);
  delay(100);
  digitalWrite(ledPins[5], LOW);
  digitalWrite(ledPins[6], HIGH);
  delay(100);
  digitalWrite(ledPins[6], LOW);
  digitalWrite(ledPins[7], HIGH);
  delay(100);
  digitalWrite(ledPins[7], LOW);
  digitalWrite(ledPins[8], HIGH);
  delay(100);
  digitalWrite(ledPins[8], LOW);
*/

digitalWrite(ledPins[0], HIGH);
  }

