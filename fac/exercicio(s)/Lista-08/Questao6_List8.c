/*
	QUESTÃO 06:
Faça uma função que, dado um vetor de reais, altere todas as ocorrências do número A pelo número B.
*/

#include <stdio.h>
#include <stdlib.h> // tem a função srand rand
#include <time.h>

int main()
{
	srand(time(NULL));
	int i, numA,numB;
	float vetR[5];
	
	for(i=0;i<5;i++)
	{
		vetR[i] = rand()% 100;
	}
	for(i=0;i<5;i++)
	{
		printf(" %d ",vetR[i]);
	}
	printf("\ninforme numero para ser trocado: ");
	scanf("%d",&numA);
	printf("\ninforme numero que entra no lugar: ");
	scanf("%d",&numB);
}
