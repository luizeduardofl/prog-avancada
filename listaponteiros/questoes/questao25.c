#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
(C)
int f(char *data){
    void *s;
    s = malloc(50);
    int size = strlen(data);

    if (size > 50){
        return(-1);
    }
    free(s);
    return 0;
}

//(D)
void f(int n){
    char *m = malloc(10);
    char *n = malloc(10);
    free(m);
    m = n;
    free(m);
    free(n);
}
*/
int main()
{
    printf("Questao 25 da lista de ponteiros em C");
    return 0;
}

/*
No item 'c' ocorre memory leak apenas
no caso em que o tamanho de '*data' é
maior do que 50, pois não há comando
'free' dentro de 'if (size > 50)'.

Vamos entender o funcionamento do item 'd':
1. Primeiro aloca-se memória para 'm' e 'n';
2. 'free(m)' libera a memória originalmente
alocada para 'm';
3. Após 'm = n', 'm' aponta para a mesma área
de memória de 'n';
4. Assim, 'free(m)' libera a memória apontada
por ambos 'm' e 'n';
5. 5. Logo, 'free(n)' é desnecessário, pois isso
é uma tentativa de liberar um bloco de memória
já liberado.
*/
