#include <stdio.h>

int main(){
  int idade;
  
  printf("Favor informar a sua idade: /n);
  scanf("%i", &idade);
  
  if(idade < 18){
    printf("Bebidas alcoolicas não estão liberadas.\n");
    
  }
  else{
    printf("Bebidas liberadas");
  }
  
  
  return 0;
}