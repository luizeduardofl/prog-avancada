#include <stdio.h>
#include <stdlib.h>

void troca_valores(int *x, int *y){
    int aux = *x;
    *x = *y;
    *y = aux;
}

int main(){
    int n;
    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);

    float *numeros = (float*)malloc(n*sizeof(float));
    if (numeros == NULL){
        printf("Erro ao alocar memoria. \n");
        return 1;
    }

    for(int i = 0; i < n; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%f", &numeros[i]);
    }

    printf("\n");

    for(int i = n-1; i >= 1; i--){
        for(int j = 0; j < i; j++){
            if(numeros[j] > numeros[j+1]){
                troca_valores(&numeros[j], &numeros[j+1]);
            }
        }
    }

    for (int i = 0; i < n; i++){
        printf("valor %d: %.2f \n", i+1, numeros[i]);
    }

    free(numeros);

    return 0;
}
