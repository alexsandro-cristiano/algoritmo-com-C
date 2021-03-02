/*
	QUESTÃO 05:
Elaborar uma função que, dado um conjunto de 300 valores inteiros, distribua-os em
2 vetores conforme forem pares ou ímpares.
*/

#include <stdio.h>

//Prototipo da Funçao:
int separa(int conjunto[],int p[],int imp[], int tam);

int main()
{
	int i,tam = 10,contp=0,contimp=0,con[tam],par[tam],impar[tam];
	
	for(i=0;i<tam;i++)
	{
		printf("Informe um Numero Inteiro Positivo: ");
		scanf("%d", &con[i]);
	}
	separa(con,par,impar,tam);
}

int separa(int conjunto[],int p[],int imp[], int tam)
{
		int i,contp,contimp;
		contp=contimp=0;
		
	for(i=0;i<tam;i++)
	{
		if(conjunto[i]%2==0)
		{
			p[contp] = conjunto[i];
			contp++;
		}
		else
		{
			imp[contimp] = conjunto[i]; 
			contimp++;
		}
	}
	printf("Vetor conjunto:\n");
	for(i=0;i<tam;i++)
	{
		printf("%d ",conjunto[i]);
	}
	printf("\nVetor conjunto Par:\n");
	for(i=0;i<contp;i++)
	{
		printf("%d ",p[i]);
	}
	printf("\nVetor conjunto Impar:\n");
	for(i=0;i<contimp;i++)
	{
		printf("%d ",imp[i]);
	}
}
