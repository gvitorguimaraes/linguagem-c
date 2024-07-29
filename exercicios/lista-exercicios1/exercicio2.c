#include <stdio.h>

/*
 * Programa que recebe 3 valores inteiros, calcula e imprime a média.
 */
int main ()
{
	int a, b, c;
	float media;

	printf("A: ");
	scanf("%d", &a);

	printf("B: ");
	scanf("%d", &b);

	printf("C: ");
	scanf("%d", &c);

	media = (a+b+c) / 3.0;

	printf("Media: %.2f", media);
	printf("\n");

	return 0;
}
