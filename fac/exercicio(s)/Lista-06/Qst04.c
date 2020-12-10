#include <stdio.h>

int main() {
	int n,i,pri;
	pri = 0;
	printf("digite n: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			pri++;
		}
	}
	
	if(pri==2)
	{
		printf("%d e primo.", n);
	}
	else
	{
		printf("%d nao e primo.", n);
	}
}
