#include <stdio.h>
#include <stdlib.h>

int main(){
  
  char palavra1[6] = {'B', 'r', 'a', 's', 'i', 'l'};
  char palavra2[]  = {'B', 'r', 'a', 's', 'i', 'l'};
  char palavra3[7] = {"Brasil"};
  char palavra4[]  = {"Brasil"};
  char palavra5[]  =  "Brasil";
  
  printf("1- %s \n", palavra1);
  printf("2- %s \n", palavra2);
  printf("3- %s \n", palavra3);
  printf("4- %s \n", palavra4);
  printf("5- %s \n", palavra5);
  
  // \0 caractere nulo vem no final de toda string... é a forma do programa falar para o 
  // copilador que a string acabou.
  
  // \ não é considerada um caractere dentro da linguagem C
  
  
  
  return 0;
}



