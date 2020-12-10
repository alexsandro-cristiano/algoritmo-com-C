/*
Questão 04 [2,5 pontos]:
Na matemática, dois números são chamados de primos
entre si quando o seu único divisor em comum é a
unidade (ou seja, o número 1).
Considerando este conceito, implementar um
programa que, dados dois números inteiros, determine
se são ou não primos entre si.
Nota: devem ser apresentadas três versões do
programa, uma para cada estrutura de repetição
estudada.
*/

#include <stdio.h>
int main()
{
	//declaração de variavel
	int n1,n2,i,j,heroi,ajudante;
	printf("Informe n1: ");
	scanf("%d",&n1);
	printf("Informe n2: ");
	scanf("%d",&n2);
	
	//processamento de dado
	for(i=1,j=1,heroi=0;((i<=n1)&&(j<=n2));i++,j++)
	{
		if((n1%i==0)&&(n2%j==0))
		{
			heroi++;
		}
	}
	if(heroi==1)
	{
		printf("sao primos entre si");
	}
	else
	{
		printf("nao e primo entre si");
	}
}
