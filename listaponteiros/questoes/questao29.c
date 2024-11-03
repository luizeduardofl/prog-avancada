#include <stdio.h>

unsigned long codificar_matriz(unsigned char m[8][8]) {
    unsigned long estado = 0;  // Variável de 64 bits para armazenar o estado dos LEDs
    
    // Percorre a matriz 8x8
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            // Desloca os bits à esquerda para abrir espaço para o próximo bit
            estado = estado << 1;
            // Insere o valor da matriz (0 ou 1) no bit menos significativo
            estado = estado | m[i][j]; 
        }
    }
    
    return estado;  // Retorna o valor codificado
}

int main() {
    // Exemplo de matriz 8x8 de LEDs (1 = LED aceso, 0 = LED apagado)
    unsigned char m[8][8] = {
        {1, 0, 1, 0, 1, 0, 1, 0},
        {1, 1, 1, 0, 1, 0, 1, 0},
        {0, 0, 1, 1, 1, 0, 1, 1},
        {1, 0, 0, 0, 0, 1, 1, 0},
        {0, 1, 0, 1, 0, 1, 0, 1},
        {1, 1, 1, 1, 1, 1, 0, 0},
        {0, 0, 0, 1, 0, 1, 1, 0},
        {1, 1, 0, 0, 1, 1, 1, 1}
    };

    unsigned long estado = codificar_matriz(m);
    
    // Exibe o número codificado
    printf("Estado codificado: %lu\n", estado);

    return 0;
}
