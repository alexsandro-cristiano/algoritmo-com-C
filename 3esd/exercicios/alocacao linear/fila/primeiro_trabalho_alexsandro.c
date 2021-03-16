/*
	Name: Primeiro Trabalho
	Copyright: Faeterj-Rio
	Author: Alexsandro Cristiano G da Silva
	Date: 16/03/21 09:55
	Description: Algoritmo de inserções e retiradas em uma fila definida em alocação sequencial utilizando a linguagem C
*/


#include <stdio.h>
#include <stdlib.h>

#define MAX 5


typedef struct no{
	int matricula;
	char nome[30];
	char situacao[3];
}TNo;

TNo escrever();
int inserir(TNo fila[],int *fim);
int remover(int *ini, int *fim);

int main(){
	TNo fila[MAX];
	int menu,inicio=0,fim=0;
	char esc = 'n';
	
	do {
		printf("Menu:\n1 - Inserir\n2 - Remover\n");
		scanf("%d",&menu);

		switch(menu){
			case 1:
				if(inserir(fila,&fim) == 1){
					printf("Elemento incluido na fila\n");
				}
				else{
					printf("OVERFLOW\nFila esta cheia\n");
				}
				break;
			case 2:
				if(remover(&inicio,&fim) == 1){
					printf("Elemento removido na fila\n");
				}
				else{
					printf("UNDERFLOW\nFila esta vazia\n");
				}
				break;
		}
		printf("Sair (s/n): ");
		fflush(stdin);
		scanf("%c", &esc);
	}while(esc!='s');
	return 0;
}

TNo escrever(){
	TNo aux;
	printf("Matricula: ");
	scanf("%d",&aux.matricula);
	printf("Nome: ");
	fflush(stdin);
	gets(aux.nome);
	printf("Situacao: ");
	fflush(stdin);
	gets(aux.situacao);
	return aux;		
}

int inserir(TNo fila[],int *fim) {
	if(*fim < MAX){
		TNo aux = escrever();
		fila[*fim] = aux;
		(*fim)++;
		return 1;
	}
	return -1;
}

int remover(int *ini, int *fim) {
	if((*ini == 0)&&(*fim == 0)){ //Underflow
		return -1;
	}
	else if(*ini==*fim){ //ultimo elemento da lista
		*ini = 0;
		*fim = 0;
	}
	else {
			(*ini)++;
	}
	return 1;
}
