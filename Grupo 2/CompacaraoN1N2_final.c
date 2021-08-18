#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void n1cmpn2(int v1, int v2);
void n2cmpn1(int v4, int v5);

int n1, n2, i, lista[100000];

void n1cmpn2(int v1, int v2){
	setlocale(LC_ALL, "PORTUGUESE");
	int v3 = v2 - v1;
		switch(v3 == 1)
		{
			case 1:
				printf("\nLista de valores inteiros entre %d até o %d:\n", v1, v2);
				printf("\nNão exite número inteiro entres os 2 números.");
			break;	
			
			default:
				printf("\nLista de valores inteiros entre %d até o %d:\n", v1, v2);
				for(i = v1+1; i < v2; i++)
				{
					lista[v3] = i;
					printf("\t%d\n", lista[v3]);
				}
				
		}
	
}

void n2cmpn1(int v4, int v5){
	setlocale(LC_ALL, "PORTUGUESE");
	int v6 = v5 - v4;
		switch(v4 == v5)
		{
			case 1:
				printf("\nValores iguais.");
			break;
		
			default:
				printf("\nLista de valores inteiros entre %d até o %d:\n", v5, v4);
				switch(v6 == 1)
				{
					case 1:
						printf("\nNão exite número inteiro entres os 2 números.");
					break;
					
					default:
						for(i = v4+1; i < v5; i++)
						{	
							lista[v6] = i;
							printf("\t%d\n", lista[v6]);
						}
				}
				
		}

}

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	printf("Digite o primeiro número: ");
	scanf("%d", &n1);
	printf("Entre o segundo número: ");
	scanf("%d", &n2);
	
	switch(n1 < n2){
		case 1:
			n1cmpn2(n1,n2);
		break;
		
		default:
			n2cmpn1(n2,n1);	
	}
	
	return 0;
}
