#include <stdio.h>

int main(){
  void funcaoPrint(int x, int vetor[]);
  int x = 10;
  int vetor[3] = {10};
  
  funcaoPrint(x, vetor);
  
  printf("Variavel int na funcao principal = %i \n", x);
  printf("Vetor na funcao principal = %i \n", vetor[1]);
  
  return 0;
}

void funcaoPrint(int x, int vetor[]){
  
  x = x + 10; // a variavel xis atua como uma variavel local não estatica
  vetor[1] = 20;  // o vetor atua como uma variavel local estatica
  
  // a variavel xis, que é um parâmetro, dentro da função funcaoPrint: É
  // uma copia da variável xis, que foi passada como argumento dentro da 
  // função principal. Logo existem duas variaveis xis, quando a função 
  // funcaoPrint estar rodando.
  
  // Quando é passado uma matriz ou um vetor como parâmetro dentro da 
  // função, não é passado uma copia; é passado um endereço de memoria.
  // Aonde estar armazenado o vetor ou matriz
  
  printf("Variavel int na funcao print = %i \n", x);
  printf("Vetor na funcao print = %i \n\n", vetor[1]);
  
}
