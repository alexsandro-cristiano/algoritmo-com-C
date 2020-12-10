/*Questão 03 [2,0 pontos]:
Desenvolver um programa que calcule o valor
de S na seguinte expressão, onde n é fornecido pelo usuário:
S = 1/n! + 2/(n-1)! + ...+n
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j,n,s;
	s=0;
	printf("Entre com valor de n: ");
	scanf("%d", &n);
	
	for(i=1,j=0;i<=n;i++,j++)
	{
		s+= i/(n-j);
	}
	printf("Soma = %d", s);
}

