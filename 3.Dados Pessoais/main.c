#include <stdio.h>
#include <stdlib.h>

/* Crie um software que receba a idade, gênero, peso, altura e exiba essas informações na tela */

int main(int argc, char *argv[])
{
	int idade;
	char genero;
	float peso;
	float altura;

	printf("Digite os dados solicitados abaixo.\n");

	printf("\nIdade: ");
	scanf("%i", &idade);
	printf("\nGenero : ");
	scanf(" %c",&genero);
	printf("\nPeso: ");
	scanf("%f", &peso);
	printf("\nAltura: ");
	scanf("%f", &altura);
	
	printf("\nOs daos sao:\n Idade: %i anos | Genero: %c | Peso: %.2f Kg |Altura: %.2f M", idade, genero, peso, altura);

	return 0;
}
