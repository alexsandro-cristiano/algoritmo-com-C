
/*Questão 2 - Somatorio de 2 elevado a i / i fatorial*/

#include <stdio.h>
int main()
{
	//declarando as variaveis
	float i,j,soma,mult,n;
	//inicializando as variaveis
	soma = 0;
	mult = 1;
	//entrado com os dados
	printf("entre com n: ");
	scanf("%f",&n);
	//processando dados
	for(i=1,j=2;i<=n;i*=2,j++)
	{
		soma+=(i/(mult*=j));
	}
	//saida de dados
	printf("soma = %.2f",soma);
}

