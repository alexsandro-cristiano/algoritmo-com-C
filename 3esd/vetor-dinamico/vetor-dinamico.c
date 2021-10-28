#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define true 1
#define false 0

typedef struct dados {
	int numero;
} TDados;

/*
	Variaveis globais
*/
int TAM;

// prototipos das funções
int criarVetor(int *TAM);
int verificarEspacoLivre(int TAM, int qtdElemento);
void adicionarElemento(TDados *dados, int elemento, int *qtdElemento);



int main() {
	setlocale(LC_ALL, "Portuguese");

	
	TAM = 2;
	TDados dados[TAM];
	
	int qtdElemento = 0;
	int opcao, elemento;

	do {
		printf("---MENU---\n1 - Adicionar\n2 - Inserir\n3 - Buscar Todos\n4 - Acessar\n5 - Deletar\n 0 - Encerrar\nEscolha: ");
		scanf("%d",&opcao);
	
		switch(opcao) {
			case 1:
				printf("Informe um número: ");
				scanf("%d", &elemento);

				if(verificarEspacoLivre(TAM, qtdElemento)) {
					adicionarElemento(dados,elemento, &qtdElemento);
				}
				else {
					printf("QUANTIDADE DE ELEMENTO == TAM\n%d - %d", qtdElemento,TAM);
				}
				break;
			case 2:
				printf("Caso %d\n", opcao);
				getchar();
				break;
			case 3:
				
				break;
			case 4:
				printf("Caso %d\n", opcao);
				break;
			case 5:
				printf("Caso %d\n", opcao);
				break;
			case 0:
				printf("Caso %d\n", opcao);
				break;
			default:
				printf("Opção Inválida!\n");
		}
	} while(opcao!=0);

	return 0;
}

int criarVetor(int *TAM) {
	return (*TAM) *= 2;
//	char *matriz = (char*) malloc(strlen(vet) * sizeof(char));

}

int verificarEspacoLivre(int TAM, int qtdElemento) {
	return (qtdElemento < TAM)? true : false;
}

void adicionarElemento(TDados *dados, int elemento, int *qtdElemento) {
	dados[*qtdElemento].numero = elemento;
	(*qtdElemento)++;
}

