/*Fazer um programa que exiba todos os divisores de um número fornecido pelo usuário.*/
/*
usar o MDC
1,2,5,10 - de 10
1 - criar variavel x e guarda a informação do usuario
2 - vefiricar x / i = 0
3 - se resto 0 exibe
4 - se nao joga fora

*/

#include <stdio.h>
#include <stdlib.h>
int main ()
{
	//declarando variavel
	int x, i;
	
	//corpo do programa
	printf("Digite um valor para x: ");
	scanf("%d", & x);
	
	for (i=1; i<=x; i++)
	{
		if(x%i == 0)
		{
			printf("Os divisores de %d, sao %d\n", x,i);
		}
	}
}
