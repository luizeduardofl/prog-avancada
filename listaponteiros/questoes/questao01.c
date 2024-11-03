#include <stdio.h>

int main(){
    int i=3, j=5;
    int *p, *q;
    p = &i;
    q = &j;

    if (p == &i){
        printf("Verdadeiro: p == &i \n");
    }
    else{
        printf("Falso: p == &i \n");
    }

    int resultado1, resultado2;
    resultado1 = *p - *q;
    printf("Resultado de *p - *q: %d \n", resultado1);

    printf("p: %p \n", p);
    printf("&p: %p \n", &p);
    printf("*&p: %p \n", *&p);
    printf("**&p: %d \n", **&p);

    resultado2 = 3 - *p/(*q) + 7;
    printf("Resultado de 3 - *p/(*q) + 7: %d \n", resultado2);

    return 0;
}

// A primeira expressão resulta em 1, pois p é, de fato, igual ao endereço
// da variável i. O operador == faz a comparação e retorna 1 ou 0, isto é,
// verdadeiro ou falso.

// A segunda expressão resulta em -2. O operador * antes de um ponteiro retorna
// o conteúdo da variável para a qual o ponteiro aponta. Já que i = 3 e p = &i,
// Então *p retornará o próprio valor de i, que é 3. O mesmo vale para j e q.
// Portanto, *p - *q = 3 - 5 = -2.

// A terceira expressão é uma cadeia de operações. **&p se torna mais fácil de ser
// entendido quando fazemos uma operação por vez. Sabemos que p é um ponteiro, então
// &p é o endereço do ponteiro p. Já a expressão *&p é o conteúdo do endereço do ponteiro
// p, que é o p propriamente dito! Por fim, sabendo que *&p é o próprio p, é fácil notar
// que **&p é igual a *p, que é o conteúdo do ponteiro p. Vemos no código acima que
// p = &i, então **&p = *p = i = 3.

// A última expressão é 3 - *p/(*q) + 7. Sabemos pela expressão anterior que *p = 3
// Pelo mesmo raciocínio, *q = 5, pois retorna o conteúdo do ponteiro q, que é j = 5.
// Na expressão numérica acima, resolvemos o quociente primeiro. Assim,
// *p/(*q) = 3/5 = 0,6. Perceba que o numerador e o denominador são do tipo inteiro, então
// o quociente não pode resultar no tipo float. Por isso, o resultado será computado como
// 3/5 = 0. A expressão resultante se torna: 3 - 0 + 7 = 10.
