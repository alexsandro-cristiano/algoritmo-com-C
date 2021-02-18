#include <stdio.h>
#include <string.h>

struct dado{
	char nome[30];
};

int main(){
	struct dado m[3], n;
	int i;
	for(i=0;i<2;i++) {
		fgets(m[i].nome,30,stdin);
	}
	
	fflush(stdin);
	fgets(n.nome,30,stdin);
	for(i=0;i<2;i++) {
		printf("%s\n",m[i].nome);
	}
	printf("\n\n\n\nRetorna:\n");
	printf("%d\nNome1:%s\nNome2:%s\n",strcmp(m[0].nome,n.nome),m[0].nome,n.nome);
	printf("%d\nNome1:%s\nNome2:%s\n",strcmp(m[1].nome,n.nome),m[1].nome,n.nome);
	
	/*
		STRCMP RETORNO
		<0 - str1 e menor str2
		>0 - str2 e menor str1
		=0 - str1 e igual str2
	*/
	i=0;

	while(strcmp(m[i].nome,n.nome) <= 0 && i<3) { //bug
		printf("enquanto\n\n%s\n", m[i].nome);
		i++;
	}
	printf("\n\n\n\n\nValor de i depois do while %d\n",i);
	//trocar
	
	struct dado a;
	a = m[1];
	printf("\n\n\n");
	printf("Valor de Aux\n%s",a.nome);
	m[1] = n;
	m[2] = a;
	printf("\n\n\n");
	for(i=0;i<3;i++) {
		printf("%d - %s\n",i,m[i].nome);
	}
	
	return 0;
}
