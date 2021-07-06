#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct registro
{
	char nome[40];
	int dia;
	int mes;
}; 

int main()
{
	setlocale(LC_ALL, "Portuguese");

	struct registro pessoa[12], * pont;
	pont = pessoa;
	int x, mesnasc;

	printf("====================Registre 12 contatos====================\n");

	for (x = 0; x < 12; x++)
	{
		printf("Digite o nome:");
		fgets(pessoa[x].nome, 39, stdin);

		printf("Digite o dia de nascimento:");
		scanf_s("%i", &pessoa[x].dia);

		printf("Digite o mês de nascimento:");
		scanf_s("%i", &pessoa[x].mes);
		printf("\n");
		setbuf(stdin, NULL);
	}

	printf("====================Registros====================\n");

	for (mesnasc = 1; mesnasc <= 12; mesnasc++) 
	{
		printf("\n====================Mês %i====================\n", mesnasc);

		for (x = 0; x < 12; x++)
		{
			if ((pont + x) -> mes == mesnasc)
			{
				printf("\nNome: %sDia de nascimento: %i\n", (pont + x) -> nome, (pont + x) -> dia);
			}
		}
	}
	
	return 0;
}
