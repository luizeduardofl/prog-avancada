#include <stdio.h>
int main(){
  int a, b;
  int x, y, z;

  scanf("%d %d", &a, &b);

  x = a; y = b; z = a + b;

  while (a) {
  x = x | b; // OR bit a bit
  y = y ^ a; // XOR bit a bit
  z = z & (a+b); // AND bit a bit
  a = a >> 1; // Deslocamento bit a bit � direita
  b = b << 1; // Deslocamento bit a bit � esquerda

  printf ("x = %d, y = %d, z = %d\n", x, y, z);
  }
  printf ("%d %d %d\n", x, y, z);
  return 0;
}

/*
Na linha 6, os valores inteiros digitados pelo usu�rio
s�o armazenados em 'a' e 'b'. Ent�o, supondo que o usu�rio
digite 10 e 1, a = 10 e b = 1.

Em seguida, 'x' recebe o valor de 'a', que � 10. 'y' recebe
o valor de 'b', que � 1, e 'z' recebe a soma de a + b, que � 11.

Na linha 10, a condi��o 'a' dentro do la�o 'while' garante
que os comandos dentro dele ser�o executados enquanto 'a'
tiver um valor diferente de zero.

Dentro do la�o 'while' temos:

O comando 'x = x | b' executa a opera��o l�gica OR bit a bit
entre 'x' e 'b' e armazena o resultado disto no pr�prio 'x'.
J� que x = 10 (1010 em bin�rio) e b = 1 (0001), fazemos bit a bit:
1 OR 0 = 1; 0 OR 0 = 0; 1 OR 0 = 1; 0 OR 1 = 1. Assim,
x | b = 11 (1011). Agora, x = 11.

O comando 'y = y ^ a' executa a opera��o l�gica XOR bit a bit
entre 'y' e 'a' e armazena o resultado disto no pr�prio 'y'.
J� que y = 1 (0001 em bin�rio) e a = 10 (1010), fazemos bit a bit:
0 XOR 1 = 1; 0 XOR 0 = 0; 0 XOR 1 = 1; 1 XOR 0 = 1. Assim,
y ^ a = 11 (1011). Agora, y = 11.

O comando 'z = z & (a+b)' executa a opera��o l�gica AND bit a bit
entre 'z' e '(a+b)' e armazena o resultado disto no pr�prio 'z'.
J� que z = 11 (1011 em bin�rio) e (a+b) = 11 (tamb�m 1011), fazemos
bit a bit:
1 AND 1 = 1; 0 AND 0 = 0; 1 AND 1 = 1; 1 AND 1 = 1. Assim,
z & (a+b) = 11 (1011). Agora, z = 11 (manteve-se constante).

O comando 'a = a >> 1' desloca cada bit de 'a' � direita
em uma posi��o. Isso significa que o valor de 'a'
ser� dividido por 2 (divis�o de piso, no caso de n�meros inteiros).
J� que a = 10 (1010), fazemos bit a bit:
1 vai � direita e o segundo bit agora � 1; 0 vai � direita
e o terceiro bit agora � 0; 1 vai � direita e o quarto bit
agora � 1. O primeiro bit n�o tem elemento � sua esquerda.
Logo, ele agora � zero. Assim, a >> 1 = 5 (0101). Agora, a = 5.

O comando 'b = b << 1' desloca cada bit de 'b' � esquerda
em uma posi��o. Isso significa que o valor de 'b'
ser� multiplicado por 2. J� que b = 1 (0001), fazemos bit a bit:
0 vai � esquerda e o primeiro bit permanece 0; 0 vai � esquerda
e o segundo bit permanece 0; 1 vai � esquerda e o terceiro bit
agora � 1. O quarto bit n�o tem elemento � sua direita. Logo,
ele agora � zero. Assim, b << 1 = 2 (0010). Agora, b = 2.

Perceba que 'a' � dividido por dois a cada itera��o de 'while'.
Assim, � f�cil notar que o la�o de repeti��o ser� executado
apenas quatro vezes, pois na:

Primeira itera��o, a = 10
Segunda itera��o, a = 5
Terceira itera��o, a = 2
Quarta itera��o, a = 1.

Para saber os valores das vari�veis em cada itera��o,
execute o programa acima. Ser� impresso na tela o seguinte:

x = 11, y = 11, z = 11
x = 11, y = 14, z = 3
x = 15, y = 12, z = 2
x = 15, y = 13, z = 0

Por fim, o �ltimo print retorna '15 13 0'.
*/
