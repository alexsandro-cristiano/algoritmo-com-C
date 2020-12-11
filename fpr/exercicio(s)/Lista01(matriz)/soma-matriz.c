#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int n,a,i,j;
	scanf("%d %d",&n, &a);
	int A[n][n],B[n][n],C[n][n];
	
	/*Erro(s) RESOLVIDO: 
		pegar o intervalo de valores - tem que ser entrada do usuario
		o tam da matriz tbm é entrada do usuario
	*/
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			A[i][j] = rand () %a;
			B[i][j] = rand () %a;
		}
	}
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			C[i][j] = A[i][j] + B[i][j];
		}
	}
	
	printf("Matriz A:");
	for(i=0;i<n;i++) {
		printf("\n");
		for(j=0;j<n;j++) {
			printf("%.4d ",A[i][j]);
		}
	}
	
	printf("\n\nMatriz B:");
	for(i=0;i<n;i++) {
		printf("\n");
		for(j=0;j<n;j++) {
			printf("%.4d ",B[i][j]);
		}
	}
	
	printf("\n\nMatriz C:");
	for(i=0;i<n;i++) {
		printf("\n");
		for(j=0;j<n;j++) {
			printf("%.4d ",C[i][j]);
		}
	}
}
