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
A terceira, sexta e s�tima express�es s�o inv�lidas
e causam erros no momento da compila��o.

Erro da express�o 3: 'assignment to expression with
array type'. Ocorreu devido � tentativa de armazenar
uma string a um vetor 'aloha'.

Erro da express�o 6: o mesmo erro da express�o anterior.
Ocorreu devido � tentativa de armazenar o conte�do
do vetor 'aloha' na sexta linha da matriz 'coisas.

Erro da express�o 7: "incompatible types when assigning
to type 'float *' from type 'float'". Ocorre devido � tentativa
de armazenar um n�mero float em um ponteiro para float.

*/
