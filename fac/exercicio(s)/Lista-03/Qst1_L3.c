/*QUESTÃO 01: Faça um programa que leia um número inteiro positivo N e exiba todos
os múltiplos de Y inferiores a N, onde N e Y são fornecidos pelo usuário.*/

#include <stdio.h>
int main()
{
	int n, y, i;
	printf("digite n: ");
	scanf("%d",&n);
	printf("digite y: ");
	scanf("%d",&y);
	/*for(i=1;i<n;i++)
	{
		if(i%y==0)
		{
			printf("%d\n",i);
		}
	}
	//outra forma:
	for(i=1;i<n;i=i+y)
	{
		printf("%d ",i);
	}
//usando while
	i=1;
	while(i<n)
	{
		if(i%y==0)
		{
			printf("%d\n",i);
		}
		i++;
	}*/
  i=1;
  do
  {
    if(i%y==0)
		{
			printf("%d\n",i);
		}
    i++;
  }while(i<n);
}
