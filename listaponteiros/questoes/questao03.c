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
// No c�digo acima, o erro ocorre na linha 10, na 4� opera��o.
// Ele diz: "expected expression before ')' token".
// Esse erro ocorreu, porque o compilador esperava uma express�o v�lida,
// como uma vari�vel, uma constante ou uma fun��o, mas encontrou o par�ntese
// de fechamento ')' sem nenhum argumento ou express�o correspondente antes dele.

// As outras opera��es s�o compiladas normalmente apesar do uso irregular
// de operadores de derefer�ncia e de endere�o (* e &).

