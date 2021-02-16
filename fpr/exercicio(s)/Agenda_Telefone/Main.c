/*
	[Exercicio 24 Fonte:](http://www.facom.ufu.br/~backes/wordpress/ListaC06.pdf)
Fazer um programa para simular uma agenda de telefones.
Para cada pessoa devem-se ter os seguintes dados:
•Nome
• E-mail
• Endereco (contendo campos para Rua, numero, complemento, bairro, cep, cidade,estado, pais).
• Telefone (contendo campo para DDD e numero)
• Data de aniversario (contendo campo para dia, mes, ano).
• Observacoes: Uma linha (string) para alguma observacao especial.

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
#include <locale.h>

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
	TDados dados;
	TEnd end;
	TTe tel;
	TAniver niver;
	char observacao[30];
}TAgenda;
//Apartir daqui


int main() {
	setlocale(LC_ALL, "Portuguese");
	TAgenda agenda[100];
	
	puts("Pressione [ENTER] para finalizar...");
	getchar();
	return 0;
}
//l


//l
