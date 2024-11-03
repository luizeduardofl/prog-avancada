#include <stdio.h>
#include <stdlib.h>

void multiplica_matrizes(float *A, float *B, float *R, int linhas_A, int colunas_A, int colunas_B){
    for (int i = 0; i < linhas_A; i++)
    {
        for (int j = 0; j < colunas_B; j++)
        {
            int somatorio = 0.0;

            for (int k = 0; k < colunas_A; k++)
            {
                somatorio = somatorio + A[i * colunas_A + k] * B[k * colunas_B + j];
            }

            R[i * colunas_B + j] = somatorio;
        }
    }
}

int main() {
    int linhas_A, colunas_A, colunas_B;

    printf("Quantidade de linhas da matriz A: \n");
    scanf("%d", &linhas_A);
    printf("Quantidade de colunas de A e de linhas de B: \n");
    scanf("%d", &colunas_A);
    printf("Quantidade de colunas de B: \n");
    scanf("%d", &colunas_B);

    float *matriz_A = (float*)malloc(linhas_A * colunas_A * sizeof(float));
    float *matriz_B = (float*)malloc(colunas_A * colunas_B * sizeof(float));
    float *matriz_resultante = (float*)malloc(linhas_A * colunas_B * sizeof(float));

    if (matriz_A == NULL || matriz_B == NULL || matriz_resultante == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for (int i = 0; i < linhas_A; i++){
        for (int j = 0; j < colunas_A; j++){
            printf("Digite o elemento a_%d%d \n", i, j);
            scanf("%f", &matriz_A[i * colunas_A + j]);
        }
    }

    for (int i = 0; i < colunas_A; i++){
        for (int j = 0; j < colunas_B; j++){
            printf("Digite o elemento b_%d%d \n", i, j);
            scanf("%f", &matriz_B[i * colunas_B + j]);
        }
    }

    multiplica_matrizes(matriz_A, matriz_B, matriz_resultante, linhas_A, colunas_A, colunas_B);

    printf("Matriz A:\n");
    for (int i = 0; i < linhas_A; i++) {
        printf("| ");
        for (int j = 0; j < colunas_A; j++) {
            printf("%2.2f ", matriz_A[i * colunas_A + j]);
        }
        printf("|\n");
    }

    printf("Matriz B:\n");
    for (int i = 0; i < colunas_A; i++) {
        printf("| ");
        for (int j = 0; j < colunas_B; j++) {
            printf("%2.2f ", matriz_B[i * colunas_A + j]);
        }
        printf("|\n");
    }

    printf("\n");

    printf("Matriz resultante:");
    for (int i = 0; i < linhas_A; i++) {
        printf("| ");
        for (int j = 0; j < colunas_B; j++) {
            printf("%2.2f ", matriz_resultante[i * colunas_B + j]);
        }
        printf("|\n");
    }

    free(matriz_A);
    free(matriz_B);
    free(matriz_resultante);

    return 0;
}
/*
Lembre-se de que, para se fazer um produto entre matrizes,
a quantidade de linhas da primeira matriz deve ser igual
à quantidade de colunas da segunda.
*/
