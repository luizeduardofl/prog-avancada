#include <stdio.h>
#define TAM 10
int funcao1(int vetor[], int v){
  int i;
  for (i = 0; i < TAM; i++){
  if (vetor[i] == v)
  return i;
  }
  return -1;
}
int funcao2(int vetor[], int v, int i, int f){
  int m = (i + f) / 2;
  if (v == vetor[m])
    return m;
  if (i >= f)
    return -1;
  if (v > vetor[m])
    return funcao2(vetor, v, m+1, f);
  else
    return funcao2(vetor, v, i, m-1);
}
  int main(){
  int vetor[TAM] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
  printf("%d - %d", funcao1(vetor, 15), funcao2(vetor, 15, 0, TAM-1));
  return 0;
}
/*
A respeito das funções implementadas, avalie as afirmações a seguir:

I. O resultado da impressão na linha 24 é: 7 - 7.
II. A função funcao1(), no pior caso, é uma estratégia mais rápida do que a função funcao2().
III. A função funcao2() implementa uma estratégia iterativa na concepção do algoritmo.


Sobre a afirmação I:

Em 'main()', é impresso o resultado de 'funcao1(vetor, 15)' ao lado do resultado
de 'funcao2(vetor, 15, 0, TAM-1)'. Vamos entender o resultado de cada um.
Ora, é trivial entender o funcionamento de 'funcao1': dados um vetor 'int' e um valor
também 'int', um laço 'for' percorre todo o vetor até encontrar um elemento seu que
seja igual ao valor 'int'. Caso encontrado, retorna-se o índice deste elemento.
Ou seja, no nosso caso, procura-se dentro do vetor qual é o índice do elemento
igual a 15. Vemos que vetor[7] = 15, logo, o comando 'funcao1(vetor, 15)' retornará 7.

A função dois já é mais complexa, pois ela recebe quatro argumentos, todos 'int', dos quais um é vetor
e três são valores comuns 'v', 'i' e 'f'. 'v' é o valor com o qual o elemento do vetor será comparado;
'i' é um limite inferior para busca interna ao vetor; f é um limite superior. Dentro da função, calcula-se
uma quantidade 'm' que é a média aritmética entre 'i' e 'f'. Daí, são feitas verificações com condicionais.
Em resumo, m é retornado caso ele seja o índice do elemento igual ao valor 'v'. Perceba que 'funcao2()'
é uma aplicação do método da bisseção em linguagem C! É bom ressaltar que 'funcao2()' é uma função recursiva.
Por conta disso, não foi preciso utilizar laços de repetição.
No nosso caso, queremos saber o resultado da operação 'funcao2(vetor, 15, 0, TAM-1)'. Logo de início sabemos
que TAM foi definido como 10 utilizando a diretiva '#define', então TAM-1 = 9. Dentro da função, 'm' é a média
inteira entre 0 e 9, ou seja, m = 4. A primeira comparação, 'vetor[4] == 15' é falsa, pois vetor[4] = 9;
a segunda, 'i >= f', também é falsa, pois 0 < 9; já a terceira, 'v > vetor[m]' é verdadeira, já que
15 > 9. Após isso, será executada a mesma função 'funcao2()', mas agora 'i' recebe o valor de (m+1),
ou seja, agora i = 5. Agora, 'm' é a média entre 5 e 9, que é 7. Agora, a condição 'vetor[m] == v' é
verdadeira, porque vetor[7] = 15. Logo, a função retornará 7 e o 'printf' em 'main' imprimirá na tela
"7 - 7". Por conseguinte, a afirmação I é verdadeira!

Sobre a afirmação II:

A afirmação II comenta sobre um possível "pior caso". O que seria ele? Em se tratando de funções que buscam elementos
específicos dentro de vetores, é razoável pensar que o pior caso é aquele no qual o elemento procurado não está
no vetor, no fim das contas. Se esse for o pior caso, de fato, então 'funcao1()' é mais rápido, pois utiliza um
laço de repetição simples para percorrer elementos, enquanto 'funcao2()' se utiliza de operações com variáveis
locais e até recursividade! Logo, a afirmação II é verdadeira!

Sobre a afirmação III:

Embora a função 'funcao2()' implemente uma estratégia que lembre uma estratégia iterativa, ela na verdade
tem caráter recursivo! Portanto, a afirmação III é falsa!

Em conclusão, é correto o que se afirma em 'c'.

*/
