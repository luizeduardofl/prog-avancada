#include <stdio.h>
int f(int a, int *pb, int **ppc) {
  int b, c;
  **ppc += 1;
  c = **ppc;
  *pb += 2;
  b = *pb;
  a += 3;
  return a + b + c;
}
void main() {
  int c, *b, **a;
  c = 5;
  b = &c;
  a = &b;
  printf("%d \n", f(c, b, a));
  getchar();
}

/*
Na fun��o 'f', s�o passados como argumentos um
inteiro 'a', um ponteiro para inteiro 'pb' e um ponteiro
duplo para inteiro 'ppc'.

Em 'main', 'c' = 5, 'b' aponta para 'c' e 'a' aponta para 'b'.

Aten��o: n�o confunda as vari�veis locais de 'main': 'a', 'b' e 'c'
com as vari�veis locais de 'f' de mesmo nome.

Ao executar 'f(c, b, a)', '**ppc += 1' incrementa em 1 o valor
de 'c' de 'main', que se torna igual a 6. '*pb += 2' incrementa-o em 2, e
armazena-o na vari�vel local 'c', que fica igual a 8.
A vari�vel local 'b' � criada em 'f' com valor 8 tamb�m.

Por fim, em 'f', a vari�vel local 'a' recebe o valor de 'c' de 'main', que � 5 durante
a execu��o, e � somada a 3. Ou seja, na �ltima linha de 'f', temos:
a + b + c = 8 + 8 + 6 = 22.

Logo, a sa�da do programa � 22, e n�o 19.
*/
