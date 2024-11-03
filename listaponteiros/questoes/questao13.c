#include <stdio.h>

int main(){
  /* programa 1 */
  char x[4], *p1;
  p1 = x;

  printf("p1 = x + 0: %p \n", p1);
  p1 = x + 1;
  printf("p1 = x + 1: %p \n", p1);
  p1 = x + 2;
  printf("p1 = x + 2: %p \n", p1);
  p1 = x + 3;
  printf("p1 = x + 3: %p \n \n", p1);

  /* programa 2 */
  int y[4], *p2;
  p2 = y;

  printf("p2 = y + 0: %p \n", p2);
  p2 = y + 1;
  printf("p2 = y + 1: %p \n", p2);
  p2 = y + 2;
  printf("p2 = y + 2: %p \n", p2);
  p2 = y + 3;
  printf("p2 = y + 3: %p \n \n", p2);

  /* programa 3 */
  float z[4], *p3;
  p3 = z;

  printf("p3 = z + 0: %p \n", p3);
  p3 = z + 1;
  printf("p3 = z + 1: %p \n", p3);
  p3 = z + 2;
  printf("p3 = z + 2: %p \n", p3);
  p3 = z + 3;
  printf("p3 = z + 3: %p \n \n", p3);

  /* programa 4 */
  double w[4], *p4;
  p4 = w;

  printf("p4 = w + 0: %p \n", p4);
  p4 = w + 1;
  printf("p4 = w + 1: %p \n", p4);
  p4 = w + 2;
  printf("p4 = w + 2: %p \n", p4);
  p4 = w + 3;
  printf("p4 = w + 3: %p \n \n", p4);

  return 0;
}

// Devido ao tipo 'char' ocupar 1 byte na memória [de acordo com a questão], no programa 1,
// os comandos 'x + 1', 'x + 2' e 'x + 3' imprimirão na tela
// 4093, 4094 e 4095, respectivamente. No meu programa, o endereço
// de x foi o seguinte: 000000000061FDFC. Assim, x + 1 resultou
// em 000000000061FDFD, x + 2 resultou em 000000000061FDFE e assim sucessivamente.

// Devido ao tipo 'int' ocupar 2 bytes na memória [de acordo com a questão], no programa 2,
// os comandos 'y + 1', 'y + 2' e 'y + 3' imprimirão na tela
// 4094, 4096 e 4098, respectivamente. No meu programa, o endereço
// de y foi o seguinte: 000000000061FDE0. Assim, y + 1 resultou
// em 000000000061FDE4, y + 2 resultou em 000000000061FDE8 e assim sucessivamente.

// Devido ao tipo 'float' ocupar 4 bytes na memória [de acordo com a questão], no programa 3,
// os comandos 'z + 1', 'z + 2' e 'z + 3' imprimirão na tela
// 4096, 4100 e 4104, respectivamente. No meu programa, o endereço
// de z foi o seguinte: 000000000061FDD0. Assim, z + 1 resultou
// em 000000000061FDD4, z + 2 resultou em 000000000061FDD8 e assim sucessivamente.

// Devido ao tipo 'double' ocupar 8 bytes na memória [de acordo com a questão], no programa 4,
// os comandos 'w + 1', 'w + 2' e 'w + 3' imprimirão na tela
// 4100, 4108 e 4116, respectivamente. No meu programa, o endereço
// de w foi o seguinte: 000000000061FDB0. Assim, z + 1 resultou
// em 000000000061FDB8, z + 2 resultou em 000000000061FDC0 e assim sucessivamente.
