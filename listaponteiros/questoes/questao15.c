#include <stdio.h>

int main(){
  unsigned int x[4][3] = {{1, 2, 3}, {4, 5, 6},
  {7, 8, 9}, {10, 11, 12}};
  printf("%u, %u, %u", x+3, *(x+3), *(x+2)+3);
}

// No primeiro termo, x representa o endere�o
// para a primeira linha da matriz, isto �, x[0].
// Dessa forma, 'x + 3' refere-se ao endere�o
// da quarta linha da matriz, que � x[3].

// O segundo termo, '*(x+3)', refere-se ao endere�o
// do primeiro elemento da quarta linha da matriz,
// isto �, x[3][0]. Se quis�ssemos obter o pr�prio
// elemento primeiro da quarta linha, poder�amos
// realizar a opera��o '**(x+3)'.

// O terceiro termo, '*(x+2)+3', � o endere�o
// do primeiro termo da terceira linha da matriz,
// ou seja, o endere�o de x[2][0], adicionado a tr�s.
// Se a linha em quest�o tivesse quatro elementos,
// a opera��o resultaria no endere�o do quarto elemento
// da terceira linha da matriz, que seria x[2][3].
// Por�m, como h� um elemento a menos, a opera��o resulta
// no endere�o do elemento seguinte da matriz, que � x[3][0].

// No fim das contas, os tr�s termos da impress�o s�o iguais:
// 6422036

