#include <stdio.h>

void calcularHoras(int tempoSegundos)
{
	int horas; 
	int minutos;
	int segundos;
	
	horas = tempoSegundos / 3600;
	tempoSegundos = tempoSegundos % 3600;

	minutos = tempoSegundos / 60;
	tempoSegundos = tempoSegundos % 60;

	segundos = tempoSegundos;

	printf("%d horas, %d minutos e %d segundos!\n", horas, minutos, segundos);
}

int main ()
{
	int tempoSegundos;
	
	printf("========== Exercicio 1 =========== \n \n");
	printf("Digite o tempo de duracao em segundos: ");
	scanf("%d", &tempoSegundos);

	calcularHoras(tempoSegundos);

	return 0;
}

