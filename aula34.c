#include <stdio.h>

int main(){
  
  float somaDeDigitos(float num1, float num2);
  float a = 2, b, soma;
  
  printf("Digite um numero: \n");
  scanf(" %f ", &a);
  printf("Digite outro numero: \n");
  scanf(" %f ", &b);
  
  soma = somaDeDigitos(a, b);
  
  printf("A soma dos numeros e: %.2f \n", soma);
  
  
  return 0;
}

float somaDeDigitos(float num1, float num2){
  
  float valorAbsoluto(float x);
  
  if(num1 < 0){
    num1 = valorAbsoluto(num1);
  }
  
  if(num2 < 0){
    num2 = valorAbsoluto(num2);
  }
  
  return num1 + num2;
}

float valorAbsoluto(float x){

  return x * -1;
}