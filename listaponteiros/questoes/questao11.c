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
H� alguns erros presentes no c�digo acima:

1. Em C, n�o se pode inicializar vari�veis
dentro de uma declara��o de 'struct'.
Portanto, a linha 4 gera erro no programa.
Esse erro poderia ser corrigido ao inicializar
a vari�vel ap�s criar o 'struct'.

O mesmo ocorre na linha 5, em que se tenta
inicializar uma cadeia de caracteres dentro do 'struct'.

2. O array 'nome[]' n�o tem tamanho definido.
Nesse caso, � necess�rio especificar o tamanho
definido na estrutura. Por exemplo, 'char nome[30]'.

3. Deseja-se acessar o struct 'teste' por um ponteiro.
Ent�o, deve-se alocar mem�ria para ele utilizando 'malloc'.
A aloca��o ficaria da seguinte forma:

s = (struct teste *)malloc(sizeof(struct teste));

Naturalmente, essa mem�ria deve ser liberada ap�s seu uso.
Ou seja, 'free(s)' tem de ser executado.
*/
