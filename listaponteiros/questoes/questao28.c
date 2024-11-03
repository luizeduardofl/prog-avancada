#include <stdio.h>
char *a[] = {"AGOSTINHO", "MEDEIROS", "BRITO", "JUNIOR"};
char **b[] = {a + 3, a + 2, a + 1, a};
char ***c = b;
int main() {
  printf("%s ", **++c);
  printf("%s ", *--*++c + 3);
  printf("%s ", *c[-2] + 3);
  printf("%s ", c[-1][-1] + 1);
  return 0;
}

/*
De início, vemos que 'a' é um array para strings, ou seja, 
um array de ponteiros de 'char'. Cada elemento de 'a' aponta 
para o primeiro caractere de uma string.

Já 'b' é um array de ponteiros para ponteiros de 'char'.
Cada elemento deste array é um ponteiro para um elemento de 'a',
que por sua vez é um ponteiro para 'char'.

A última variável, 'c', é um ponteiro triplo para 'char', e recebe 
o endereço para o primeiro elemento de 'b' (char ***c = b), que 
por sua vez é um ponteiro duplo para 'char'.

'printf("%s ", **++c)': será impresso o conteúdo do conteúdo de '++c'.
'c', aí, está sendo pré-incrementado, então seu valor será alterado
antes da impressão. Se 'c' aponta para o primeiro elemento de 'b',
que é 'a + 3', então '++c' aponta para 'a + 2'. Por fim, '**++c' 
acessa o conteúdo de 'a + 2', que é 'BRITO'.

'printf("%s ", *--*++c + 3)': '*++c' acessa o conteúdo de '++c',
ou seja, 'c' agora é um ponteiro para 'a + 1' e '*++c' retorna 'a + 1'.
Após isso, '--*++c' decrementa uma unidade de '*c', que passa a apontar
para 'a + 0', embora 'c' continue apontando para 'a + 1'. Dessa forma,
o último operador de dereferenciação '*' retorna o conteúdo de 'a + 0',
que é 'AGOSTINHO'. A soma ' + 3' pula três elementos da string, então
é impressa na tela a string a partir do elemento de índice 3: 'STINHO'.

'printf("%s ", *c[-2] + 3)': sabendo que 'c' aponta para 'a + 1', vemos
que c[-2] acessa o segundo elemento antes da atual posição de 'c', ou seja,
c[-2] = 'a + 3' e *c[-2] = 'JUNIOR'. Por fim, a soma ' + 3' percorre
três elementos da string, e é impressa na tela a string a partir do elemento de índice 3: 'IOR'.

'printf("%s ", c[-1][-1] + 1)': 'c' continua apontando para 'a + 1', então 'c[-1]'
acessa o elemento anterior à atual posição de 'c', ou seja, c[-1] = 'a + 2'. 'a + 2' 
é um ponteiro que aponta para a string 'BRITO', portanto, c[-1][-1] acessa o valor
anterior a 'BRITO', que é a string completa 'MEDEIROS'. Por fim, a soma ' + 1' pula
um elemento da string, então é impressa na tela a string a partir do elemento de 
índice 1: 'EDEIROS'.
*/