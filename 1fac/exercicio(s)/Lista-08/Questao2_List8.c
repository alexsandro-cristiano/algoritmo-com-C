/*
	QUESTÃO 02: Implementar uma função que, dado um vetor de reais,
	troque o 1? e o 2? elementos, em seguida o 3? e o 4? elementos
	e assim sucessivamente, até se chegar ao final do vetor.
*/

#include <stdio.h>
float troca (float v[],int tam)
{
	int i;
	float aju;
	for(i=0;i<6;i+=2)
	{
		aju = v[i];
		v[i]=v[i+1];
		v[i+1]=aju;
	}
	
}
int main()
{
	int i,tam=6;
	float retorno, vet[tam];
	for(i=0;i<6;i++)
	{
		printf("Informe um numero: ");
		scanf("%f",&vet[i]);
	}
	troca(vet,tam);
	printf("\nApos a funcao:\n");
	for(i=0;i<6;i+=2)
	{
		printf("v[%d] = %.1f\n",i,vet[i]);
		printf("v[%d] = %.1f\n\n",i+1,vet[i+1]);
	}
}
