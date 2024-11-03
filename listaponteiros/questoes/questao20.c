#include <stdio.h>
#include <stdlib.h>

int comparador(const void *px, const void *py){
    float x = *(float *)px;
    float y = *(float *)py;
    return x - y;

    // A função 'comparador' recebe dois ponteiros
    // genéricos 'px' e 'py'. A função converte cada um
    // para ponteiros do tipo desejado em questão
    // (float) e depois armazena seus conteúdos em duas
    // variáveis x e y. Essas variáveis servirão
    // em 'qsort() para percorrer os elementos do vetor em questão
    // (no caso deste problema, 'numeros'). De acordo com funcionamento
    // de 'qsort()', caso o número x tenha de vir antes de y, a função
    // 'comparador' deve retornar um valor negativo; se x for equivalente
    // a y, então a função deve retornar zero; por fim, caso x deva vir
    // depois de y, 'comparador' deve retornar um valor positivo.
    // Tudo isso pode ser feito com a expressão 'return x - y'
    // se quisermos a ordenação crescente; se a quiséssemos decrescente,
    // bastaria retornar a expressão 'y - x'.

}

int main(){
    int n;
    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);

    // Aqui declaramos uma variável para
    // armazenar um conjunto de valores 'float'.

    float *numeros = (float*)malloc(n*sizeof(float));
    // Utilizando alocação dinâmica de memória
    // (malloc), criamos um vetor de valores 'float'
    // com tamanho 'n'.

    if (numeros == NULL){
        printf("Erro ao alocar memoria. \n");
        return 1;
    }
    // Aqui verificamos se a alocação
    // foi feita com sucesso.

    for(int i = 0; i < n; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%f", &numeros[i]);
    }
    // Aqui, o próprio usuário preenche os valores
    // do vetor 'numeros' por meio de 'scanf'.

    printf("\n");

    // Quebra de linha

    qsort(numeros, n, sizeof(float), comparador);

    // Utilização da função qsort, ou quick sort, que vem da
    // diretiva 'stdlib.h'. Ela necessita de quatro argumentos:
    // 1. o endereço para o primeiro elemento do vetor (numeros);
    // 2. o tamanho do vetor (n); 3. o tamanho de cada valor
    // do vetor (sizeof(float)); 4. Função inteira que determina
    // o tipo de ordenação, isto é, crescente ou decrescente
    // (comparador).

    for (int i = 0; i < n; i++){
        printf("numeros[%d]: %.2f \n", i, numeros[i]);
    }

    // Impressão do vetor 'numeros' na tela
    // após a ordenação com 'qsort()'.

    free(numeros);

    // Liberando a memória alocada para 'numeros'.
    // Sem isso, o programa teria vazamento de memória,
    // mais conhecido como 'memory leak'.

    return 0;
}
