#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int remove (int v[],int tam,int *quant,int num);

int main()
{
	int num,retorno,i,quant=0,tam=5, v[tam];
	srand(time(NULL));
	for(i=0;i<quant;i++)
	{
		v[i]= rand() % 50; //preenchendo o vetor
		quant++;
	}
	printf("Exibindo valores do vetor:\n");
	for(i=0;i<quant;i++)
	{
		printf(" %d ",v[i]);
	}
	printf("qual numero voce quer remover?");
	scanf("%d",&num);
	retorno = remove (v,tam,&quant,num);
	printf("%d",retorno);
	/*printf("Exibindo valores do vetor:\n");
	for(i=0;i<quant;i++)
	{
		printf(" %d ",v[i]);
	}*/
}
int remove (int v[],int tam,int *quant,int num)
{
	int i=0,cont=0;
	
	while(i<*quant)
	{
		if(v[i]==num)
		{
			v[i]=v[(*quant)-1];
			(*quant)--;
			cont++;
		}
		else
		{
			i++;
		}
	}
	return cont;
}

