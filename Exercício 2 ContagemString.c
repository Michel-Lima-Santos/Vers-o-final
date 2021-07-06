#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL,"Portuguese");

	char nome[40], endereco[30], telefone[12], total[82];
	int cont = 0, letras = 0, numeros = 0;

	printf("Digite o nome da pessoa:");
	fgets(nome, 40, stdin);

	printf("Digite o endereço:");
	fgets(endereco, 30, stdin);

	printf("Digite o telefone para contato:");
	fgets(telefone, 12, stdin);
	setbuf(stdin, NULL);

	strncat(total, nome, strlen(nome));
	strncat(total, endereco, strlen(endereco));
	strncat(total, telefone, strlen(telefone));
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

printf("\nNúmero de letras:%i\n", letras);	
printf("Número de dígitos:%i", numeros);

	return 0;
}