#include <stdio.h>
/*
	Para saber o MDC

void cabe ()
{
	printf("\tQUESTAO 04:\n");
	printf("Fazer uma função que calcule o MDC (máximo divisor comum) entre dois numeros.\n");
}
int mdc (int n1,int n2)
{
	//descobre qual é o menor porq preciso caminhar ate o menor deles
	if(n1<n2)
	{
		menor = n1;
	}
	else
	{
		menor=n2;
	}
	//fazendo a caminhada
	for(i=1;i<=menor;i++)
	{
		//verificando se numero é divisor de n1 e n2
		if((n1%i==0)&&(n2%i==0))
		{
		 //resto recebe o maior divisor entre os 2 numeros
			resto = i;
		}
	}
}*/

	//Outra maneira de fazer Maneira do Leo
	int menor(int a,int b)
	{
		return (a<b)?a:b; //operador ternario
	}
	
	int mdc(int n1,int n2)
	{
		int i,m=menor(n1,n2); // 'm' chama a função e recebe o menor entre os numeros
		//Fazendo um for descrecente para agilizar o programa
		for(i=m;i>=1;i--)
		{
			if((n1%i==0)&&(n2%i==0))
			{
				//o return finaliza a função, independente se ainda tem coisa para ser processada.
				return i;
			}
		}
	}

int main()
{
	int n1,n2,resultado;
		
	printf("Entre com n1: ");
	scanf("%d",&n1);
	printf("Entre com n2: ");
	scanf("%d",&n2);
	resultado = mdc (n1,n2);
	printf("MDC de %d e %d = %d",n1,n2,resultado);
}
