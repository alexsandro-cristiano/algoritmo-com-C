/*
	QUESTÃO 04:
Fazer uma função que armazene em um vetor os 50 primeiros termos da seguinte sequência:
S = 1, 2, 4, 7, 11, 16, ...
Nota: observem que a diferença entre o 1º e 2º elementos é igual a 1, entre o 2º e 3º é
igual a 2, entre o 3º e o 4º é igual a 3, e assim sucessivamente.
*/

#include <stdio.h>
//prototipo da função
int seq (int n, int v[]);
//função principal
int main()
{
	int n,i,s[50];
	printf("infome o termo da sequencia: ");
	scanf("%d",&n);
	seq (n,s);
	printf("s = ");
	for(i=0;i<n;i++)
	{
		printf("%d ",s[i]);
	}
}
//funcao completa
int seq (int n, int v[])
{
	int i,j;
	for(i=0,j=1;i<n;i++)
	{
		j+=i;
		v[i]= j;
	}
}
