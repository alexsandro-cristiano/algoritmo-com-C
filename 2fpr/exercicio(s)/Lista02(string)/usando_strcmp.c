#include <stdio.h>
#include <string.h>

int main(){
	char nome1[10],nome2[10];
	gets(nome1);
	gets(nome2);
	
	int r = strcmp(nome1,nome2);
	if(r<0){
		printf("1 %s - 2 %s",nome1,nome2);
	}
	else {
		if(r>0){
			printf("1 %s - 2 %s",nome2,nome1);
		}
		else if(r==0){
			printf("%s = %s",nome2,nome1);
		}
	}
}
