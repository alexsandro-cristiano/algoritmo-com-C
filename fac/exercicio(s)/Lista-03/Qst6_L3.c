
/*QUESTÃO 06: Faça um programa que leia um número N inteiro, menor do que 20 (se for maior ou igual a 20,
o programa deve exibir uma mensagem de erro).
Após isso, o programa deve imprimir os números no intervalo de 1 a 99 cujos algarismos somem N.
01
02
03
04
05
06
07
08
09
10
11

*/

#include<stdio.h>

int main ()
{
	//declarando variavel
	int i, n, D, U;
	//corpo do programa
	printf("Digite um numero para N ");
	scanf ("%d",&n);
	
	if (n >= 20)
	{
		printf("\nO numero que voce digitou nao pode ser usado");
	}
	else
	{
		for (i = 1; i<= 99; i++)
		{
			D = i/10;
			U = i%10;
			if(D+U == n)
				{
					printf("%d\n", i);
				}
		}
		
	}
}

