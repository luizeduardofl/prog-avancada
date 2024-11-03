#include <stdio.h>
#include <stdlib.h>

// Função para alocar dinamicamente uma matriz 3D
int ***alocar_matriz(int altura, int largura, int profundidade) {
    int ***matriz = (int ***)malloc(altura * sizeof(int **));  // Aloca memória para as "camadas" da matriz

    for (int i = 0; i < altura; i++) {
        matriz[i] = (int **)malloc(largura * sizeof(int *));  // Aloca memória para as linhas de cada camada

        for (int j = 0; j < largura; j++) {
            matriz[i][j] = (int *)malloc(profundidade * sizeof(int));  // Aloca memória para as colunas de cada linha
        }
    }
    return matriz;
}

// Função para liberar a memória da matriz 3D
void liberar_matriz(int ***matriz, int altura, int largura) {
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            free(matriz[i][j]);  // Libera cada coluna
        }
        free(matriz[i]);  // Libera cada linha
    }
    free(matriz);  // Libera a matriz inteira
}

// Função para inicializar a matriz com valores 0 (vazio)
void inicializar_matriz(int ***matriz, int altura, int largura, int profundidade) {
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            for (int k = 0; k < profundidade; k++) {
                matriz[i][j][k] = 0;  // Inicializa todos os elementos como 0 (vazio)
            }
        }
    }
}

// Função para imprimir um dos planos da matriz 3D (imprimindo um corte)
void imprimir_plano(int ***matriz, int plano, int largura, int profundidade) {
    printf("Plano %d:\n", plano);
    for (int i = 0; i < largura; i++) {
        for (int j = 0; j < profundidade; j++) {
            printf("%d ", matriz[plano][i][j]);  // Acessa o elemento da matriz no plano especificado
        }
        printf("\n");
    }
}

// Função para modificar um elemento da matriz
void modificar_elemento(int ***matriz, int x, int y, int z, int valor) {
    matriz[x][y][z] = valor;  // Acessa a posição (x, y, z) e modifica o valor
}

int main() {
    int altura, largura, profundidade;

    // Solicita as dimensões da matriz ao usuário
    printf("Digite a altura da matriz: ");
    scanf("%d", &altura);
    printf("Digite a largura da matriz: ");
    scanf("%d", &largura);
    printf("Digite a profundidade da matriz: ");
    scanf("%d", &profundidade);

    // Aloca a matriz tridimensional
    int ***matriz = alocar_matriz(altura, largura, profundidade);

    // Inicializa a matriz com zeros
    inicializar_matriz(matriz, altura, largura, profundidade);

    // Programa de teste: Modificação e impressão
    modificar_elemento(matriz, 1, 2, 3, 1);  // Modifica o elemento na posição (1, 2, 3) para 1 (representa objeto)
    modificar_elemento(matriz, 0, 1, 1, 1);  // Modifica outro elemento na posição (0, 1, 1)

    // Solicita o plano que o usuário deseja imprimir
    int plano;
    printf("Digite o plano que deseja imprimir (0 a %d): ", altura - 1);
    scanf("%d", &plano);

    // Imprime o plano especificado
    imprimir_plano(matriz, plano, largura, profundidade);

    // Libera a memória alocada
    liberar_matriz(matriz, altura, largura);

    return 0;
}
