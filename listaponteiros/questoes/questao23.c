#include <stdio.h>
#include <stdlib.h>

void soma_vetores(int vet1[], int vet2[], int vet3[], int tamanho){
    for (int i = 0; i < tamanho; i++){
        vet3[i] = vet1[i] + vet2[i];
    }
}

int main() {
    int n;
    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);

    int *vetor_1 = (int*)malloc(n*sizeof(int));
    int *vetor_2 = (int*)malloc(n*sizeof(int));
    int *resultado = (int*)malloc(n*sizeof(int));

    if (vetor_1 == NULL || vetor_2 == NULL || resultado == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for(int i = 0; i < n; i++){
        printf("vetor_1[%d]: ", i);
        scanf("%d", &vetor_1[i]);
    }

    printf("\n");

    for(int i = 0; i < n; i++){
        printf("vetor_2[%d]: ", i);
        scanf("%d", &vetor_2[i]);
    }

    printf("\n");

    soma_vetores(vetor_1, vetor_2, resultado, n);

    for(int i = 0; i < n; i++){
        printf("resultado[%d]: %d + %d = %d \n", i, vetor_1[i], vetor_2[i], resultado[i]);
    }

    free(vetor_1);
    free(vetor_2);
    free(resultado);
    return 0;
}

