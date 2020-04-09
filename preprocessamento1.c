#include <stdio.h>

#define SIM 100
#define NAO 10

int main(){
  int x;
  
  printf("Digite um numero inteiro: \n");
  scanf("%i \n", &x);
  
  if(x <= 10){
    printf("%i\n", NAO);
  }
  else
  {
    printf("%i\n", SIM);
  }
  
  
  
  return 0;
}