#include <stdio.h>
#include <stdlib.h>

void cabeca ()
{
	printf("\tQUESTAO 03:\n");
	printf("\tDesenvolver uma funcao que calcule o n-esimo\n");
	printf("\ttermo da sequencia de Fibonacci.\n");
}
int seqFib (int n)
{
	//declaração de variaveis
	int i,x,y,r;
	//inicializando as variaveis
	x=0;
	y=i=1;
	//processamento de dados
	if(n>1)
	{	
		while(i<n)
		{
			r = x+y;
			x=y;
			y=r;
			i++;
		}
	}
	else
	{
		return y;
	}
	return r;
}

int main()
{
	//declaração de variaveis
	int n,solucao;
	//entrada de dados
	cabeca();
	printf("informe valor de n: ");
	scanf("%d",&n);
	solucao = seqFib(n);
	printf("Fib = %d\n",solucao);
}
