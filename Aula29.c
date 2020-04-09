#include <stdio.h>

int gVariavelGlobal = 2;
// a variavel global funciona parecidamente como
// uma variavel local Estatica.

int main(){
  
  // função chamar quadrado:
  
  float calcularAreaQuadrado(float x, float y);
  float area = calcularAreaQuadrado(4.0, 5.0);
  
  printf("A area do quadrado e: %.2f \n", area);
  
  // função teste
  void teste(void);
  printf("Global = %i \n", gVariavelGlobal);
  
  teste();
  teste();
  
  
  return 0;
}

// função calcular area de quadrado:

float calcularAreaQuadrado(float x, float y){
  float area = x * y;
  
  return area;
}

// função teste:

void teste(){
  // Essas variável são locais, pois só são usadas dentro da função teste. 
  // Logo, não podem ser usadas dentro de outras funções.
  
  int variavelLocalAutomatica = 2;  // variavel local
  variavelLocalAutomatica *= 2;
  // A variavel local automatica ela é criada quando a função principal 
  // chama a função teste; logo após que a funçao teste para de rodar, ela
  // é apagada. 
  
  printf("Variavel Local Automatica = %i \n", variavelLocalAutomatica);
  
  static int variavelLocalEstatica = 2;
  variavelLocalEstatica *= 2;
  // Já a variavel local Estatica: ela não é apagada, depois que o programa
  // sai de dentro da função. Ela fica guardada no espaço de memoria que foi
  // armazenada para ele, desde sua primeira execução. Logo pode-se usar
  // essa variável quantas vezes for necessário.
  
  printf("Variavel Local Estatica = %i \n", variavelLocalEstatica);

  
}

// FUNÇÃO QUE CHAMA OUTRA FUNÇÃO





