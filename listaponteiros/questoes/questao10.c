#include <stdio.h>

int main(){
  /* programa 1 */
  int vet[] = {4, 9, 13};
  int i;
  for(i=0;i<3;i++){
    printf("%d ", *(vet+i));
  }

  /* programa 2 */
  for(i=0;i<3;i++){
  printf("%X ", vet+i);
  }
}

// O programa 1 acima declara um vetor 'vet' com elementos 4, 9, 13 
// de forma explícita. O laço de repetição faz a impressão na tela 
// usando ponteiros, acessando o conteúdo do vetor por meio de *(vet+i).
// O resultado são os números 4, 9 e 13 impressos na tela.

// O programa 2 difere do 1 somente na impressão na tela. Nele, o comando
// 'printf("%X ", vet+i)' faz ser impresso o endereço de memória de cada elemento
// em hexadecimal com letras maiúsculas. O resultado é a impressão a seguir:
// 61FF10 61FF14 61FF18 