/*
	[Exercicio 24 Fonte:](http://www.facom.ufu.br/~backes/wordpress/ListaC06.pdf)

(a) Definir a estrutura acima. V
(b) Declarar a variavel agenda (vetor) com capacidade de agendar ate 100 nomes. v

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

#define TAM 100

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
int main() {
	setlocale(LC_ALL, "Portuguese");
	TAgenda agenda[TAM];
	char nome_da_agenda[30];
	
	printf("Informe o Nome da Agenda (xxxx.dat): ");
	gets(nome_da_agenda);
	FILE *fp;
	
	if(verificar_arquivo(fp,nome_da_agenda)){
		printf("Arquivo Aberto\n");
	}
	else {
		printf("\n\nAgenda informada não existe.\n\nDeseja  criar agenda \"%s\" (s - n): ",nome_da_agenda);
		char resp;
		scanf(" %c",&resp);
		if(resp == 's' ||resp == 'S') {
			criar_arquivo(fp,nome_da_agenda);
		}
	}
	//verificando se agenda existe
	//trabalhar com arquivo
	/*
	com a agenda aberta
	carregar as informações da agenda
	apresentar menu para manipular agenda
	
	do{
		exibir_menu();
		
	}while();*/
	
	puts("Pressione [ENTER] para finalizar...");
	getchar();
	return 0;
}

void exibir_menu(){
	printf("1 - adicionar contato\n2 - remover contato\n3 - bucar por nome\n4 - buscar por mes de aniversario\n");
	printf("5 - buscar por dia e mes de aniversario\n6 - imprimir agenda\n");
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
		printf("Agenda Criado\n");
	}
}


