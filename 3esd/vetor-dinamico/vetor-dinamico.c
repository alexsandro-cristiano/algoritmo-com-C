#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

typedef struct dados {
	int numero;
}TDados;

/*
	Variaveis globais
*/
int tamanho = 10;

/*
CRIAR VETOR:
		Parametro = tamanhoVetor 
		Retorno vazio
		- dupicar o tamanho original do vetor
		- alocar memoria para um novo vetor
		- retornar um vetor
*/
int criarVetor(int *tamanho);
int adicionarElemento(TDados *dados, int tamanho, int elemento, int *qtdElemento);


int main(){
	int qtdElemento = 0;
	TDados dados[tamanho];
	
	int i,k=1;
	
	printf("Inicio do programa\n exibindo elementos do veotor\n");
	for(i=0;i<tamanho; i++) {
		printf("%d\n", dados[i].numero);
	}
	
	
	for(i=0;i<tamanho; i++) {
		k*=2;
		adicionarElemento(dados, tamanho,k, &qtdElemento);
	}
	printf("\nFim do for, elementos inseridos\n\n Apresentando elementos\n");
	
	for(i=0;i<tamanho; i++) {
		printf("%d\n", dados[i].numero);
	}
	
	return 0;
}

int criarVetor(int *tamanho) {
	return (*tamanho) *= 2;
//	char *matriz = (char*) malloc(strlen(vet) * sizeof(char));
	
}

int adicionarElemento(TDados *dados, int tamanho, int elemento, int *qtdElemento) {
	static int v=1;
	int ind = *qtdElemento;
	printf("\nFuncao adicionar elemento %d\n", v);
	printf("---\n DADOS DE ENTRADA---\n TAM = %d\nELEM = %d\n QtdEleme = %d\n",tamanho, elemento,*qtdElemento );

	dados[ind].numero = elemento;

	(*qtdElemento)++;
	v++;
	return true;
}


