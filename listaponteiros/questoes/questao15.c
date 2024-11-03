#include <stdio.h>

int main(){
  unsigned int x[4][3] = {{1, 2, 3}, {4, 5, 6},
  {7, 8, 9}, {10, 11, 12}};
  printf("%u, %u, %u", x+3, *(x+3), *(x+2)+3);
}

// No primeiro termo, x representa o endereço
// para a primeira linha da matriz, isto é, x[0].
// Dessa forma, 'x + 3' refere-se ao endereço
// da quarta linha da matriz, que é x[3].

// O segundo termo, '*(x+3)', refere-se ao endereço
// do primeiro elemento da quarta linha da matriz,
// isto é, x[3][0]. Se quiséssemos obter o próprio
// elemento primeiro da quarta linha, poderíamos
// realizar a operação '**(x+3)'.

// O terceiro termo, '*(x+2)+3', é o endereço
// do primeiro termo da terceira linha da matriz,
// ou seja, o endereço de x[2][0], adicionado a três.
// Se a linha em questão tivesse quatro elementos,
// a operação resultaria no endereço do quarto elemento
// da terceira linha da matriz, que seria x[2][3].
// Porém, como há um elemento a menos, a operação resulta
// no endereço do elemento seguinte da matriz, que é x[3][0].

// No fim das contas, os três termos da impressão são iguais:
// 6422036

