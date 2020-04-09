#include <stdio.h>

int main(){
  int a, b, resultado;
  
  printf("Digite o primeiro numero inteiro: \n");
  scanf("%i", &a);
  
  printf("Digite o segundo numero inteiro: \n");
  scanf("%i", &b);
  
  // Primeira maneira de resolver o problema.
  if(b == 0){
    printf("Divisao por zero\n");
  }
  else{
  
    if (a % b == 0){
    
    printf("O numero %i e divisivel pelo numero %i \n", a, b);
  }
  else{
    printf("O numero %i não e divisivel pelo numero %i \n", a, b);
  }
  
  }
  
  // Segunda maneira de resolver o problema
  if( b == 0){
    printf("Divisao por zero\n");
  }
  else{
    
  resultado = a % b;
  if (resultado == 0){
    
    printf("O numero %i e divisivel pelo numero %i \n", a, b);
  }
  else{
    printf("O numero %i não e divisivel pelo numero %i \n", a, b);
  }
  
  }
  
  return 0;
}