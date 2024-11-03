#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void funcao(char** str){
  str++;
}
int main(){
  char *str = (void *)malloc(50*sizeof(char));
  strcpy(str, "Agostinho");
  funcao(&str);
  puts(str);
  free(str);
  return 0;
}

// A fun��o 'funcao' modifica a string apenas localmente.
// Isso ocorre pois 'funcao' executa o comando 'str = str + 1',
// que modifica o valor de str localmente e mant�m o valor de 'str'
// intacto na fun��o principal.
