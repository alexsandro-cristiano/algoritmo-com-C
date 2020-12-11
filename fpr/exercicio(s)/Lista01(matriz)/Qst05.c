#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarMatriz (int lin, int col, int mat[lin][col]){
	srand(time(NULL));
	int i,j;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			mat[i][j] = rand ()% 100;
		
		}
	}
	exibirMatriz(lin,col,mat);
}

void gerarVetor(int coluna,int linha,int mat[][coluna]){
	int soma=0,i,j,vet[coluna];
	
	for(j=0;j<coluna;j++){
		for(i=0;i<linha;i++){
			soma = soma + mat[i][j];
		}
		vet[j] = soma;
		soma=0;
	}
	printf("\n\nVetor: ");
	for(j=0;j<coluna;j++){
		printf(" %d ",vet[j]);
	}
}
void exibirMatriz(int lin,int col, int mat[][col]){
	int i,j;
	printf("\tMatriz\n");
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			printf("| %2d ",mat[i][j]);
		}
		printf("|\n");
	}
}

int main(){
	int linha=4,coluna=3;
	int mat[linha][coluna],vetor[coluna];
	
	gerarMatriz (linha,coluna,mat);
	gerarVetor(coluna,linha,mat);
	
	getchar();
	return 0;	
}
