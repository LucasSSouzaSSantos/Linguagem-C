#include <stdio.h>

struct lista{
    int valor;
    struct lista *proximo;
    
  };
  
  struct lista *procurarValor(struct lista *pLista, int valor){
    
    while(pLista!= (struct lista *)0){
      if(pLista ->valor == valor){
	return(pLista);
      }
      else{
	pLista = pLista -> proximo;
	
      }
      
    }
    return (struct lista *)0;
    
  }

int main(){
  
  void imprimeLinha(int linha);
  imprimeLinha(67);
  // problema de overflow
  // short x = + 214748647; 
  // short y = - 214748647;
  
  // solução do problema em cima
  int x = + 214748647; 
  int y = - 214748647;
  
  printf("%i \n", x);
  printf("%i \n", y);
  
  printf("As variaveis do tipo short nao tinham bits suficientes para armazenar \nos valores passado; mas temos como solucao a troca do tipo de variavel.\n");
  
  imprimeLinha(68);
  printf("Pilha e Lista:\n");
  
  struct lista m1, m2, m3;
  struct lista *gancho = &m1;
  
  m1.valor = 10;
  m2.valor = 20;
  m3.valor = 30;
  
  m1.proximo = &m2;
  m2.proximo = &m3;
  m3.proximo = (struct lista *)0;
  
  while(gancho != (struct lista *)0){
    printf("%i \n", gancho->valor);
    gancho = gancho->proximo;
    
    
  }
  
  imprimeLinha(69);
  printf("Pilha e Lista:\n");
  
  struct lista * procurarValor(struct lista *pLista, int valor);
  struct lista m11, m22, m33;
  struct lista *resultado1, *gancho1 = &m11;
  
  m11.valor = 5;
  m22.valor = 10;
  m33.valor = 15;
  
  m11.proximo = &m22;
  m22.proximo = &m33;
  m33.proximo = (struct lista *)0;
  
  int valor1;
  printf("Digite valor da pesquisa: \n");
  scanf("%i", &valor1);
  
  resultado1 = procurarValor(gancho1, valor1);
  
  if(resultado1 == (struct lista *)0){
    printf("Valor não encontrado.\n");
    
  }
  else{
    printf("Valor %i foi encontrado no endereco de memoria %i.\n", valor1, resultado1);
  }
  
 return 0; 
  
}

void imprimeLinha(int numeroAula){
  printf("-- = -- = -- = -- = -- -- = -- = -- = -- = -- -- = -- = -- = -- = -- --=--\n");
  printf("                       Aula %i                                    \n\n", numeroAula);
  
}