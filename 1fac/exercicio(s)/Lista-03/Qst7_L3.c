
/*QUESTÃO 07: Uma determinada empresa fez uma pesquisa de mercado para saber se as pessoas gostaram ou não de um novo
produto que foi lançado.
Para cada pessoa entrevistada foram coletados os seguintes dados: sexo (M ou F) e resposta (G [Gostou] ou N [Não Gostou]).
Sabendo-se que foram entrevistadas X pessoas, faça um programa que forneça:
a) Número de pessoas que gostaram do produto;
b) Número de pessoas que não gostaram do produto;
c) Informação dizendo em que sexo o produto teve uma melhor aceitação.*/

#include <stdio.h>
int main()
{
	char sexo,resposta;
	int rg =0, rn = 0,x,sm=0,sf=0;
  x=0;
	while(x<5)
	{
		printf("Qual seu sexo: ");
		scanf(" %c",&sexo);
		printf("Digite (G [Gostou] ou N [Não Gostou]): ");
		scanf(" %c",&resposta);
		if((sexo=='m')||(sexo=='M'))
		{
			sm++;
			if((resposta == 'g')||(resposta == 'G'))
			{
				rg++;
				
			}
			else
			{
				rn++;
			}
				
		}
		else
		{
			sf++;
			if((resposta == 'g')||(resposta == 'G'))
				{
					rg++;
				
				}
				else
					{
						rn++;
					}
		}
		x++;
	}
	if(sm>sf)
	{
		printf("sexo maior aceitação Masculino\n");
	}
	else
	{
		printf("sexo maior aceitação Feminino\n");
	}
	printf("quantidade de pessoas que gostaram %d\n",rg);
	printf("quantidade de pessoas que nao gostaram %d\n",rn);
}

