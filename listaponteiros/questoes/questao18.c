#include <stdio.h>

float produto(float a, float b){
    return a * b;

    // A função 'produto' recebe dois argumentos
    // do tipo 'float' e retorna o resultado da
    // multiplicação entre eles, também em 'float'.

}

int main()
{
    float x, y, z;

    // Declaração de três variáveis 'float'.

    float(*pf)(float, float);

    // Criação do ponteiro para uma função 'float'.
    // O primeiro 'float' da expressão refere-se ao
    // tipo que a função vai retornar. 'pf' é o nome
    // do ponteiro. '(float, float)' indica que a função
    // receberá dois argumentos do tipo 'float'.

    printf("Digite dois numeros: ");
    scanf("%f %f", &x, &y);

    // Armazenamento de números vindos do usuário.

    pf = produto;

    // o ponteiro 'pf' armazena o endereço de memória
    // da função 'produto', definida acima.

    z = pf(x, y);

    // z recebe o resultado da função produto com x e y.
    // Note que agora 'produto' é referenciada por 'pf',
    // o ponteiro que armazena seu endereço de memória.

    printf("Produto = %.2f \n", z);

    // Impressão do resultado na tela com duas casas
    // após a vírgula.

    return 0;
}
