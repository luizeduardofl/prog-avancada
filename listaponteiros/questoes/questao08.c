#include <stdio.h>

int main(){
  int pulo[10];
  int x, y, z, w;

  for (int i = 0; i < 10; i++){
    pulo[i] = 15 + i;
}

  x = *(pulo + 2);
  y = *(pulo + 4);
  z = pulo + 4;
  w = pulo + 2;

  printf("%d \n", x);
  printf("%d \n", y);
  printf("%d \n", z);
  printf("%d \n", w);
  return 0;
}

// Apenas a primeira expressão faz referência
// ao terceiro valor do vetor 'pulo'.
