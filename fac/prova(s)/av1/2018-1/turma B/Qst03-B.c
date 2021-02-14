/*Questão 03 [2,0 pontos]:
Faça um programa que leia um número inteiro n
e determine a quantidade de algarismos existentes em n.*/

#include <stdio.h>
int main()
{
	int quant,n,i;
	quant=0;
	printf("digite valor para n: ");
	scanf("%d",&n);
	while(n!=0)
	{
		n/=10;
		quant++;
	}
	printf("quantidade de algarismo em %d = %d",n,quant);
}
