/*	QUESTÃO 03:
Pede-se a implementação de uma função que, dado um vetor contendo números reais,
determine se o mesmo encontra-se ordenado de forma crescente.
*/

#include <stdio.h>
float crescente (float v[],int tam);

int main()
{
	int tam,i;
	float vet[tam];
	
	printf("Informe o tamanho do vetor: ");
	scanf("%d",&tam);
	for(i=0;i<tam;i++)
	{
		printf("Informe um valor: ");
		scanf("%f",&vet[i]);
	}
	crescente (vet,tam);
	
}
float crescente (float v[],int tam)
{
	int i,o=0;
	for(i=1;i<tam;i++)
	{
		if(v[i]>v[i+1])
		{
			o++;
		}
	}
	if(o==tam)
	{
		printf("e crescente");
	}
	return 0;
}
