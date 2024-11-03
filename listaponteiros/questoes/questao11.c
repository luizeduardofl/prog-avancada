#include <stdio.h>

struct teste{
  int x = 3;
  char nome[] = "jose";
};
main(){
  struct teste *s;
  printf("%d", s->x);
  printf("%s", s->nome);
}

/*
Há alguns erros presentes no código acima:

1. Em C, não se pode inicializar variáveis
dentro de uma declaração de 'struct'.
Portanto, a linha 4 gera erro no programa.
Esse erro poderia ser corrigido ao inicializar
a variável após criar o 'struct'.

O mesmo ocorre na linha 5, em que se tenta
inicializar uma cadeia de caracteres dentro do 'struct'.

2. O array 'nome[]' não tem tamanho definido.
Nesse caso, é necessário especificar o tamanho
definido na estrutura. Por exemplo, 'char nome[30]'.

3. Deseja-se acessar o struct 'teste' por um ponteiro.
Então, deve-se alocar memória para ele utilizando 'malloc'.
A alocação ficaria da seguinte forma:

s = (struct teste *)malloc(sizeof(struct teste));

Naturalmente, essa memória deve ser liberada após seu uso.
Ou seja, 'free(s)' tem de ser executado.
*/
