#include <stdio.h>
#include <stdlib.h>

/* Crie um software que receba uma temperatura em Celsius e converta
para Fahrenheit - Formula = (ValorEmF - 32) x 5/9 */

int main(int argc, char *argv[])
{
	float c=0;
	float f=0;
	float conversao=0;

	printf("Digite a temperatura celsius: ");
	scanf("%f", &c);

	conversao= (c*1.8) + 32;

	printf("\nValor Fahrenheit: %0.1f", conversao);
	return 0;
}
