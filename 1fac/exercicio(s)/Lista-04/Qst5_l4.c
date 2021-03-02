/*Criar um programa que exiba os N primeiros termos da seguinte série:
1,2,4,8,16,32,...*/
#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int an, a1, i;
	printf("Digite numero de termos: ");
	scanf("%d", &an);
	
	for(i=1, a1=1; i<=an ; i++)
	{
		printf("%d termo e %d\n", i, a1);
		a1*=2;
	}
}
