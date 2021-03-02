#include <stdio.h>
#include <stdlib.h>

//declarando o tipo de dado estrutura
struct data { //nome
	int dia; //campo 1
	int mes; //campo 2
	int ano; //campo 3
}; // fim da declaracao

int main (){
	//declarando uma variavel do tipo data
	struct data D;
	
	//acessando e atribuindo valores no campo
	D.ano = 2020;
	D.dia = 19;
	D.mes = 01;
	
	printf("Data: %d / %d / %d\n",D.dia,D.mes,D.ano);

	return 0;
}
