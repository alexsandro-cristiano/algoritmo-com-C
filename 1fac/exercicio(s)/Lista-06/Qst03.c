#include <stdio.h>

int main() {
	int i,j;
	
	for(i=1;i<10;i++){
		for(j=0;j<=10;j++){
			printf("%d x %.2d = %.2d\n",i,j,(i*j));
		}
		printf("\n");
	}
}
