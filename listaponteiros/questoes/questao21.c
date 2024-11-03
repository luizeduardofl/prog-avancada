#include <stdio.h>
#include <stdlib.h>

int comparador(const void *px, const void *py){
    int x = *(int*)px;
    int y = *(int*)py;

    return x - y;
}

void meu_ordenador_int(int vetor[], int tamanho, int (*pf)(const void*, const void*)){
    qsort(vetor, tamanho, sizeof(int), pf);
}

int main(){
    int n;
    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);

    int *numeros = (int*)malloc(n*sizeof(int));

    int (*pf)(const void*, const void*) = comparador;


    if (numeros == NULL){
        printf("Erro ao alocar memoria. \n");
        return 1;
    }


    for(int i = 0; i < n; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &numeros[i]);
    }

    printf("\n");

    meu_ordenador_int(numeros, n, pf);

    for (int i = 0; i < n; i++){
        printf("numeros[%d]: %d \n", i, numeros[i]);
    }

    free(numeros);

    return 0;
}
