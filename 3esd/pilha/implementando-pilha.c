/*
	IDENTIFICAÇÃO DE ERRO NA VARIAVEL TOPO:
		O topo, variavel que delimita o topo da pilha, esta iniciando em 0.
		com esta inicialização a pilha que no exemplo tem 5 espaços, fica sempre com um espaço a menos.
		
			  i		  f
		vet - 0 1 2 3 4
			  t
		
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 5

void menu();
int inserir(int vet[],int *topo, int num);
int remover(int vet[], int *topo ,int num);
int gerar_numero_aleatorio();

int main(){
	int escolha;
	int vet[MAX];
	int num, topo=0;	
	char sair = 'n';

	do{
		menu();
		scanf("%d",&escolha);
		
		num = gerar_numero_aleatorio();
		switch(escolha) {
			case 1:
				if(inserir(vet, &topo, num) != 1) {
					printf("ERROR OVERFLOW\n");
				}
				else {
					printf("Elemento inserido com sucesso\n");
				}
				break;
			case 2:
				if(remover(vet, &topo, num) == -1) {
					printf("ERROR UNDERFLOW\n");
				}
				else {
					printf("Elemento removido com sucesso\n");
				}
				break;
			default:
				printf("Opcao invalida\n");
		}
		
		printf("Sair: ");
		scanf(" %c",&sair);
		system("cls");
	}while(sair != 's');
	
	system("pause");
	return 0;
}

void menu() {
	printf("Escolha a Opcao\n1-Inserir\n2-Remover\n");
}

int gerar_numero_aleatorio(){
	srand(time(NULL));
	return rand()%100;
}

int inserir(int vet[],int *topo, int num){	
	if(*topo < MAX){
		vet[*topo] = num;
		(*topo)++;
		return 1;
	}
	else{
		return -1;
	}	
}

int remover(int vet[], int *topo ,int num){
	//Teste de Underflow
	if(*topo <= 0){
		return -1;
	}
	else{
		printf("Elemento a ser removido: %d\n",vet[*topo]);
		(*topo)--;
		printf("Topo atualizado: %d\n",vet[*topo]);
		return 1;
	}	
}

