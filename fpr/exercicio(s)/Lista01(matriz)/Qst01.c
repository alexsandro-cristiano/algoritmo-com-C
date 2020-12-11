/*
QUESTÃO 01:
Faça um função que, dada uma matriz M8×5 de reais, gere a matriz Mt, sua transposta.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarMatriz (int mat[8][5]){
	srand(time(NULL));
	int i,j;
	for(i=0;i<8;i++){
		for(j=0;j<5;j++){
			mat[i][j] = rand ()%500;
		
		}
	}
}

void gerarMatrizTransposta(int mat[][5],int matT[][8]){
	int i,j;
	for(i=0;i<8;i++){
		for(j=0;j<5;j++){
			matT[j][i] = mat[i][j];
		}
	}
}

void exibirMatriz(int mat[][5],int matT[][8]){
	int i,j;
	printf("\n\tMatriz\n");
	for(i=0;i<8;i++){
		for(j=0;j<5;j++){
			printf("| %3d ",mat[i][j]);
		}
		printf("|\n");
	}
	
	printf("\n\tMatriz Transposta\n");
	for(i=0;i<5;i++){
		for(j=0;j<8;j++){
			printf("| %3d ",mat[j][i]);
		}
		printf("|\n");
	}
}

int main(){
	int linha=8,coluna=5;
	int mat[linha][coluna],matT[coluna][linha];
	
	gerarMatriz (mat);
	gerarMatrizTransposta(mat,matT);
	exibirMatriz(mat,matT);
}
