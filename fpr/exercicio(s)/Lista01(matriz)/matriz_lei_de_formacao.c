/*
Gerar e imprimir uma matriz de tamanho 10 x 10, onde seus elementos sao da forma: ˜
A[i][j] = 2i + 7j - 2 se i < j;
A[i][j] = 3i2 - 1 se i = j;
A[i][j] = 4i3 - 5j2 + 1 se i > j.

*/
#include <stdio.h>
#include <math.h>

void preencher_matriz(int mat[][10]);
void exibir_matriz(int mat[][10]);

int main(){
	int mat[10][10];
	
	preencher_matriz(mat);
	exibir_matriz(mat);
	
	return 0;
}

void preencher_matriz(int mat[][10]) {
	int i,j;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(i<j){
				mat[i][j] = ((2*i)+(7*j)-2);
			} else if(i==j){
				mat[i][j] = ((3*((int)pow(i,2)))-1);
			} else if(i>j){
				mat[i][j] = ( ( 4 * ((int)pow(i,3)) ) -  ( 5 * ((int)pow(j,2)) ) +1);
			}
		}
	}
}
void exibir_matriz(int mat[][10]) {
	int i,j;
	printf("EXIBINDO MATRIZ\n");
	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			printf("%.4d ",mat[i][j]);
		}
		printf("\n");
	}
}
