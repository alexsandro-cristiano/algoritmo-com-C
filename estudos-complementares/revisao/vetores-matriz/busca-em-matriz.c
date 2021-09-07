/*
Leia uma matriz 5 x 5. Leia tambem um valor ´ X. O programa devera fazer uma busca ´
desse valor na matriz e, ao final, escrever a localizac¸ao (linha e coluna) ou uma mensa- ˜
gem de “nao encontrado”.
*/

#include <stdio.h>

#define CAP 5
#define true 1
#define false 0

int buscarValor(int mat[][CAP], int x,int *lin, int *col);
void preencherMatriz(int mat[][CAP]);

int main() {
	int mat[CAP][CAP];
	int X, linha=0,coluna=0;

	preencherMatriz(mat);

	printf("Informe um valor: ");
	scanf("%d", &X);

	if(buscarValor(mat,X,&linha,&coluna) == true) {
		printf("Linha [%d]; Coluna [%d]", linha,coluna);
	} else {
		printf("nao encontrado");
	}

}

int buscarValor(int mat[][CAP], int x,int *lin, int *col) {
	int i,j;

	for(i=0; i<CAP; i++) {
		for(j=0; j<CAP; j++) {
			if(mat[i][j] == x) {
				*lin = i;
				*col = j;
				return true;
			}
		}
	}
	return false;
}

void preencherMatriz(int mat[][CAP]) {
	int i,j;
	for(i=0; i<CAP; i++) {
		for(j=0; j<CAP; j++) {
			scanf("%d", &mat[i][j]);
		}
	}
}
