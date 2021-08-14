#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

double converterDouble(double tempF1);
int converterInt(int tempF2);

double DFahrenheit, DCelsius;
int IFahrenheit, ICelsius;

//cálculo do Double
double converterDouble(double tempF1){
	DCelsius = (tempF1 - 32.0) * (5.0/9.0);
	
	return DCelsius;
}

//cálculo do Int
int converterInt(int tempF2){
	ICelsius = (tempF2 - 32) * 5/9;
	
	return ICelsius;
}


int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	printf("Insira o valor em Fahrenheit: ");
	scanf("%lf", &DFahrenheit);
	double tempC1 = converterDouble(DFahrenheit);
	int tempC2 = converterInt(DFahrenheit);
	printf("Celsius para double: %lf°C e Celsius para int: %d°C", tempC1, tempC2);
	
	return 0;
}
