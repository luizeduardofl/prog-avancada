#include <stdio.h>

void main(){
  int const *x = 3;
  printf("%d", (*x));
}

// Não haverá nenhuma saída, pois o seguinte erro ocorre:
// "increment of read-only location '*x'". Isso acontece
// porque o programa tenta modificar o valor de uma variável constante (*x).
// A inicialização 'inst const *x = 3' gera um 'warning':
// "initialization makes pointer from integer without a cast [-Wint-conversion]"

