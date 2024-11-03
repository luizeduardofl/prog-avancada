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

// A primeira express�o resulta em 1, pois p �, de fato, igual ao endere�o
// da vari�vel i. O operador == faz a compara��o e retorna 1 ou 0, isto �,
// verdadeiro ou falso.

// A segunda express�o resulta em -2. O operador * antes de um ponteiro retorna
// o conte�do da vari�vel para a qual o ponteiro aponta. J� que i = 3 e p = &i,
// Ent�o *p retornar� o pr�prio valor de i, que � 3. O mesmo vale para j e q.
// Portanto, *p - *q = 3 - 5 = -2.

// A terceira express�o � uma cadeia de opera��es. **&p se torna mais f�cil de ser
// entendido quando fazemos uma opera��o por vez. Sabemos que p � um ponteiro, ent�o
// &p � o endere�o do ponteiro p. J� a express�o *&p � o conte�do do endere�o do ponteiro
// p, que � o p propriamente dito! Por fim, sabendo que *&p � o pr�prio p, � f�cil notar
// que **&p � igual a *p, que � o conte�do do ponteiro p. Vemos no c�digo acima que
// p = &i, ent�o **&p = *p = i = 3.

// A �ltima express�o � 3 - *p/(*q) + 7. Sabemos pela express�o anterior que *p = 3
// Pelo mesmo racioc�nio, *q = 5, pois retorna o conte�do do ponteiro q, que � j = 5.
// Na express�o num�rica acima, resolvemos o quociente primeiro. Assim,
// *p/(*q) = 3/5 = 0,6. Perceba que o numerador e o denominador s�o do tipo inteiro, ent�o
// o quociente n�o pode resultar no tipo float. Por isso, o resultado ser� computado como
// 3/5 = 0. A express�o resultante se torna: 3 - 0 + 7 = 10.
