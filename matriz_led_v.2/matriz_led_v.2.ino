const int columna[5] = {8, 9, 10, 11, 12};
const int fila[7] = {0, 1, 2, 3, 4, 5, 6};

int pixeles[5][7];

void setup() {
  // put your setup code here, to run once:
  int pines;
  for (pines = 0; pines < 5; pines++){
  pinMode( columna[pines], OUTPUT );
  }
  for (pines = 0; pines < 7; pines++){
  pinMode( fila[pines], OUTPUT );
  }
  for (int x = 0; x < 5; x++) {
    for (int y = 0; y < 7; y++) {
      pixeles[x][y] = HIGH;
    }
  }
}


void loop() {
  digitalWrite(0, LOW);
  digitalWrite(8, HIGH);
  delay(100);
  digitalWrite(0, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(1, LOW);
  digitalWrite(9, HIGH);
  
  }
