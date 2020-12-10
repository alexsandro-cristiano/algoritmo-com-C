/*
Escrever um algoritmo que, dados um número inteiro i e três valores a, b e c,
apresente os 3 números na ordem definida por i, como descrito abaixo:
a) i = 1: os três valores em ordem crescente;
b) i = 2: os três valores em ordem decrescente;
c) i = 3: o maior valor deve ser apresentado no meio dos outros.
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	//declaração de variavel
	int maior, menor, meio, a, b, c, i;
	
	//corpo do programa
	//leitura de dados
	printf("1: os três valores em ordem crescente;\n2: os três valores em ordem decrescente;\n3: o maior valor deve ser apresentado no meio dos outros\n");
	scanf("%d", &i);
	printf("Digite os valores de a: ");
	scanf("%d", &a);
	printf("\nDigite os valores de b: ");
	scanf("%d", &b);
	printf("\nDigite os valores de c: ");
	scanf("%d", &c);	
	
	if ((a>=b)&&(a>=c))
	{
		maior = a;
		if(b>=c)
		{
			meio = b; menor = c;
		}
		else
		{
			meio = c; menor = b;
		}
	}
	else
	{
		if (b>=c)
		{
			maior = b;
			if (a>= c)
			{
				meio = a; menor = c;
				}
				else
				{
					meio = c; menor = a;
				}
 		}
		else
		{
			if (c>=a)
			{
				maior = c;
				if (b>=a)
				{
					meio = b; menor = a;
				}
				else
				{
					meio = a; menor = b;
				}			
			}
		}
	}	
	
	//fazendo o inteiro i
	if (i == 1)
	{
		printf ("\n%d %d %d", menor, meio, maior);
	}
	if (i == 2)
	{
		printf ("\n%d %d %d", maior, meio, menor);
	}
	if (i == 3)
	{
		printf ("\n%d %d %d", meio, maior, menor);
	}
}
