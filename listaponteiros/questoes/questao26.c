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
  a = a >> 1; // Deslocamento bit a bit à direita
  b = b << 1; // Deslocamento bit a bit à esquerda

  printf ("x = %d, y = %d, z = %d\n", x, y, z);
  }
  printf ("%d %d %d\n", x, y, z);
  return 0;
}

/*
Na linha 6, os valores inteiros digitados pelo usuário
são armazenados em 'a' e 'b'. Então, supondo que o usuário
digite 10 e 1, a = 10 e b = 1.

Em seguida, 'x' recebe o valor de 'a', que é 10. 'y' recebe
o valor de 'b', que é 1, e 'z' recebe a soma de a + b, que é 11.

Na linha 10, a condição 'a' dentro do laço 'while' garante
que os comandos dentro dele serão executados enquanto 'a'
tiver um valor diferente de zero.

Dentro do laço 'while' temos:

O comando 'x = x | b' executa a operação lógica OR bit a bit
entre 'x' e 'b' e armazena o resultado disto no próprio 'x'.
Já que x = 10 (1010 em binário) e b = 1 (0001), fazemos bit a bit:
1 OR 0 = 1; 0 OR 0 = 0; 1 OR 0 = 1; 0 OR 1 = 1. Assim,
x | b = 11 (1011). Agora, x = 11.

O comando 'y = y ^ a' executa a operação lógica XOR bit a bit
entre 'y' e 'a' e armazena o resultado disto no próprio 'y'.
Já que y = 1 (0001 em binário) e a = 10 (1010), fazemos bit a bit:
0 XOR 1 = 1; 0 XOR 0 = 0; 0 XOR 1 = 1; 1 XOR 0 = 1. Assim,
y ^ a = 11 (1011). Agora, y = 11.

O comando 'z = z & (a+b)' executa a operação lógica AND bit a bit
entre 'z' e '(a+b)' e armazena o resultado disto no próprio 'z'.
Já que z = 11 (1011 em binário) e (a+b) = 11 (também 1011), fazemos
bit a bit:
1 AND 1 = 1; 0 AND 0 = 0; 1 AND 1 = 1; 1 AND 1 = 1. Assim,
z & (a+b) = 11 (1011). Agora, z = 11 (manteve-se constante).

O comando 'a = a >> 1' desloca cada bit de 'a' à direita
em uma posição. Isso significa que o valor de 'a'
será dividido por 2 (divisão de piso, no caso de números inteiros).
Já que a = 10 (1010), fazemos bit a bit:
1 vai à direita e o segundo bit agora é 1; 0 vai à direita
e o terceiro bit agora é 0; 1 vai à direita e o quarto bit
agora é 1. O primeiro bit não tem elemento à sua esquerda.
Logo, ele agora é zero. Assim, a >> 1 = 5 (0101). Agora, a = 5.

O comando 'b = b << 1' desloca cada bit de 'b' à esquerda
em uma posição. Isso significa que o valor de 'b'
será multiplicado por 2. Já que b = 1 (0001), fazemos bit a bit:
0 vai à esquerda e o primeiro bit permanece 0; 0 vai à esquerda
e o segundo bit permanece 0; 1 vai à esquerda e o terceiro bit
agora é 1. O quarto bit não tem elemento à sua direita. Logo,
ele agora é zero. Assim, b << 1 = 2 (0010). Agora, b = 2.

Perceba que 'a' é dividido por dois a cada iteração de 'while'.
Assim, é fácil notar que o laço de repetição será executado
apenas quatro vezes, pois na:

Primeira iteração, a = 10
Segunda iteração, a = 5
Terceira iteração, a = 2
Quarta iteração, a = 1.

Para saber os valores das variáveis em cada iteração,
execute o programa acima. Será impresso na tela o seguinte:

x = 11, y = 11, z = 11
x = 11, y = 14, z = 3
x = 15, y = 12, z = 2
x = 15, y = 13, z = 0

Por fim, o último print retorna '15 13 0'.
*/
