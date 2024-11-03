#include <stdio.h>
void funcao(char **p){
  char *t;
  t = (p += sizeof(int))[-1];
  printf("%s\n", t);
}
int main(){
  char *a[] = {"ab", "cd", "ef", "gh", "ij", "kl"};
  funcao(a);
  return 0;
}

/*
A função 'funcao' começa recebendo um ponteiro para ponteiro de char 'p'.
Após isso, o comando '(p += sizeof(int))' incrementa 'p' em quatro bytes,
que é o tamanho de memória ocupado pelo tipo 'int'. Porém, o índice '[-1]'
desfaz esta ação, fazendo 'p' ser igual ao endereço para onde apontava
antes de ser incrementado. Por fim, esse valor é armazenado no ponteiro 't'
e é impresso na tela.

Na função 'main', cria-se um array que armazena ponteiros para o tipo 'char'.
O comando 'funcao(a)' avança 4 bytes de dentro de 'a' e volta 1 byte devido ao
índice [-1]. Assim, avança até "ij" e volta um elemento, parando em "gh", que é
impresso na tela.
*/
