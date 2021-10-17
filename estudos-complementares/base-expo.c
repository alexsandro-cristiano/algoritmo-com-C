#include<stdio.h>
#include<stdbool.h>

int num_elevado(int base, int exponte) {
	int i, soma=1;
	for(i=0;i<exponte;i++){
		soma*=base;
	}
	return soma;
}

int main(){
	int n1 = 2, n2 = 0;
	printf("base = %d, elevado a %d = %d", n1,n2,num_elevado(n1,n2));
}
