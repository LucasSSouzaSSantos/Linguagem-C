#include <stdio.h>

int main(){
  void imprimeLinha(int linha);
  imprimeLinha(71);
  
  int vetor[3] = {1, 2, 3};
  int *ponteiro1, *ponteiro2;
  
  for(int i = 0; i < 3; i++){
     *ponteiro1 = vetor[i];
     ponteiro2 = &vetor[i];
  printf("indece: %i valor: %i Memoria: %p\n", i, *ponteiro1, ponteiro2);
  }
  
  imprimeLinha(72);
  
  
  
  
  return 0;
}

void imprimeLinha(int numeroAula){
  printf("-- = -- = -- = -- = -- -- = -- = -- = -- = -- -- = -- = -- = -- = -- --=--\n");
  printf("                       Aula %i                                    \n\n", numeroAula);
  
}