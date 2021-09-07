/*
Implemente um programa que leia o nome, a idade e o enderec¸o de uma pessoa e
armazene os dados em uma estrutura
*/

#include <stdio.h>

struct pessoa {
	char nome [50], endereco [50];
	int idade;
};

int main() {
	struct pessoa p;
	
	printf("Digite o nome: ");
	fgets(p.nome,50,stdin);
	printf("Digite o endereco: ");
	fgets(p.endereco,50,stdin);
	printf("Digite o idade: ");
	scanf("%d", &p.idade);
	
	printf("Nome: %s \nIdade: %d \nEndeco: %s\n",p.nome,p.idade,p.endereco);
	
}
