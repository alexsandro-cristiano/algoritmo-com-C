/*
	[Exercicio 24 Fonte:](http://www.facom.ufu.br/~backes/wordpress/ListaC06.pdf)

(c) Definir um bloco de instrucoes busca por primeiro nome:
	Imprime os dados da pessoa com esse nome(se tiver mais de uma pessoa, imprime para todas).
(d) Definir um bloco de instrucoes busca por mes de aniversario:
	Imprime os dados de todas as pessoas que fazem aniversario nesse mes.
(e) Definir um bloco de instrucoes busca por dia e mes de aniversario:
	Imprime os dados de todas as pessoas que fazem aniversario nesse dia e mes.
(f) Definir um bloco de instruc¸oes insere pessoa: Insere por ordem alfabetica de nome.
(g) Definir um bloco de instrucoes retira pessoa:
	Retira todos os dados dessa pessoa e desloca todos os elementos seguintes do vetor
	para a posic¸ao anterior.
(h) Definir um bloco de instrucoes imprime agenda com as opcoes:
	• Imprime nome, telefone e e-mail.
	• Imprime todos os dados.
(i) O programa deve ter um menu principal oferecendo as opc¸oes acima.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <stdbool.h>

#define CAP 5

//Estruturas do Programa
typedef struct dados{
	char nome[50];
	char email[50];
}TDados;

typedef struct endereco{
	char rua[30];
	char complemento[30];
	char bairro[30];
	char cep[10];
	char cidade[30];
	char estado[3];
	char pais[30];
	int numero;
}TEnd;

typedef struct telefone{
	int numero;
	int DDD;
}TTe;

typedef struct dt_aniversario{
	int dia,mes,ano;
}TAniver;

typedef struct agenda{
	char observacao[30];
	TDados dados;
	TEnd end;
	TTe tel;
	TAniver niver;
}TAgenda;
//Apartir daqui

void exibir_menu();
bool verificar_arquivo(FILE *fp, char nome_agenda[30]);
void criar_arquivo(FILE *fp, char nome_agenda[30]);
void atuarlizar_arquivo();
bool inserir_contato(TAgenda *agenda, int *quantidade);
bool validar_espaco_disponivel(int **espaco);
TAgenda preencher_formulario();
void imprimir_agenda(TAgenda *agenda, int quantidade);

int main() {
	setlocale(LC_ALL, "Portuguese");
	//Trabalhando com Arquivo
/*	char nome_da_agenda[30];
	
	printf("Informe o Nome da Agenda (xxxx.dat): ");
	gets(nome_da_agenda);
	FILE *fp;
	
	if(verificar_arquivo(fp,nome_da_agenda)){
		printf("Arquivo Aberto\n");
		//carregar informações da agenda
	}
	else {
		printf("\n\nAgenda informada não existe.\n\nDeseja  criar agenda \"%s\" (s - n): ",nome_da_agenda);
		char resp;
		scanf(" %c",&resp);
		if(resp == 's' ||resp == 'S') {
			criar_arquivo(fp,nome_da_agenda);
		}
	}*/
	//Parte da Lista Estatica
	int quantidade = 0, resp = 0;
	TAgenda agenda[CAP];
	
	do {
		exibir_menu();
		scanf("%d",&resp);
		
		switch(resp) {
			case 1:
				if(inserir_contato(agenda, &quantidade)){
					//atualizar arquivo da agenda
					//atuarlizar_agenda();
					printf("Contato Inserido com SUCESSO\n");
				}
				else {
					printf("Não há mais espaço na lista\n");
				}
				break;
			case 2:
				printf("Caso %d",resp);
				break;
			case 3:
				printf("Caso %d",resp);
				break;
			case 4:
				printf("Caso %d",resp);
				break;
			case 5:
				printf("Caso %d",resp);
				break;
			case 6:
				system("cls");
				//printf("IMPRIMINDO A AGENDA: %s\n",nome_da_agenda);
				imprimir_agenda(agenda, quantidade);
				break;
			case 7:
				printf("Encerrando os Processos...\n");
				break;
			default:
				printf("Opção Invalida\nTente Novamente!\n");
		}

	}while(resp!=7);
	
	system("pause");
	return 0;
}

void exibir_menu(){
	printf("Menu\n1 - adicionar contato;\n2 - remover contato;\n3 - bucar por nome;\n4 - buscar por mes de aniversario;\n");
	printf("5 - buscar por dia e mes de aniversario;\n6 - imprimir agenda;\n7 - Sair\n");
}

bool verificar_arquivo(FILE *fp, char nome_agenda[30]){
	fp = fopen(nome_agenda, "r");
	if(fp != NULL) {
		return true;
	}
	else{
		return false;
	}
}

void criar_arquivo(FILE *fp, char nome_agenda[30]){
	fp = fopen(nome_agenda, "w");
	if(fp != NULL) {
		printf("\nAgenda Criado\n");
	}
}

bool inserir_contato(TAgenda *agenda, int *quantidade){
	int i=0,marcador=0,ind = *quantidade;

	if(validar_espaco_disponivel(&quantidade)){
		TAgenda novo = preencher_formulario();		
		if(*quantidade!=0){
			//descobrir a posicao de onde colocar registro novo
			while((strcmp(agenda[i].dados.nome, novo.dados.nome) <= 0) && (i!=*quantidade)) {
				marcador++;
				i++;
				printf("loop 1 while\n");
			}
			printf("\n\n\n\n\nValor de i:%d\nValor de marcador:%d\n\n\n\n\n",i,marcador);
			//deslocar todos os registros para frente na fila
			while(marcador>ind){
				printf("loop 2 while\n");
				agenda[ind+1] = agenda[ind];
				ind--;
			}
			//adicionar cara na fila
			agenda[marcador] = novo;
			(*quantidade)++;
			return true;
		} else {
			agenda[ind] = novo;
			(*quantidade)++;
			return true;
		}		
	}
	return false;
}

bool validar_espaco_disponivel(int **espaco) {
	return ((**espaco)<=CAP) ? true: false;
}

TAgenda preencher_formulario() {
	TAgenda aux;		
	printf("\n--------------------\nDados:\n");
	printf("Nome: ");
	fflush(stdin);
	fgets(aux.dados.nome, 50,stdin);
	printf("Email: ");
	fflush(stdin);
	fgets(aux.dados.email, 50,stdin);
	
	printf("\n--------------------\nEndereço:\n");
	printf("Rua: ");
	fflush(stdin);
	fgets(aux.end.rua, 30,stdin);
	printf("Numero: ");
	scanf("%d", &aux.end.numero);
	printf("Complemento *Caso não haja complemento utilizar \"N/A\"*: ");
	fflush(stdin);
	fgets(aux.end.complemento, 30,stdin);
	printf("Bairro: ");
	fflush(stdin);
	fgets(aux.end.bairro, 30,stdin);
	printf("CEP: ");
	fflush(stdin);
	fgets(aux.end.cep, 10,stdin);		
	printf("Cidade: ");
	fflush(stdin);
	fgets(aux.end.cidade, 30,stdin);
	printf("Estado: ");
	fflush(stdin);
	fgets(aux.end.estado, 30,stdin);
	printf("País: ");
	fflush(stdin);
	fgets(aux.end.pais, 30,stdin);
	
	printf("\n--------------------\nTelefone:\n");
	printf("Informe o DD + Numero (Exemplo:(21) 99999999): ");
	scanf("%d %d",&aux.tel.DDD, &aux.tel.numero);
	
	printf("\n--------------------\nData de Aniversário:\n");
	printf("Data de Aniversário (dd/mm/yyyy): ");
	scanf("%d/%d/%d",&aux.niver.dia, &aux.niver.mes, &aux.niver.ano);
	
	printf("\n--------------------\nObservações:\n");
	printf("Observação: ");
	fflush(stdin);
	fgets(aux.observacao, 30, stdin);
	return aux;
}

void imprimir_agenda(TAgenda *agenda, int quantidade) {
	int i;
	for(i=0; i<quantidade; i++) {
		printf("Nome:%s\nE-mail:%s\n",agenda[i].dados.nome,agenda[i].dados.email);
		printf("Data de Aniversario:%d/%d/%d\n",agenda[i].niver.dia,agenda[i].niver.mes,agenda[i].niver.ano);
		printf("Telefone:(%d) %d\n\n",agenda[i].tel.DDD,agenda[i].tel.numero);
		printf("Rua: %s\t\tNumero:%d\nComplemento:%s\t\tBairro:%s\t",agenda[i].end.rua,agenda[i].end.numero,agenda[i].end.complemento,agenda[i].end.bairro);
		printf("CEP:%s\n Cidade:%s\t\tEstado:%s\t\tPais:%s",agenda[i].end.cep,agenda[i].end.cidade,agenda[i].end.estado,agenda[i].end.pais);
		printf("\n---------------------------------------------\n");
	}
}
