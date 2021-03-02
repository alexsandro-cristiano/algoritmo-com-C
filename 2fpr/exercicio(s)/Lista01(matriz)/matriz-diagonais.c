#include <stdio.h>
#define INDICE 3
/*
	1 0 0
	0 2 0
	0 0 3
*/
void exibir_matriz (int mat[][INDICE]);
void exibir_matriz_principal(int mat[][INDICE]);
void exibir_matriz_secundaria(int mat[][INDICE]);

int main () {
	int i,j, mat[INDICE][INDICE];
	
	for(i=0; i<INDICE; i++){
		for(j=0; j<INDICE; j++){
			if(i==j) {
				mat[i][j] = (j+1);
			}
			else{
				mat[i][j]=0;
			}
		}
	}
	exibir_matriz(mat);
	exibir_matriz_principal(mat);
	exibir_matriz_secundaria(mat);
	
	return 0;
}
void exibir_matriz (int mat[][INDICE]){
	int i,j;
	printf("EXIBINDO MATRIZ\n");
	for(i=0; i<INDICE; i++){
		for(j=0; j<INDICE; j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
}

void exibir_matriz_principal(int mat[][INDICE]) {
	int i,j;
	printf("EXIBINDO MATRIZ PRINCIPAL\n");
	for(i=0; i<INDICE; i++){
		for(j=0; j<INDICE; j++){
			if(i==j) {
				printf("%d ",mat[i][j]);
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n\n");
}

void exibir_matriz_secundaria(int mat[][INDICE]){
	int i,j;
	printf("EXIBINDO MATRIZ SECUNDARIA\n");
	for(i=0; i<INDICE; i++){
		for(j=0; j<INDICE; j++){
			if(i+j==INDICE-1) {
				printf("%d ",mat[i][j]);
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n\n");
}

