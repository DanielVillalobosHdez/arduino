void setup() {

  pinMode( 8, OUTPUT );
  pinMode( 9, OUTPUT );
  pinMode( 10, OUTPUT );
  pinMode( 11, OUTPUT );
  pinMode( 12, OUTPUT );
  pinMode( 13, OUTPUT );

  pinMode( 0, OUTPUT );
  pinMode( 1, OUTPUT );
  pinMode( 2, OUTPUT );
  pinMode( 3, OUTPUT );
  pinMode( 4, OUTPUT );
  pinMode( 5, OUTPUT );
  pinMode( 6, OUTPUT );
  pinMode( 7, OUTPUT );

   for( int f = 0; f < 7; f++) {
     digitalWrite( f, HIGH);
   }
   for( int c = 8; c < 13; c++) {
     digitalWrite( c, LOW);
   }
}

void loop()
{
 for(int c = 0; c < 7; c++) {
  for(int f = 8; f < 13; f++) { 
    digitalWrite(c, LOW);
    digitalWrite(f, HIGH);
    delay(160);
    digitalWrite(c, HIGH);
    digitalWrite(f, LOW);
  }
 }

  for(int c = 0; c < 7; c++) {
  for(int f = 8; f < 13; f++) { 
    digitalWrite(c, HIGH);
    digitalWrite(f, LOW);
  }
 }
 
  
 
 for(int c = 7; c >= 0; c--) {
  for(int f = 13; f >= 8; f--) { 
    digitalWrite(c, LOW);
    digitalWrite(f, HIGH);
    delay(160);
    digitalWrite(c, HIGH);
    digitalWrite(f, LOW);
    
  }
 }

  for(int c = 0; c < 7; c++) {
  for(int f = 8; f < 13; f++) { 
    digitalWrite(c, HIGH);
    digitalWrite(f, LOW);
  }
 }

  for(int f = 8; f < 13; f++) { 
    digitalWrite(0, LOW);
    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(f, HIGH);
    delay(160);
    digitalWrite(f, LOW);
  }

  for(int c = 0; c < 7; c++) {
  for(int f = 8; f < 13; f++) { 
    digitalWrite(c, HIGH);
    digitalWrite(f, LOW);
  }
 }
 
for(int c = 0; c < 7; c++) {
    digitalWrite(c, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    delay(160);
    digitalWrite(c, HIGH);
  }

   for(int c = 0; c < 7; c++) {
  for(int f = 8; f < 13; f++) { 
    digitalWrite(c, HIGH);
    digitalWrite(f, LOW);
  }
 }
 
for(int c = 0; c < 7; c++) {
  for(int f = 8; f < 13; f++) { 
    digitalWrite(c, LOW);
    digitalWrite(f, HIGH);
  }
 }
 
  for(int c = 0; c < 7; c++) {
  for(int f = 8; f < 13; f++) { 
    digitalWrite(c, HIGH);
    digitalWrite(f, LOW);
  }
 }




}
