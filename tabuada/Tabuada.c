#include<stdio.h>
#include<stdlib.h>

int contador_1, contador_2, contador_3, contador_4, contador_5, contador_6, contador_7, contador_8, contador_9;

void gerador_tabuada(){
	printf("Tabuada de 1\n");
	for(contador_1 = 0; contador_1 <= 9; contador_1++){
		printf("1 * %d = %d\n", contador_1, contador_1 * 1);
	}
	
	printf("\n");
	printf("Tabuada de 2\n");
	for(contador_2 = 0; contador_2 <= 9; contador_2++){
		printf("2 * %d = %d\n", contador_2, contador_2 * 2);
	}
	
	printf("\n");
	printf("Tabuada de 3\n");
	for(contador_3 = 0; contador_3 <= 9; contador_3++){
		printf("3 * %d = %d\n", contador_3, contador_3 * 3);
	}
	
	printf("\n");
	printf("Tabuada de 4\n");
	for(contador_4 = 0; contador_4 <= 9; contador_4++){
		printf("4 * %d = %d\n", contador_4, contador_4 * 4);
	}
	
	printf("\n");
	printf("Tabuada de 5\n");
	for(contador_5 = 0; contador_5 <= 9; contador_5++){
		printf("5 * %d = %d\n", contador_5, contador_5 * 5);
	}
	
	printf("\n");
	printf("Tabuada de 6\n");
	for(contador_6 = 0; contador_6 <= 9; contador_6++){
		printf("6 * %d = %d\n", contador_6, contador_6 * 6);
	}
	
	printf("\n");
	printf("Tabuada de 7\n");
	for(contador_7 = 0; contador_7 <= 9; contador_7++){
		printf("7 * %d = %d\n", contador_7, contador_7 * 7);
	}
	
	printf("\n");
	printf("Tabuada de 8\n");
	for(contador_8 = 0; contador_8 <= 9; contador_8++){
		printf("8 * %d = %d\n", contador_8, contador_8 * 8);
	}
	
		printf("\n");
	printf("Tabuada de 9\n");
	for(contador_9 = 0; contador_9 <= 9; contador_9++){
		printf("9 * %d = %d\n", contador_9, contador_9 * 9);
	}
}

int main(){
	gerador_tabuada();
}
