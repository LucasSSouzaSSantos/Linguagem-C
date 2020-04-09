#include <stdio.h>

int main(){
  
/*
  void imprimirLinha(int linha);
  void fimLinha(void);
  imprimirLinha(82);  
  

  FILE *file;
  
  file = fopen("arq1.txt","w");
  fprintf(file, "Coxinha");
  fclose(file);
  
  fimLinha();
  
  imprimirLinha(83);

  FILE *file1;

  file1 = fopen("arq2.txt", "r");
  int x, y, z;

  if(file1 == NULL){
  	printf("Arquivo não pode ser aberto!\n");
  	return 0;
  }

  fscanf(file1, "%i %i %i ", &x, &y, &z);

  printf("%i %i %i \n", x, y, z );

  fclose(file1);
  fimLinha();

  imprimirLinha(84);

  */

	FILE *file;

	//file = fopen("String.txt", "w");

	file = fopen("String.txt", "r");

	if(file == NULL){
		printf("Não foi possivel abrir o programa\n");
		return 0;
	}
	else{
		printf("Arquivo existe\n");
	}

	char frase[100];

	while(fgets (frase, 100, file) != NULL){ // Se tirar "!= NULL" a função fgets vai ler até encontrar a primeira quebra de linha e depois sair do programa.
		printf("%s\n", frase);

	}



	fclose(file);


































  return 0;
}

void imprimirLinha(int linha){
	printf("-=- -=- -=- -=- -=- -=- -=- -=- -=- -=- -=- -=--=- -=- -=- -=-  \n");
	printf("		            Aula %i 					                \n", linha);
	printf("												                \n");
	
}

void fimLinha(){

	printf("-=- -=- -=- -=- -=- -=- -=- -=- -=- -=- -=- -=--=- -=- -=- -=-  \n");

}