#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 5

void menu();
int inserir(int vet[],int *topo, int num);
int remover(int vet[], int *topo ,int num);
int gerar_numero_aleatorio();
void exibir(int vet[], int topo);

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
		exibir(vet,topo);
		printf("\ntopo = %d",topo);
		printf("\n\nSair: ");
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

void exibir(int vet[], int topo){
	int i;
	for(i=0;i<topo;i++)
		printf("%d ",vet[i]);
}
