
#include <stdio.h>
int main()
{
	int n,i,sub;
	sub=0;
	printf("digite n: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i+=2)
	{
		n-=i;
		sub++;
	}
	printf("raiz quadrada aproximada e = %d ",sub);
}
