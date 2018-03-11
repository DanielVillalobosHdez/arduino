#include <LedCube.h>
#include <newfix.h>

int Columnas[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int Filas[] = {12, 11, 10};


void setup() {
  int contador;
 
  for (int contador = 0; contador < 10; contador++) {
    pinMode(Columnas[contador], OUTPUT); 
  }
 
  for (int contador = 0; contador < 4; contador++) {
    pinMode(Filas[contador], OUTPUT); 
  }
}
 
void loop() {

 for(int c=0; c<10; c++){
    for(int f=0; f<3; f++){
      digitalWrite(Columnas[c], HIGH);
      digitalWrite(Filas[f], HIGH);      
    }
  }

}
