#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char x[1000];
	FILE *file = fopen("String.txt", "r");

	while(fgets(x, 1000, file) != NULL)
	{printf("%s\n", x);}

	freopen("String2.txt", "r", file);
	while(fgets(x, 1000, file) != NULL)
	{printf("%s\n", x);}


	fclose(file);

	return 0;
}