/*Criar um programa que exiba os N primeiros termos da seguinte série:
1,2,8,64,1024,...*/
#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int an, a1, i, x=1;
	printf("Digite numero de termos: ");
	scanf("%d", &an);
	
	for(i=1, a1=1; i<=an ; i++)
	{
		printf("%d termo e %d\n", i, x);
		a1*=2;
		x=x*a1;
	}
}
