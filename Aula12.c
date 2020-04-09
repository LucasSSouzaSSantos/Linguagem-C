#include <stdio.h>

int main(){
  
  // Gerar um numero fatorial
  int numero; int fatorial = 1;
  
  printf("O programa abaixo vai gerar um fatorial do numero digitado.\n");
  printf("Digite um numero: \n");
  scanf("%i", &numero);
  
  int contador = 1;
  
  // Criando o fatorial usando o ciclo while:
  while(contador <= numero){
    fatorial *= contador;
    contador++;
  }
  
  printf("Usando o ciclo WHILE \n");
  printf("O fatorial de %i e: %i \n", numero, fatorial);
  
  // Criando o fatorial usando o ciclo for:
  printf("Digite outro numero: \n");
  scanf("%i", &numero);
  
  fatorial = 1;
  for(int i = 1; i <= numero; i++){
    fatorial *= i;
  }
  printf("Usando o Ciclo FOR \n");
  printf("O fatorial de %i e: %i \n", numero, fatorial);
  
  return 0;
}