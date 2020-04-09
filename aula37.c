#include <stdio.h>

int main(){
  
  void funcaoPrint(int x[3][3]);
  int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  funcaoPrint(matriz);
  // para passar a matriz como parâmetro não é preciso colocar os concheites
  
  return 0;
}

void funcaoPrint(int x[3][3]){
  // é necessário escrever as chaves
  // no mínimo é preciso preencher o segundo cochete com o seu tamanho
  
  // nesse exemplo o parâmetro "x" é quem recebe a matriz passada dentro 
  // da função principal
  
  int i, j;
  for(i = 0; i < 3; i++){
    
    for(j = 0; j < 3; j++){
      printf("%i ",x[i][j]);
      
    }
    printf("\n");
    
  }
  printf("\n");
  
}