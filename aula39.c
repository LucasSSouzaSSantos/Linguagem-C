#include <stdio.h>

int main(){
  // definição da minha estrutura:
  struct horario{  
    int horas; int minutos; int segundos;
    float teste; char letra;
    // Foi criado uma estrutura com o nome horario, que tem como 
    // parâmetro: horas, minutos e segundos; todas variáveis do tipo 
    // inteira.
  };
  
  // declaração da minha estrutura:
  struct horario agora;
  
  // Logo acima foi criado uma variável como o nome "agora" do tipo
  // struct horario.
  
  // Como fazer para alterar a variável "agora" do tipo "horario" em hora ?
  // inicialização dos membros da minha estrutura:
  agora.horas = 15;
  agora.minutos = 17;
  agora.segundos = 30;
  
  printf("%i: %i: %1. \n", agora.horas, agora.minutos, agora.segundos);
  
  // criando uma nova estrutura chamada depois
  
  struct horario depois;
  depois.horas = agora.horas + 10;
  depois.minutos = agora.minutos;
  depois.teste = 50.55 / 123;
  depois.letra = 'a';
  
  
  
  
  
  
  return 0;
}
