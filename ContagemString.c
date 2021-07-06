#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL,"Portuguese");

	char nome[40], endereco[30], telefone[12], total[82];
	int cont = 0, tamanho1, tamanho2, tamanho3, letras = 0, numeros = 0;

	printf("Digite o nome da pessoa:");
	gets(nome);

	printf("Digite o endereco:");
	gets(endereco);

	printf("Digite o telefone para contato:");
	gets(telefone);

	tamanho1 = strlen(nome);
	tamanho2 = strlen(endereco);
	tamanho3 = strlen(telefone);

	strncat(total, nome, tamanho1);
	strncat(total, endereco, tamanho2);
	strncat(total, telefone, tamanho3);
	strlen(total);

	for (cont = 0; cont <= strlen(total); cont++)
	{
		if (isalpha(total[cont]))
		{
			letras++;	
		}		
	}

	for (cont = 0; cont <= strlen(total); cont++)
	{
		if (isdigit(total[cont]))
		{
			numeros++;	
		}		
	}

printf("Número de letras: %i\n", letras);	
printf("Número de dígitos: %i", numeros);

	return 0;
}