#include<stdio.h>
int main()
{
	int n,u,d,a;
	printf("entre com n");
	scanf("%d",&n);
	
	
	if(n<20)
	{
		/* com erro
		for(u=0,d=0;u<=9,d<=9;u++,d++) // posso utilizar 2 for, 1 para dezena e 1 para unidade
		{
			a=u+d; //não precisa da variavel a
			if(n == a) // posso fazer a comparação aqui dentro ->(d+u == a)
			{
				printf("%d",a);//nao posso exibir a, pq a ja é a soma das variaveis
			}
		}  com erro*/
		
		for(d=0;d <=9;d++)
		{
			for(u=0;u<=9;u++)
			{
				if(d+u == n)
				{
					printf("%d%d\n",d,u);
				}
			}
		}
	}
	else
	{
		printf("erro");
	}
}

