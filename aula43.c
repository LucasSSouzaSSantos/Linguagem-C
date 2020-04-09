#include <stdio.h>

int main(){
  
 typedef struct horario{
    int horas;
    int minutos;
    int segundos;
    
  }agora = {10, 20, 30}, depois = {}, amanha = {10,};
  
  horario teste[3];  // um vetor de estrutura
  horario ontem[3][3]; // matriz de estrutura
  
  printf(" %i: %i: %i. \n", agora.horas, agora.minutos, agora.segundos);
  
  return 0;
}