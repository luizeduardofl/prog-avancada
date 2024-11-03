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
já eram esperadas.

A primeira forma de imprimir o elemento de um vetor
é fazendo 'v[i]', em que 'v' é um vetor de um dado tipo
e 'i' é o índice, que começa por 0. Um vetor é um endereço
para um conjunto de variáveis e 'v', no exemplo, armazena o endereço
para a primeira variável do conjunto. Assim, 'v[0]' aponta para o
primeiro endereço, v[1] aponta para o segundo e assim sucessivamente.
Assim, podemos acessar os elementos de um vetor pela segunda forma, usando
o operador de dereferência '*'. Então, 'v[0]' é o mesmo que '*(v+0)'.

Para acessar o endereço de um elemento de um vetor, há, também, duas formas.

A primeira consiste em usar o operador de endereço '&'. Assim, se eu quiser
acessar o endereço do segundo elemento de um vetor 'v', posso executar '&v[2]'.
Para fazer isso pela segunda forma, basta executar '(v+2)'.

Lembre-se de que o nome do vetor - neste exemplo, v - é um endereço para o primeiro
elemento do conjunto. Então, os comandos '&v[0]', e '(v+0)' e 'v' são equivalentes.
*/
