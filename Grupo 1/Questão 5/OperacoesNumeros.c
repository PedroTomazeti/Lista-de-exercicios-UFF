#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

double n1, n2;


int main(){
	//Os números decimais devem ser colocado com vírgula e não com ponto.
	//Exemplo: 6,31 e não 6.31 como geralmente roda.
	setlocale(LC_ALL, "PORTUGUESE");
	printf("Insira o primeiro número: ");
	scanf("%lf", &n1);
	printf("Insira o segundo número: ");
	scanf("%lf", &n2);
	printf("\n\t\t==========OPERAÇÕES==========\n");
	printf("A soma dos números é: %.3lf\n", n1+n2);
	printf("O produto do primeiro número pelo quadrado do segundo: %.3lf\n", n1*pow(n2,2));
	printf("O quadrado do primeiro número: %.3lf\n", pow(n1,2));
	printf("A raiz quadrada da soma dos quadrados: %.3lf\n", sqrt(pow(n1,2)+pow(n2,2)));
	printf("O seno da diferença do primeiro número pelo segundo(em radianos): %.3lf\n", sin(n1-n2));
	printf("O módulo do primeiro número: %.3lf", fabs(n1));
}
