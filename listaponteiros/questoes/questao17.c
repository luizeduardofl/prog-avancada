#include <stdio.h>
#include <stdlib.h>
int main(){
    int *px;

    px = malloc(10 * sizeof(int));

    for (int i = 0; i < 10; i++){
        px[i] = 10*i;
    }

    printf("%d", px[3]);

}

/*
Memory leak � o fen�meno de alocar mem�ria
em um dado programa e n�o liber�-la posteriormente.
Isso pode causar diversos problemas.
Em programas maiores, pode levar � lota��o da mem�ria do sistema
e causar panes. Por isso, deve-se sempre
liberar a mem�ria ap�s seu uso.
No programa acima ocorre memory leak.
*/
