/*IMC = peso / altura2
Elabore um algoritmo que, dados o peso e a altura de um adulto, determine a sua condicao de acordo com a tabela abaixo:
IMC em adultos 		Condicao
IMC < 18,5			Abaixo do peso
18,5 . IMC < 25,0	Peso ideal
25,0 . IMC < 30,0	Sobrepeso
30,0 . IMC < 35,0	Obesidade grau I
35,0 . IMC < 40,0	Obesidade grau II
IMC . 40,0			Obesidade grau III*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float peso, a, imc;
	
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	
	printf("Digite sua altura: ");
	scanf("%f" , &a);
	
	imc = peso/(a*a);
	
	if (imc < 18.5)
	{
		printf("\nVoce esta abaixo do peso");
	}	
	else
	{
		
		if(imc < 25.0)
		{
			printf("Voce esta com peso ideial");
		}
			else
			{
				
				if(imc < 30.0)
				{
					printf("Voce esta com sobrepeso");
				}
				else
				{
					
					if(imc < 35.0)
					{
						printf("Voce esta com Obesidade grau I");
					}
						else
						{
							if(imc < 40.0)
							{
								printf("Voce esta com Obesidade grau II");
							}
								else
								{
									printf("Voce esta com Obesidade grau III");
								}
						}
				}
			}
	}
}
