#include<stdio.h>
 //Outra forma usando o while
	//Ele só vai fazer o progrma quando o usuario digitar um num menor q 20
	int main()
	{
		int n,u,d,a;
		printf("digite um numero: ");
		scanf("%d",&n);
		while(n>=20)
		{	
			printf("erro, digite um numero menor que 20");
			scanf("%d",&n);
		}
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
