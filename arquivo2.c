#include <stdio.h>

int main(int argc, char const *argv[])
{
	void copiarConteudo(FILE *file1, FILE *file2);
	FILE *file1 = fopen("String.txt", "r");

	if(file1 == NULL){
		printf("Arquivo não foi encontrado\n");
		return 0;
	}
	FILE *file2 = fopen("String2.txt", "w");

	copiarConteudo(file1, file2);

	fclose(file1);
	fclose(file2);


	return 0;
}

void copiarConteudo(FILE *file1, FILE *file2){

	char leitor[1000];  // vetor de caracteres para armazenar 

	while(fgets(leitor, 1000, file1) != NULL) // a função fgets pega o valor de file1 e escreve em leitor

	fputs(leitor, file2);  // fputs pegar o vetor de caractere e escreve em um arquivo de texto... no nosso caso file2

}




