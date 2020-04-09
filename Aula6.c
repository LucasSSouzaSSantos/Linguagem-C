#include <stdio.h>

int main(){
  int minhaIdade = 28; int maeIdade = 56; int paiIdade = 52;
  int irmaoIdade = 26; int irmaIdade = 19; int idadeTotal;
  
  idadeTotal = maeIdade + paiIdade + minhaIdade + irmaoIdade + irmaIdade;
  
  printf("- Pai idade: %i \n- Mae idade: %i \n- Minha idade: %i \n- Irmao idade: %i \n- Irma idade: %i", paiIdade, maeIdade, minhaIdade, irmaoIdade, irmaIdade);
  printf("\n- idade total: %i \n", idadeTotal);
  return 0;
}