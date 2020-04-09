#include <stdio.h>
// Uma função é começada fora da função main
void imprimaMensagem1(void){
  
  printf("Essa funçao não vai ser preciso ser chamada como no exemplo 2\n");
}

// Existe uma diferença em declarar a função da função main. Pois fazendo
// assim, ela não precisa ser declarada, como foi declarada no exemplo 
// abaixo.

int main(){
  
  void imprimaMensagem1(void);  
  // Aqui é daclarado minha função, mas é declarado, ja que não é preciso
  // por uma boa pratica de programação. Supondo que um outro programador,
  // possa ler meu código, e precisa saber a quantidade de funções.
  imprimaMensagem1();   // Aqui chamo minha funnção
  
  void imprimaMensagem2(void);
  imprimaMensagem2();
  return 0;
}
void imprimaMensagem2(void){
  printf("Essa função, como foi declarada depois, precisa ser declarada no escopo da função principal"); 
}








