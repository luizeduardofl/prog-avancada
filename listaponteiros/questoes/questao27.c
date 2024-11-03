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
A respeito das fun��es implementadas, avalie as afirma��es a seguir:

I. O resultado da impress�o na linha 24 �: 7 - 7.
II. A fun��o funcao1(), no pior caso, � uma estrat�gia mais r�pida do que a fun��o funcao2().
III. A fun��o funcao2() implementa uma estrat�gia iterativa na concep��o do algoritmo.


Sobre a afirma��o I:

Em 'main()', � impresso o resultado de 'funcao1(vetor, 15)' ao lado do resultado
de 'funcao2(vetor, 15, 0, TAM-1)'. Vamos entender o resultado de cada um.
Ora, � trivial entender o funcionamento de 'funcao1': dados um vetor 'int' e um valor
tamb�m 'int', um la�o 'for' percorre todo o vetor at� encontrar um elemento seu que
seja igual ao valor 'int'. Caso encontrado, retorna-se o �ndice deste elemento.
Ou seja, no nosso caso, procura-se dentro do vetor qual � o �ndice do elemento
igual a 15. Vemos que vetor[7] = 15, logo, o comando 'funcao1(vetor, 15)' retornar� 7.

A fun��o dois j� � mais complexa, pois ela recebe quatro argumentos, todos 'int', dos quais um � vetor
e tr�s s�o valores comuns 'v', 'i' e 'f'. 'v' � o valor com o qual o elemento do vetor ser� comparado;
'i' � um limite inferior para busca interna ao vetor; f � um limite superior. Dentro da fun��o, calcula-se
uma quantidade 'm' que � a m�dia aritm�tica entre 'i' e 'f'. Da�, s�o feitas verifica��es com condicionais.
Em resumo, m � retornado caso ele seja o �ndice do elemento igual ao valor 'v'. Perceba que 'funcao2()'
� uma aplica��o do m�todo da bisse��o em linguagem C! � bom ressaltar que 'funcao2()' � uma fun��o recursiva.
Por conta disso, n�o foi preciso utilizar la�os de repeti��o.
No nosso caso, queremos saber o resultado da opera��o 'funcao2(vetor, 15, 0, TAM-1)'. Logo de in�cio sabemos
que TAM foi definido como 10 utilizando a diretiva '#define', ent�o TAM-1 = 9. Dentro da fun��o, 'm' � a m�dia
inteira entre 0 e 9, ou seja, m = 4. A primeira compara��o, 'vetor[4] == 15' � falsa, pois vetor[4] = 9;
a segunda, 'i >= f', tamb�m � falsa, pois 0 < 9; j� a terceira, 'v > vetor[m]' � verdadeira, j� que
15 > 9. Ap�s isso, ser� executada a mesma fun��o 'funcao2()', mas agora 'i' recebe o valor de (m+1),
ou seja, agora i = 5. Agora, 'm' � a m�dia entre 5 e 9, que � 7. Agora, a condi��o 'vetor[m] == v' �
verdadeira, porque vetor[7] = 15. Logo, a fun��o retornar� 7 e o 'printf' em 'main' imprimir� na tela
"7 - 7". Por conseguinte, a afirma��o I � verdadeira!

Sobre a afirma��o II:

A afirma��o II comenta sobre um poss�vel "pior caso". O que seria ele? Em se tratando de fun��es que buscam elementos
espec�ficos dentro de vetores, � razo�vel pensar que o pior caso � aquele no qual o elemento procurado n�o est�
no vetor, no fim das contas. Se esse for o pior caso, de fato, ent�o 'funcao1()' � mais r�pido, pois utiliza um
la�o de repeti��o simples para percorrer elementos, enquanto 'funcao2()' se utiliza de opera��es com vari�veis
locais e at� recursividade! Logo, a afirma��o II � verdadeira!

Sobre a afirma��o III:

Embora a fun��o 'funcao2()' implemente uma estrat�gia que lembre uma estrat�gia iterativa, ela na verdade
tem car�ter recursivo! Portanto, a afirma��o III � falsa!

Em conclus�o, � correto o que se afirma em 'c'.

*/
