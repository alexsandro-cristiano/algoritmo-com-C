#include <stdio.h>
#include <stdlib.h>

float temp (float c)
{
	return c*1.8+32;
}
int main ()
{
	int i;
	for(i=0;i<=100;i++)
	{
		printf("%d C\t%.1f\n",i,temp(i));
	}
}
