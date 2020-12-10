/*
	QUESTÃO 01: Desenvolver uma função que determine o número de ocorrências de um número inteiro x em um vetor A. 
*/
#include <stdio.h>

int numOcorrencia(int a);
int main()
{
	int x,volta;
	printf("informe x: ");
	scanf("%d",&x);
	volta = numOcorrencia (x);
	printf("Numero de Ocorrencia = %d",volta);
}
int numOcorrencia(int a)
{
	int i,num_ocor,A[10]={0,1,2,3,4,6,7,8,45};
	num_ocor=0;
	for(i=0;i<10;i++)
	{
		if(a==A[i])
		{
			num_ocor++;
		}
	}
	return num_ocor;
}
