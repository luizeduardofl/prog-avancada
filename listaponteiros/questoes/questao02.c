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

// O programa imprimirá, na tela, o seguinte: 4094 4110 7 5 15 9
// Justificativa breve: *p retorna o conteúdo da variável para a qual
// p aponta. Logo, a operação *p + 2, por exemplo, resulta em 5 + 2 = 7.
// Já que p aponta para uma variável do tipo inteiro,
// então a operação p + 1 fará uma soma do endereço p
// com o valor necessário para armazenar uma variável inteira.
// Esse valor depende da arquitetura do sistema.
// Sabemos que p = 4094, então p + 1 = 4094 + 16 = 4110.
// 16 aparece aí, pois é o número de bits que um inteiro ocupa na arquitetura
// dada na questão. 16 = 2 bytes = (2 * 8) bits = 16 bits.
// As outras operações podem ser entendidas à luz desta explicação
// e da questão anterior (address operator e dereference operator).
