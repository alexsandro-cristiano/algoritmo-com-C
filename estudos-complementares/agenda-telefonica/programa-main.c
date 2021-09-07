/*
Fazer um programa para simular uma agenda de telefones.
Para cada pessoa devem-se
ter os seguintes dados:
• Nome
• E-mail
• Enderec¸o (contendo campos para Rua, numero, complemento, bairro, cep, cidade, ´
estado, pa´is).
• Telefone (contendo campo para DDD e numero) ´
• Data de aniversario (contendo campo para dia, m ´ es, ano). ˆ
• Observac¸oes: Uma linha (string) para alguma observac¸ ˜ ao especial. ˜

(a) Definir a estrutura acima.

(b) Declarar a variavel agenda (vetor) com capacidade de agendar at ´ e 100 nomes. 
´
(c) Definir um bloco de instruc¸oes busca por primeiro nome: Imprime os dados da ˜
pessoa com esse nome (se tiver mais de uma pessoa, imprime para todas).

(d) Definir um bloco de instruc¸oes busca por m ˜ es de anivers ˆ ario: Imprime os dados de ´
todas as pessoas que fazem aniversario nesse m ´ es. ˆ

(e) Definir um bloco de instruc¸oes busca por dia e m ˜ es de anivers ˆ ario: Imprime os ´
dados de todas as pessoas que fazem aniversario nesse dia e m ´ es. ˆ

(f) Definir um bloco de instruc¸oes insere pessoa: Insere por ordem alfab ˜ etica de nome. ´
(g) Definir um bloco de instruc¸oes retira pessoa: Retira todos os dados dessa pessoa e ˜
desloca todos os elementos seguintes do vetor para a posic¸ao anterior. ˜

(h) Definir um bloco de instruc¸oes imprime agenda com as opc¸ ˜ oes: ˜
• Imprime nome, telefone e e-mail.
• Imprime todos os dados.

(i) O programa deve ter um menu principal oferecendo as opc¸oes acima.

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct endereco {
	char rua[30];
	int numero;
	char complemento[30],bairro[30],cep[12],cidade[30], uf[3];
} TEnd;

typedef struct telefone {
	int ddd,numero;

} TTel;

typedef struct dataNascimento {
	int ddd,numero;

} TNas;

typedef struct agenda {
	char nome[50];
	char email[30];
	TEnd end;
	TTel telefone;
	TNas dataNasc;

} TAgenda;

int main () {
	TAgenda contatos[100];

}
