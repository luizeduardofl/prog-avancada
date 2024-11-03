#include <stdio.h>

int main(){
    int i, j, *p, *q;
    i = 10, j = 20;

    p = &i;
    *q = &j;
    p = &*&i;
    i = (*&)j;
    i = *&j;
    i = *&*&j;
    q = *p;
    i = (*p)++ + *q;

    return 0;
}
// No código acima, o erro ocorre na linha 10, na 4ª operação.
// Ele diz: "expected expression before ')' token".
// Esse erro ocorreu, porque o compilador esperava uma expressão válida,
// como uma variável, uma constante ou uma função, mas encontrou o parêntese
// de fechamento ')' sem nenhum argumento ou expressão correspondente antes dele.

// As outras operações são compiladas normalmente apesar do uso irregular
// de operadores de dereferência e de endereço (* e &).

