#include <stdio.h>
#include <stdlib.h>

int comparador(const void *px, const void *py){
    float x = *(float *)px;
    float y = *(float *)py;
    return x - y;

    // A fun��o 'comparador' recebe dois ponteiros
    // gen�ricos 'px' e 'py'. A fun��o converte cada um
    // para ponteiros do tipo desejado em quest�o
    // (float) e depois armazena seus conte�dos em duas
    // vari�veis x e y. Essas vari�veis servir�o
    // em 'qsort() para percorrer os elementos do vetor em quest�o
    // (no caso deste problema, 'numeros'). De acordo com funcionamento
    // de 'qsort()', caso o n�mero x tenha de vir antes de y, a fun��o
    // 'comparador' deve retornar um valor negativo; se x for equivalente
    // a y, ent�o a fun��o deve retornar zero; por fim, caso x deva vir
    // depois de y, 'comparador' deve retornar um valor positivo.
    // Tudo isso pode ser feito com a express�o 'return x - y'
    // se quisermos a ordena��o crescente; se a quis�ssemos decrescente,
    // bastaria retornar a express�o 'y - x'.

}

int main(){
    int n;
    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);

    // Aqui declaramos uma vari�vel para
    // armazenar um conjunto de valores 'float'.

    float *numeros = (float*)malloc(n*sizeof(float));
    // Utilizando aloca��o din�mica de mem�ria
    // (malloc), criamos um vetor de valores 'float'
    // com tamanho 'n'.

    if (numeros == NULL){
        printf("Erro ao alocar memoria. \n");
        return 1;
    }
    // Aqui verificamos se a aloca��o
    // foi feita com sucesso.

    for(int i = 0; i < n; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%f", &numeros[i]);
    }
    // Aqui, o pr�prio usu�rio preenche os valores
    // do vetor 'numeros' por meio de 'scanf'.

    printf("\n");

    // Quebra de linha

    qsort(numeros, n, sizeof(float), comparador);

    // Utiliza��o da fun��o qsort, ou quick sort, que vem da
    // diretiva 'stdlib.h'. Ela necessita de quatro argumentos:
    // 1. o endere�o para o primeiro elemento do vetor (numeros);
    // 2. o tamanho do vetor (n); 3. o tamanho de cada valor
    // do vetor (sizeof(float)); 4. Fun��o inteira que determina
    // o tipo de ordena��o, isto �, crescente ou decrescente
    // (comparador).

    for (int i = 0; i < n; i++){
        printf("numeros[%d]: %.2f \n", i, numeros[i]);
    }

    // Impress�o do vetor 'numeros' na tela
    // ap�s a ordena��o com 'qsort()'.

    free(numeros);

    // Liberando a mem�ria alocada para 'numeros'.
    // Sem isso, o programa teria vazamento de mem�ria,
    // mais conhecido como 'memory leak'.

    return 0;
}
