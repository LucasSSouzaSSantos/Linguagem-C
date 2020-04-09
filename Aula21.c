#include <stdio.h>

int main(){
  
  for(int i = 1; i <= 10; i++){
     if(i % 2 == 0){
      printf("\n");
    }
    printf("==Volta %i== ", i);
    
    for(int j = 1; j <= 10; j++){
      if(j==1){ printf("\n");}
      
      printf("  Ponto %i", j);
      
    }
    }
  
  
  return 0;
}