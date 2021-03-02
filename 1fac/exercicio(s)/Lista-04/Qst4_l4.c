/*Implementar um programa que exiba os N primeiros termos de uma PA (Progressão Aritmética) com primeiro termo a1 e razão r.*/

/*
n primeiro termos = numero definido pelo usuario
for i<= n = faça
a1 nao muda, r nao muda, n definido pelo usuario
formula geral de uma P.A = an = a1 + (n-1).r
*/
#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int i, a1, r, n, an;
	printf("digite o primeiro termo: ");
	scanf("%d", &a1);
	printf("digite o numero de termos: ");
	scanf("%d", &n);
	printf("digite a razao: ");
	scanf("%d", &r);
	
	for(i=1 ; i<=n; i++)
	{
		
		an = a1+((i-1)*r);
		printf("%d\n", an);
	}
		
}
