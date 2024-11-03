#include <stdio.h>

int main(){
    int i = 5, *p;
    p = &i;

    printf("i: %d \n", i);
    printf("p: %p \n", p);
    printf("p+1: %p \n", p+1);
    printf("*p+2: %d \n", *p+2);
    printf("**&p: %d \n", **&p);
    printf("3**p: %d \n", 3**p);
    printf("**&p+4: %d \n", **&p+4);

    return 0;
}

// O programa imprimir�, na tela, o seguinte: 4094 4110 7 5 15 9
// Justificativa breve: *p retorna o conte�do da vari�vel para a qual
// p aponta. Logo, a opera��o *p + 2, por exemplo, resulta em 5 + 2 = 7.
// J� que p aponta para uma vari�vel do tipo inteiro,
// ent�o a opera��o p + 1 far� uma soma do endere�o p
// com o valor necess�rio para armazenar uma vari�vel inteira.
// Esse valor depende da arquitetura do sistema.
// Sabemos que p = 4094, ent�o p + 1 = 4094 + 16 = 4110.
// 16 aparece a�, pois � o n�mero de bits que um inteiro ocupa na arquitetura
// dada na quest�o. 16 = 2 bytes = (2 * 8) bits = 16 bits.
// As outras opera��es podem ser entendidas � luz desta explica��o
// e da quest�o anterior (address operator e dereference operator).
