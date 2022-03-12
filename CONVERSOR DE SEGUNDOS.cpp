#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


float ConverteEmSegundos (float Hora, float minutos, float ConverteEmSegundos){
	float conversao;
	conversao=(ConverteEmSegundos+(minutos*60)+(Hora*60*60));
	return conversao;
}

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float Hora, minutos, segundos;
	
	printf("Programa para converter HORAS-MINUTOS-SEGUNDOS em SEGUNDOS:\n");
	printf("\n______________________________________________________________________________\n\n");
	
	printf("\nDigite a HORA:");
	scanf("%f", &Hora);
	
	printf("\nDigite os MINUTOS:");
	scanf("%f", &minutos);
	
	printf("\nDigite os SEGUNDOS:");
	scanf("%f", &segundos);
	
	printf("______________________________________________________________________________\n\n");
	printf("\n O horario em segundos é de :%f",ConverteEmSegundos(Hora,minutos,segundos));
	
	return 0;
}
