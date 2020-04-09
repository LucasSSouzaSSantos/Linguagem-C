#include <stdio.h>

int main(){
  int i = 0;
  
  while(i != 0){
    printf("teste\n");
   // o ciclo while verifica a condição, sendo verdadeira, é execultado os comandos 
  }
  
  do{
    
    printf("teste\n");
    // o ciclo do - while antes ele execulta primeiro, pelo menos uma vez, e depois verifica a condição.
  }
  while(i != 0);
  
  return 0;
}