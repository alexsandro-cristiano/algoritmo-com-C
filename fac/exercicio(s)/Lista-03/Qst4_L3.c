/*QUESTÃO 04: Faça um programa que leia 300 números reais. Ao final, devem ser exibidas as seguintes informações:
a) A quantidade de valores negativos digitados;
b) A média dos valores positivos.*/

//COMANDO PARA CRIAR UMA CONSTANTE
#define Q 5
#include<stdio.h>
int main()
{
	int contn,contp,i;
	float med,s,num;
	i = contn = contp = med = s =0;
	do
	{
		printf("digite um numero: ");
		scanf("%f",&num);
		if(num<0)
		{
			contn++;
		}
		else
		{
			s += num;
			contp++;
			med = s/contp;
		}
		i++;
	}while(i<Q);
	printf("quantidade valores negativo %d\n", contn);
	printf("media positivo %.2f\n", med);
}

