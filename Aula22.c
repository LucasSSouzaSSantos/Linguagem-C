#include <stdio.h>
// Aula 22 até à 27
int main(){
 /*
  // Introdução à vetores: Aula 22
  
  // Primeira maneira de preencher um vetor
  int nota1[5] = {1, 2, 3, 4, 5}; // vetor de inteiro
  
  // Segunda maneira de preencher um vetor
  int nota2[5];
  nota2[0] = 1; nota2[1] = 2; nota2[2] = 3; nota2[3] = 4; nota2[4] = 5;

  // Declaração de Vetores: Aula 23
  
  //Terceira maneira de preencher um vetor:
  /*
  int vetor[8];
  for(int i = 0; i < 8; i++){
    printf("%i\n", vetor[i]);
  }
  */
  
  // Aula 24
  /*
  float notas[5] = {0.0};
  float total = 0;
  float Media = 0;
  
  printf("Insira 5 notas do Alunos: ");
  
  for(int i = 0; i < 5; i++){
    scanf("%f ", &notas[i]); 
    printf("\n %f", notas[i]);
  }
  
  for(int i = 0; i < 5; i++){
    total += notas[i];
  }
  
  Media = total / 5;
  printf("%.2f \n", Media);
  */
  
  // Matriz
  // Primeira maneira de preencher uma matriz
  int matriz[5][5] = {{ 1,  2,  3,  4 , 5}, 
		      { 4,  5,  6,  7,  8}, 
		      { 7,  8,  9, 10, 11},
		      {12, 13, 14, 15, 16},
		      {17, 18, 19, 20, 21}};
		      
  printf(" Matriz:        \n");
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      printf(" %i ", matriz[i][j]);
    }
    printf("\n");
  }
  
  
  return 0;

  }