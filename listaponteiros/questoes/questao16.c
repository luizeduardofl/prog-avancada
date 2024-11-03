#include <stdio.h>

int main(){
    float aloha[10], coisas[10][5];
    float *pf, value = 2.2;
    int i=3;

    aloha[2] = value;
    scanf("%f", &aloha);
    aloha = "value";
    printf("%f", aloha);
    coisas[4][4] = aloha[3];
    coisas[5] = aloha;
    pf = value;
    pf = aloha;

}

/*
A terceira, sexta e sétima expressões são inválidas
e causam erros no momento da compilação.

Erro da expressão 3: 'assignment to expression with
array type'. Ocorreu devido à tentativa de armazenar
uma string a um vetor 'aloha'.

Erro da expressão 6: o mesmo erro da expressão anterior.
Ocorreu devido à tentativa de armazenar o conteúdo
do vetor 'aloha' na sexta linha da matriz 'coisas.

Erro da expressão 7: "incompatible types when assigning
to type 'float *' from type 'float'". Ocorre devido à tentativa
de armazenar um número float em um ponteiro para float.

*/
