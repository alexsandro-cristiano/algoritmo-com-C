
/*Questão 3 - Faça 3 programas (um para cada estrutura de repetição estudada)
que exiba os números no intervalo definido por
[a,b] possuem raiz quadrada exata, onde
a e b são números inteiros fornecidos pelo usuário, sendo a<=b */

//usando o while:
#include <stdio.h>
int main()
{
	int a,b,i,prod;
	printf("digite a: ");
	scanf("%d", &a);
	printf("digite b: ");
	scanf("%d", &b);
	i=0;
	prod = 0;
	while(prod<a)
	{
		prod = i*i;
		i++;
		printf("prod 1 = %d \n i = %d\n",prod,i);
	}
	i--;
	while(prod<=b)
	{
		printf("\n\nraizes %d ",prod);
		i++;
		prod=i*i;
	}
}

//Usando o DO ... While
#include <stdio.h>
int main()
{
	int a,b,i,prod;
	printf("digite a: ");
	scanf("%d", &a);
	printf("digite b: ");
	scanf("%d", &b);
	i= prod = 0;
	do
	{
		if(prod<a)
		{
				do
			{
				prod = i*i;
				i++;
			}while(prod<a);
			i--;
		}
		printf("\n\nraizes %d ",prod);
		i++;
		prod=i*i;
	}while(prod<=b);
}

