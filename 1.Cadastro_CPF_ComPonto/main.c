#include <stdio.h>
#include <stdlib.h>

/* Nome c 50 caracteres Rg com ponto Cpf Idade Endereço 100 Receber  4 notas de dois alunos e notas receber Próximo aluno ...
Mostrar Aluno 1 media ...Aluno 2  média... */

int main(int argc, char *argv[])
{

	char alunos[2][50];
	float media[2];
	int i=0;

	for(i=0; i< 2; i++)
		{
			char RG[12];
			char CPF[14];
			int idade = 0;
			char end[100];
			float nota[4];

			printf("\nDigite o nome do aluno: ");
			fflush(stdin);
			gets (alunos[i]);

			printf("\nDigite o RG: ");
			scanf("%s", RG);
			printf("\nDigite o CPF: ");
			scanf("%s", CPF);
			printf("\nDigite a idade do aluno: ");
			scanf("%i", &idade);
			printf("\nDigite o endereco: ");
			fflush(stdin);
			gets (end);

			int j;
			for(j = 0; j < 4; j++)
				{
					printf("\nDigite a %ia nota: ", j+1);
					scanf("%f", &nota[j]);
				}

			media[i] = (nota[0] + nota[1] + nota[2] + nota[3]) / 4;
		}

	for(i = 0; i < 2; i++)
		{
			printf("\nO aluno(a) %s teve a media %.2f", alunos[i], media[i]);
		}

	return 0;
}
