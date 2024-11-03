#include <stdio.h>

int main(){
    int mat[4], *p, x;

    p = mat + 1;
    p = mat;
    p = mat;
    x = (*mat);

    printf("x = %d \n", x);
    printf("p = %p \n", p);

    for (int i = 0; i < 4; i++) {
        printf("mat[%d] = %d \n", i, mat[i]);
    }

    return 0;
}

// Todas as expressões acima são válidas.
// A primeira expressão faz o ponteiro 'p' armazenar
// o endereço seguinte ao do primeiro elemento
// do vetor 'mat'. A segunda e terceira expressões
// são iguais. Elas fazem p ser igual ao endereço
// do primeiro elemento de 'mat'. Já a última expressão
// faz x ser igual ao conteúdo do primeiro elemento
// do vetor 'mat', isto é, 'mat[0]'.
