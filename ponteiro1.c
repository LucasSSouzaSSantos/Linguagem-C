#include <stdio.h>

int main(){
  void imprimeLinha(int numero);
  int x;
  x = 10;
  imprimeLinha(61);
  
  int *ponteiro;  // criando um ponteiro que não aponta pra nenhuma variavel ainda
  ponteiro = &x; //  agora o ponteiro estar apontando para o endereço de memoria da variável xis
  
  // &[nome da variável] imprime o numero de memoria da variável
  printf("endereço de xis = %i \n", &x);
  
  printf("valor de ponteiro = %i\n", *ponteiro); // acessando o valor endereço do ponteiro
  printf("endereço do ponteiro = %i\n", ponteiro);  // acessando o endereço do ponteiro
  
  imprimeLinha(62);
  
  double y = 20.50;
  char z = 'a';
  
  int *pX = &x;  // pegar o valor da variável x
  double *pY = &y;  // pega o valor da variável y
  char *pZ = &z;  // pega o valor da variável z
  
  printf("endereco x = %i - valor x = %i\n", pX, *pX);
  printf("endereco y = %i - valor i = %f\n", pY, *pY);
  printf("endereco z = %i - valor i = %c\n", pZ, *pZ);
  
  imprimeLinha(63);
  
  struct horario {
    int hora; int minuto; int segundo;
    
    
  };
  
  // A ideia dessa aula é usar ponteiro para alterar os valores dos argumentos da estrutura horario
  
  struct horario agora, *depois;
  depois = &agora;
  
  // Primeira maneira de acessar os argumentos da estrutura
   (*depois).hora = 20;
   (*depois).minuto = 20;
   (*depois).segundo = 20;
   
  printf("%i: %i: %i\n", agora.hora, agora.minuto, agora.segundo);
  
  // segunda manieera de acessar os argumentos da estrutura
  depois -> hora = 10;
  depois -> minuto = 20;
  depois -> segundo = 30;
  
  printf("%i: %i: %i\n", agora.hora, agora.minuto, agora.segundo); 
  
  imprimeLinha(64);
  
  int somatorio = 100;
  struct horario antes;
  
  antes.hora = somatorio + depois -> segundo;  
  antes.minuto = agora.hora + depois->hora;
  antes.segundo = depois->minuto - depois->segundo;
  printf("%i: %i: %i\n", antes.hora, antes.minuto, antes.segundo);
  
  imprimeLinha(65);
  
  struct horario1 {
    int *pHora; int *pMinuto; int *pSegundo;
    
  };
  
  struct horario1 hoje;
  int hora1 = 200; int minuto1 = 300; int segundo1 = 400;
  
  hoje.pHora = &hora1;
  hoje.pMinuto = &minuto1;
  hoje.pSegundo = &segundo1;
  
  printf("Hora - %i \nMinuto - %i\nSegundo - %i\n",*hoje.pHora, *hoje.pMinuto, *hoje.pSegundo);
  
  imprimeLinha(66);
  
  void testeVariavel(int x);
  void testePonteiro(int *pX);
  
  int teste = 1;
  int *pTeste = &teste;
  
  
  testeVariavel(teste);
  printf("Funcao teste: %i\n", teste);
  
  testePonteiro(pTeste);
  printf("Funcao pTeste: %i \n", teste);
  
  testeVariavel(teste);
  printf("Funcao teste: %i\n", teste);
  
  return 0;
}

void imprimeLinha(int numeroAula){
  printf("-- = -- = -- = -- = -- -- = -- = -- = -- = -- -- = -- = -- = -- = --\n");
  printf("                       Aula %i                                    \n\n", numeroAula);
  
}

void testeVariavel(int x){
  
  ++x;
}

void testePonteiro(int *pX){
  
  
  ++*pX;
}









