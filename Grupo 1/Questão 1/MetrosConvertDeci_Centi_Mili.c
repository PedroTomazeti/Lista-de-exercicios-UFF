#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, "PORTUGUESE");
	float medida;
	
		printf("Insira o valor desejado em metros: ");
		scanf("%f", &medida);
		printf("\n");
		printf("\t|----------TABELA------------|\n");
		printf("\t|Em decímetros é:  %.2lf dm |\n", medida*10);
		printf("\t|Em centímetros é: %.2lf cm|\n", medida*100);
		printf("\t|Em milímetros é: %.2lf mm|\n", medida*1000);
		
	return 0;	
}
