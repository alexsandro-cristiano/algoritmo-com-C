#include <stdio.h>
#include <stdlib.h>

void multi (int a,int b,int n)
{
	int i;
	for(i=a;i<=b;i++)
	{
		if(i%n==0)
		{
			printf("multiplos = %d\n",i);
		}
	}
}
int main ()
{
	int a,b,n;
	printf("informe a: ");
	scanf("%d",&a);
	printf("informe b: ");
	scanf("%d",&b);
	printf("informe n: ");
	scanf("%d",&n);
	
	multi (a,b,n);
}
