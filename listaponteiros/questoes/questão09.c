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

// Todas as express�es acima s�o v�lidas.
// A primeira express�o faz o ponteiro 'p' armazenar
// o endere�o seguinte ao do primeiro elemento
// do vetor 'mat'. A segunda e terceira express�es
// s�o iguais. Elas fazem p ser igual ao endere�o
// do primeiro elemento de 'mat'. J� a �ltima express�o
// faz x ser igual ao conte�do do primeiro elemento
// do vetor 'mat', isto �, 'mat[0]'.
