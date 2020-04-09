#include <stdio.h>
#include <stdlib.h>

int main(){
  
  int tamanhoString(char string[]);
  char stringUsuario[20];
  int tamanho;
  
  printf("Digite uma palacra(string): \n");
  scanf("%s", stringUsuario);
  
  tamanho = tamanhoString(stringUsuario);
  
  printf("A string: %s\nTamanho: %i \n", stringUsuario, tamanho);
  
  return 0;
}

int tamanhoString(char string[]){
  int contador;
  
  while(string[contador] != '\0'){
    contador++;
  }
  
  return contador;
}
