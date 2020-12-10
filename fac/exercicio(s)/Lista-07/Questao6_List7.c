#include <stdio.h>
#include <stdlib.h>

void fun (int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i!=j)
			{
				printf("(%d,%d)",i,j);
			}
		}
		printf("\n");
	}
}
int main ()
{
	int n;
	
	printf("informe n: ");
	scanf("%d",&n);
	
	fun(n);
}
