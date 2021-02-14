/*
	Questão 03 [2,5 pontos]:
Desenvolver um programa que leia dois números
inteiros n1 e n2 e determine se n2 consiste em n1 com
seus algarismos embaralhados.
Nota: considerar que não existem algarismos repetidos
no mesmo número.
*/

#include <stdio.h>
int main()
{
	//declaração de variavel
	int n1,n2,i,j,heroi,ajudante;
	printf("Informe n1: ");
	scanf("%d",&n1);
	printf("Informe n2: ");
	scanf("%d",&n2);

	//processamento de dado
	for(i=n1;i!=0;i/=10)
	{
		heroi=i%10;
		printf("\n");
		for(j=n2;j!=0;j/=10)
		{
			ajudante = j%10;
			if(heroi==ajudante)
			{
				printf("n1=%d | n2=%d\n",heroi,ajudante);
				printf("__________________");
			}
		}
		printf("\n\n");
	}
}
