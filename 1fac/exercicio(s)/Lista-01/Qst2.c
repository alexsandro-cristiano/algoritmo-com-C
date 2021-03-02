/*QUESTÃO 02:
Elabore um algoritmo que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:
Categoria 		Faixa de idade
infantil A		0 - 4 anos
infantil B		5 - 7 anos
infantil C		8-10 anos
juvenil A		11-13 anos
juvenil B		14-17 anos
Adulto			18 anos ou mais*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	printf("QUESTAO 02:\n");
	printf("Elabore um algoritmo que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:\n\n");
	printf("Categoria 		Faixa de idade\n\n");
	printf("infantil A		0 - 4 anos\n");
	printf("infantil B		5 - 7 anos\n");
	printf("infantil C		8-10 anos\n");
	printf("juvenil A		11-13 anos\n");
	printf("juvenil B		14-17 anos\n");
	printf("Adulto			18 anos ou mais\n\n");
	//declaração de variaveis
	int idade;
	//entrada de dados
	printf("Digite a idade do Nadador: ");
	scanf("%d", &idade);
	//processando dados
	if(idade <= 4)
	{
		printf("A categoria do nadador informado e INFANTIL A.\n\n");
	}
	else
	{
		if(idade <= 7)
		{
			printf("A categoria do nadador informado e INFANTIL B.\n\n");
		}
		else{
			if(idade <= 10)
			{
				printf("A categoria do nadador informado e INFANTIL C.\n\n");
			}
			else
			{
				if(idade <= 13)
				{
					printf("A categoria do nadador informado e JUVENIL A.\n\n");
				}
				else
				{
					if(idade <= 17)
					{
						printf("A categoria do nadador informado e JUVENIL B.\n\n");
					}
					else{
						printf("A categoria do nadador informado e ADULTO.\n\n");
					}
				}
			}
		}
	}
	
	
	system("pause");
	return (0);
}
