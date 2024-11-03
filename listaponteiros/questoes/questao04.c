#include <stdio.h>

int main() {
    int valor;
    int *p1;
    float temp;
    float *p2;
    char aux;
    char *nome = "Ponteiros";
    char *p3;
    int idade;
    int vetor[3];
    int *p4;
    int *p5;

    /* (a) */
    valor = 10;
    p1 = &valor;
    *p1 = 20;
    printf("%d \n", valor);

    /* (b) */
    temp = 26.5;
    p2 = &temp;
    *p2 = 29.0;
    printf("%.1f \n", temp);

    /* (c) */
    p3 = &nome[0];
    aux = *p3;
    printf("%c \n", aux);

    /* (d) */
    p3 = &nome[4];
    aux = *p3;
    printf("%c \n", aux);

    /* (e) */
    p3 = nome;
    printf("%c \n", *p3);

    /* (f) */
    p3 = p3 + 4;
    printf("%c \n", *p3);

    /* (g) */
    p3--;
    printf("%c \n", *p3);

    /* (h) */
    vetor[0] = 31;
    vetor[1] = 45;
    vetor[2] = 27;
    p4 = vetor;
    idade = *p4;
    printf("%d \n", idade);

    /* (i) */
    p5 = p4 + 1;
    idade = *p5;
    printf("%d \n", idade);

    /* (j) */
    p4 = p5 + 1;
    idade = *p4;
    printf("%d \n", idade);

    /* (l) */
    p4 = p4 - 2;
    idade = *p4;
    printf("%d \n", idade);

    /* (m) */
    p5 = &vetor[2] - 1;
    printf("%d \n", *p5);

    /* (n) */
    p5++;
    printf("%d \n", *p5);

    return (0);
}

// a) Será impresso na tela o número 20, pois
// o conteúdo de 'valor' foi alterado por *p1.

// b) Será impresso 29.0, pois
// o conteúdo de 'temp' foi alterado por *p2.

// c) Em primeiro lugar, perceba que 'nome'
// é um ponteiro para uma variável do tipo char,
// isto é, uma string em C.
// p3 é um ponteiro que aponta aponta para a variável
// 'nome'. Já que p3 = &nome[0] e aux = *p3, então
// será impresso na tela o caractere 'P'.

// d) Aqui se apresenta a mesma lógica do item anterior.
// Já que p3 = &nome[4] e aux = *p3, então será impresso
// na tela o caractere 'e'.

// e) A string 'nome' é um ponteiro para char, que armazena
// um array de caracteres. 'nome' aponta para o primeiro caractere
// do array. Portanto, o comando 'p3 = nome', fará p3 ser um ponteiro
// para o primeiro caractere da string, isto é, 'P'. Já que na função
// printf temos *p3, então será impresso na tela 'P'.

// f) Sabemos pelo item anterior que p3 é um ponteiro que aponta
// para o caractere 'P' da string "Ponteiros". O comando 'p3 = p3 + 4'
// fará o valor de p3 ser adicionado em 4 * 2 = 8 bytes na memória.
// Assim, p3 deixará de apontar para o caractere 'P' e apontará
// para 'e'. Assim, será impresso 'e' na tela.
// Perceba que a lógica subjacente é a mesma do item d).

// g) p3-- é o mesmo que p3 = p3 - 1 na linguagem C. Assim, p3
// apontará, agora, para o endereço do caractere anterior
// ao do item f). Ou seja, será impresso na tela 't'.

// h) p4 é um ponteiro para uma variável do tipo inteiro. O comando
// 'p4 = vetor' fará p4 apontar para o primeiro elemento de 'vetor'.
// Logo, o conteúdo de p4 é igual a 31. Assim, idade = 31 e será
// impresso na tela o valor 31.

// i) Sabemos que p4 aponta para o valor 31. Então o comando p5 = p4 + 1
// fará p5 apontar para o elemento seguinte de 'vetor', isto é, vetor[1].
// Assim, será impresso na tela o valor 45.

// j) Sabemos que p5 aponta para o valor 45. Então o comando p4 = p5 + 1
// fará p4 apontar para o elemento seguinte de 'vetor', isto é, vetor[2].
// Assim, será impresso na tela o valor 27.

// l) Sabemos que p4 aponta para o valor 27. Então o comando p4 = p4 - 2
// fará p4 apontar para dois elementos antes de vetor[2], isto é, vetor[0].
// Assim, será impresso na tela o valor 31.

// m) Na primeira linha, &vetor[2] refere-se ao endereço da variável vetor[2],
// que é 27. Assim, p5 = &vetor[2] - 1 faz p5 apontar para a variável anterior
// a vetor[2], isto é, vetor[1]. Então será impresso na tela o valor 45.

// n) p5++ é o mesmo que p5 = p5 + 1 na linguagem C. Assim, p5
// apontará, agora, para o endereço do caractere sucessor
// ao do item m). Ou seja, será impresso na tela o valor 27.

