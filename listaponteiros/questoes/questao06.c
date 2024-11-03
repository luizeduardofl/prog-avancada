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
A fun��o 'funcao' come�a recebendo um ponteiro para ponteiro de char 'p'.
Ap�s isso, o comando '(p += sizeof(int))' incrementa 'p' em quatro bytes,
que � o tamanho de mem�ria ocupado pelo tipo 'int'. Por�m, o �ndice '[-1]'
desfaz esta a��o, fazendo 'p' ser igual ao endere�o para onde apontava
antes de ser incrementado. Por fim, esse valor � armazenado no ponteiro 't'
e � impresso na tela.

Na fun��o 'main', cria-se um array que armazena ponteiros para o tipo 'char'.
O comando 'funcao(a)' avan�a 4 bytes de dentro de 'a' e volta 1 byte devido ao
�ndice [-1]. Assim, avan�a at� "ij" e volta um elemento, parando em "gh", que �
impresso na tela.
*/
