#include <stdio.h>

float produto(float a, float b){
    return a * b;

    // A fun��o 'produto' recebe dois argumentos
    // do tipo 'float' e retorna o resultado da
    // multiplica��o entre eles, tamb�m em 'float'.

}

int main()
{
    float x, y, z;

    // Declara��o de tr�s vari�veis 'float'.

    float(*pf)(float, float);

    // Cria��o do ponteiro para uma fun��o 'float'.
    // O primeiro 'float' da express�o refere-se ao
    // tipo que a fun��o vai retornar. 'pf' � o nome
    // do ponteiro. '(float, float)' indica que a fun��o
    // receber� dois argumentos do tipo 'float'.

    printf("Digite dois numeros: ");
    scanf("%f %f", &x, &y);

    // Armazenamento de n�meros vindos do usu�rio.

    pf = produto;

    // o ponteiro 'pf' armazena o endere�o de mem�ria
    // da fun��o 'produto', definida acima.

    z = pf(x, y);

    // z recebe o resultado da fun��o produto com x e y.
    // Note que agora 'produto' � referenciada por 'pf',
    // o ponteiro que armazena seu endere�o de mem�ria.

    printf("Produto = %.2f \n", z);

    // Impress�o do resultado na tela com duas casas
    // ap�s a v�rgula.

    return 0;
}
