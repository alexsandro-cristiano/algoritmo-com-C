/*QUESTÃO 04:
Fazer uma função que, dada uma matriz M6×6, determine se ela é simétrica.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void gerarMatriz (int lin, int col, int mat[lin][col]);
void gerarMatrizTransposta(int lin,int col,int mat[][col],int matT[][col]);
void simetrica (int lin,int col,int mat[][col], int matT[][col]);
void exibirMatriz(int lin,int col, int mat[][col],int matT[][col]);

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	int linha=6,coluna=6;
	int mat[linha][coluna],matT[coluna][linha];
	
	gerarMatriz (linha,coluna,mat);
	gerarMatrizTransposta(linha,coluna,mat,matT);
	simetrica (linha,coluna,mat,matT);
}

void gerarMatriz (int lin, int col, int mat[lin][col]) {
	srand(time(NULL));
	int i,j;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			mat[i][j] = rand ()% 100;
		
		}
	}
}

void gerarMatrizTransposta(int lin,int col,int mat[][col],int matT[][col]) {
	int i,j;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			matT[j][i] = mat[i][j];
		}
	}
}

void simetrica (int lin,int col,int mat[][col], int matT[][col]) {
	exibirMatriz(lin,col,mat,matT);
	printf("\n\n\n");
	
	//comparar linha
	//comparar coluna
	int i,j,igual_lin=0,igual_col=0;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			if(mat[i][j] == matT[i][j]){
				igual_lin++;
			}
		}
	}
	for(j=0;j<col;j++){
		for(i=0;i<lin;i++){
			if(mat[i][j]==matT[i][j]){
				igual_col++;
			}
		}
	}
	printf("%d %d",igual_lin,igual_col);
	//se linha e coluna forem iguais e simetrica - se nao
	if(igual_lin==igual_col){
		printf("é simétrico\n");
	}
	else{
		printf("não e simétrico\n");
	}
}

void exibirMatriz(int lin,int col, int mat[][col],int matT[][col]) {
	int i,j;
	printf("\nMatriz\n");
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			printf("| %3d ",mat[i][j]);
		}
		printf("|\n");
	}
	
	printf("\nMatriz Transposta\n");
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			printf("| %3d ",mat[j][i]);
		}
		printf("|\n");
	}
}
