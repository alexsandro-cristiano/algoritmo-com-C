#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>

#define TAM 10

typedef struct no {
	int elemento;
	struct no *lista;
}Tno;

//prototipo das funções
bool acessar_arquivo(char nome_do_arquivo[], int *n, FILE *fp);
bool inserir_dado(int dado,int ind,Tno *axu, Tno *vetor_principal);
bool e_divisor(int x, int y);
void ler_conteudo(char nome_do_arquivo[], int dados[], FILE *fp);
void iniciar_lista(Tno *vetor_principal);
void exibir(Tno *vetor_principal);

int main() {
	setlocale(LC_ALL, "Portuguese");
//PARTE 1 - LENDO ARQUIVO
	int n=0;
	char nome_do_arquivo[50];
	FILE *fp;
	
	printf("Entre com nome do arquivo com extenção: ");
	gets(nome_do_arquivo);
	
	if(!acessar_arquivo(nome_do_arquivo,&n,fp)) {
		printf("Não foi possivel abrir o arquivo: %s\n\nPressione qualquer tecla para continuar...",nome_do_arquivo);
		getchar();
		exit(0); //comando para finalizar o programa
	}
	int dados_do_arquivo[n];
	ler_conteudo(nome_do_arquivo, dados_do_arquivo, fp);
//PARTE 2 - TRABALHANDO COM A LISTA
	Tno vetor_principal[TAM];
	iniciar_lista(vetor_principal);	
		
	int i,indice,divisores;
	for(i=0;i<n;i++) {
		Tno *aux = NULL;
		divisores=0;
		for(indice=1; indice<TAM; indice++)
		{
			if(e_divisor(dados_do_arquivo[i], indice)) {
				if(inserir_dado(dados_do_arquivo[i], indice, aux, vetor_principal)) {
					divisores++;
				}
			}
		}
		if(divisores<=1){
			indice=0;
			inserir_dado(dados_do_arquivo[i], indice, aux, vetor_principal);
		}
		exibir(vetor_principal);
	}	
	return 0;
}

//Funções
bool acessar_arquivo(char nome_do_arquivo[], int *n, FILE *fp) {
	fp = fopen(nome_do_arquivo,"r");
	if(fp == NULL) {
		return false;
	}
	else {
		fscanf(fp,"%d",&*n);
		return true;
	}
}

void ler_conteudo(char nome_do_arquivo[], int dados[], FILE *fp) {
	fp = fopen(nome_do_arquivo,"r");
	int i,n;
	fscanf(fp,"%d",&n);
	for(i=0; i<n; i++) {
		fscanf(fp,"%d",&dados[i]);
	}
	fclose(fp);
}

bool e_divisor(int x, int y) {
	return (x%y==0)? true:false;
}

bool inserir_dado(int dado,int ind,Tno *aux, Tno *vetor_principal) {
	aux = malloc(sizeof(Tno));
	if(aux==NULL){
		return false;
	}
	else{
		aux->elemento = dado;
		vetor_principal[ind].elemento++; // quantidade de elementos no vetor
		aux->lista = vetor_principal[ind].lista;
		vetor_principal[ind].lista = aux;
		return true;
	}
}

void iniciar_lista(Tno *vetor_principal) {
	int i;
	for(i=0;i<TAM;i++) {
		vetor_principal[i].elemento = 0;
		vetor_principal[i].lista = NULL;
	}
}

void exibir(Tno *vetor_principal) {
	int i;
	for(i=0; i<TAM; i++) {
		Tno *aux = NULL;
		
		printf("\n[%d]\tEndereço Atual\t\tQuantidade\t\tElemento\t\tPróximo Endereço\n", i);
		if(vetor_principal[i].elemento == 0) {
			printf("\t%p\t %d\t\t\t null\t\t\t %p\n\n",&vetor_principal[i],vetor_principal[i].elemento,vetor_principal[i].lista);
		}
		else {
			aux = vetor_principal[i].lista;
			int cont=0;
			while(aux != NULL) {	
				printf("\t%p\t %d\t\t\t %d\t\t\t %p\n\n",aux,(vetor_principal[i].elemento-cont), aux->elemento, aux->lista);
				cont++;
				aux = aux->lista;
			}
		}
	}
	printf("-----------------------------------------------------------------------------------------------------------\n");
}
