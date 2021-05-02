#include <stdio.h>

 // 20                   255.255.255.240  1048576            14           /28
  
int main () {
	
	int n=1048576;
	int i,j;
	
	printf("Faixas de SubRede\n");
	int c=0;
	for(i=0;i<n;i++) {
		printf("Rede %d: ", i+1);
		for(j=0;j<16;j++){
			printf("%d ",c);
			c++;
		}
		printf("\n");
	}
}
