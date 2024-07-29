#include <stdio.h>
#include <math.h>

#define GRAVIDADE 9.81

/*
 * Programa que calcula uma trajetória parabólica
 */
int main ()
{
	float altura, velocidadeInicial, anguloLancamento, distanciaPouso;

	printf("Altura relativa ao solo: ");
	scanf("%f", &altura);

	printf("Velocidade inicial em m/s: ");
	scanf("%f", &velocidadeInicial);

	printf("Angulo de lancamento: ");
	scanf("%f", &anguloLancamento);


	distanciaPouso = pow(velocidadeInicial, 2) * sin(2*(anguloLancamento * (M_PI / 180))) / GRAVIDADE; 

	printf("Distancia percorrida: %f", distanciaPouso);
	printf("\n");
	
	return 0;
}
