/*Questão 04 [2,0 pontos]:
Faça um programa que leia dois números inteiros primeiroNumero e segundoNumero e determine a
quantidade de algarismoarismos que os números têm em comum.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int primeiroNumero,segundoNumero,algarismo=0,algar1,algar2,i,j;
	
	printf("Digite o primeiro numero: ");
	scanf("%d",&primeiroNumero);
	printf("Digite o segundo numero: ");
	scanf("%d",&segundoNumero);

	for(i=primeiroNumero;i!=0;i/=10)
	{
		algar1 = i%10;
		for(j=segundoNumero;j!=0;j/=10)
		{
			algar2 = j%10;
			if(algar1==algar2)
			{
				printf("o algarismoarismo eh o:%d\n",algar2);
				algarismo++;
			}
		}
	}
	printf("quantidade de algarismoarismo em comum = %d",algarismo);
}

