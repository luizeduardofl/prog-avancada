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
Memory leak é o fenômeno de alocar memória
em um dado programa e não liberá-la posteriormente.
Isso pode causar diversos problemas.
Em programas maiores, pode levar à lotação da memória do sistema
e causar panes. Por isso, deve-se sempre
liberar a memória após seu uso.
No programa acima ocorre memory leak.
*/
