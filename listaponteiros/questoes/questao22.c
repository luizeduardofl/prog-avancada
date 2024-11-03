#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int comparador(const void *px, const void *py){
    int x = *(int *)px;
    int y = *(int *)py;
    return x - y;
}

void meu_ordenador_int(int vetor[], int tamanho, int (*pf)(const void*, const void*)){
    qsort(vetor, tamanho, sizeof(int), pf);
}

int main() {
    int n;
    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);

    int *numeros_1 = (int*)malloc(n * sizeof(int));
    int *numeros_2 = (int*)malloc(n * sizeof(int));

    if (numeros_1 == NULL || numeros_2 == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    // Gerar números aleatórios
    srand(time(NULL));
    for(int i = 0; i < n; i++){
        int valor = rand();  // Gera um número aleatório
        numeros_1[i] = valor;
        numeros_2[i] = valor;
    }

    printf("\n");

    // Medir o tempo de execução do qsort()
    clock_t inicio_1 = clock();
    qsort(numeros_1, n, sizeof(int), comparador);
    clock_t fim_1 = clock();

    double tempo_execucao_qsort = (double)(fim_1 - inicio_1) / CLOCKS_PER_SEC;
    printf("Tempo de execucao (qsort()): %.20f segundo\n", tempo_execucao_qsort);

    // Medir o tempo de execução do meu_ordenador_int
    int (*pf)(const void*, const void*) = comparador;
    clock_t inicio_2 = clock();
    meu_ordenador_int(numeros_2, n, pf);
    clock_t fim_2 = clock();

    double tempo_execucao_meu_ordenador = (double)(fim_2 - inicio_2) / CLOCKS_PER_SEC;
    printf("Tempo de execucao (meu_ordenador_int): %.20f segundo\n", tempo_execucao_meu_ordenador);

    free(numeros_1);
    free(numeros_2);

    return 0;
}

/*
Ao testar com um valor n = 1.000.000, o programa mostrou que a execução usando o método 'qsort()'
levou 0,109 segundo para ser finalizada, enquanto a execução com 'meu_ordenador_int()' foi mais
rápido: 0,094 segundo. A diferença é tão pequena, que só pode ser notada com valores
extremamente altos de 'n'.
*/
