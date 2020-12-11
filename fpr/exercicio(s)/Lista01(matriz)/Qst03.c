/*
QUESTAO 03:
Desenvolver uma funcao que gere a seguinte matriz M5„e5:
1	2	3	4	5
2	3	4	5	6
3	4	5	6	7
4	5	6	7	8
5	6	7	8	9
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarMatriz (int linha,int coluna,int mat[][coluna]);
void exibirMatriz(int linha,int coluna, int mat[][coluna]);

int main() {
	int lin=5,col=5;
	int mat[lin][col];
	
	gerarMatriz (lin,col,mat);
	system("pause");
	return 0;
}

void gerarMatriz (int linha,int coluna,int mat[][coluna]) {
	int i,j,numero;
	
	for(i=0;i<linha;i++){
		numero = i+1;
		for(j=0;j<coluna;j++){
			mat[i][j] = numero;
			numero++;	
		}
	}
	exibirMatriz(linha,coluna,mat);
}

void exibirMatriz(int linha,int coluna, int mat[][coluna]) {
	int i,j;
	printf("\n\tMatriz\n");
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			printf("| %1d ",mat[i][j]);
		}
		printf("|\n");
	}
}

