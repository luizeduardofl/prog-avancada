#include <stdio.h>

int main(){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco\n");
  for(i = 0 ; i <= 4 ; i++){
  printf("i = %d",i);
  printf(" vet[%d] = %.1f",i, vet[i]);
  printf(" *(f + %d) = %.1f",i, *(f+i));
  printf(" &vet[%d] = %X",i, &vet[i]);
  printf(" (f + %d) = %X",i, f+i);
  printf("\n");
  }
}

/*
O programa acima ilustra conceitos importantes
sobre ponteiros em C. Todas as respostas obtidas
j� eram esperadas.

A primeira forma de imprimir o elemento de um vetor
� fazendo 'v[i]', em que 'v' � um vetor de um dado tipo
e 'i' � o �ndice, que come�a por 0. Um vetor � um endere�o
para um conjunto de vari�veis e 'v', no exemplo, armazena o endere�o
para a primeira vari�vel do conjunto. Assim, 'v[0]' aponta para o
primeiro endere�o, v[1] aponta para o segundo e assim sucessivamente.
Assim, podemos acessar os elementos de um vetor pela segunda forma, usando
o operador de derefer�ncia '*'. Ent�o, 'v[0]' � o mesmo que '*(v+0)'.

Para acessar o endere�o de um elemento de um vetor, h�, tamb�m, duas formas.

A primeira consiste em usar o operador de endere�o '&'. Assim, se eu quiser
acessar o endere�o do segundo elemento de um vetor 'v', posso executar '&v[2]'.
Para fazer isso pela segunda forma, basta executar '(v+2)'.

Lembre-se de que o nome do vetor - neste exemplo, v - � um endere�o para o primeiro
elemento do conjunto. Ent�o, os comandos '&v[0]', e '(v+0)' e 'v' s�o equivalentes.
*/
