#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

double n1, n2;


int main(){
	//Os n�meros decimais devem ser colocado com v�rgula e n�o com ponto.
	//Exemplo: 6,31 e n�o 6.31 como geralmente roda.
	setlocale(LC_ALL, "PORTUGUESE");
	printf("Insira o primeiro n�mero: ");
	scanf("%lf", &n1);
	printf("Insira o segundo n�mero: ");
	scanf("%lf", &n2);
	printf("\n\t\t==========OPERA��ES==========\n");
	printf("A soma dos n�meros �: %.3lf\n", n1+n2);
	printf("O produto do primeiro n�mero pelo quadrado do segundo: %.3lf\n", n1*pow(n2,2));
	printf("O quadrado do primeiro n�mero: %.3lf\n", pow(n1,2));
	printf("A raiz quadrada da soma dos quadrados: %.3lf\n", sqrt(pow(n1,2)+pow(n2,2)));
	printf("O seno da diferen�a do primeiro n�mero pelo segundo(em radianos): %.3lf\n", sin(n1-n2));
	printf("O m�dulo do primeiro n�mero: %.3lf", fabs(n1));
}
