/*
QUESTÃO 02:
Desenvolver uma função que, dada uma matriz M15×20, determine se um número X se encontra na linha L da matriz.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarMatriz (int mat[][20]);
void exibirMatriz(int mat[][20]);
int procurarNumero(int linha,int num, int mat[][20]);

int main (){
	int X,L,mat[15][20];
	
	gerarMatriz (mat);
	exibirMatriz(mat);
	printf("Informe X: ");
	scanf("%d",&X);
	printf("Informe L: ");
	scanf("%d",&L);

	if(procurarNumero(L,X,mat) == 0){
		printf("Encontramos o numero.");
	}
	else{
		printf("Nao encontramos o numero.");
	}
	return 0;
}

void gerarMatriz (int mat[][20]){
	srand(time(NULL));
	int i,j,linha=15,coluna=20;
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			mat[i][j] = rand ()%100;
		
		}
	}
}

void exibirMatriz(int mat[][20]){
	int i,j;
	printf("\nMatriz\n");
	for(i=0;i<15;i++){
		for(j=0;j<20;j++){
			printf("| %2d ",mat[i][j]);
		}
		printf("|\n");
	}
	printf("\n\n\n\n");
}

int procurarNumero(int linha,int num, int mat[][20]){
	int i = linha,j;
	while(i==linha){
		for(j=0;j<20;j++){
			if(mat[i][j]==num){
				return 0;
			}
		}
		i++;
	}
	return 1;
}
