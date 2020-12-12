/*
Faça um programa que escreva um ano, fornecido pelo usuário,
por extenso. Caso o ano seja inválido
(não pertencente ao intervalo de 1 a 2017),
uma mensagem de erro deve ser gerada.
Exemplos:
1889 – mil e oitocentos e oitenta e nove
2030 – ano inválido
*/
#include <stdio.h>

int main() {
	int numero, m=0,c=0,d=0,u=0,res=0;
	
	printf("Entre com um ano: ");
	scanf("%d",&numero);

	if(numero>2017){
		printf("ERRO\n");
	}
	else{
		int aux = numero;
		do{
			m = numero/1000;
			res = numero%1000;
			aux -= (1000*m);
			c = res/100;
			res = res%100;
			aux -= (100*c);
			d = res/10;
			res = res%10;
			aux -= (10*d);
			u = res%10;
			aux -= (1*u);
			
		} while((aux!=0)&&(aux<=2017));
	}
//	printf("M - %d\nC - %d\nD - %d\nU - %d\n\n\n",m,c,d,u);
	
	switch(m) {
		case 1:
			printf("Mil");
			break;
		case 2:
			printf("Dois mil");
			break;	
	}
	(c>0)?printf(" e "):printf(" \n ");
	switch(c) {
		case 1:
			printf("cem");
			break;
		case 2:
			printf("duzentos");
			break;
		case 3:
			printf("trezentos");
			break;
		case 4:
			printf("quatrocentos");
			break;
		case 5:
			printf("quinhentos");
			break;
		case 6:
			printf("seiscentos");
			break;
		case 7:
			printf("setecentos");
			break;
		case 8:
			printf("oitocentos");
			break;
		case 9:
			printf("novecentos");
			break;
	}
	(d>0)?printf(" e "):printf(" \n ");
	switch(d) {
		case 1:
			printf("dez");
			break;
		case 2:
			printf("vinte");
			break;
		case 3:
			printf("trinta");
			break;
		case 4:
			printf("quarenta");
			break;
		case 5:
			printf("cinquenta");
			break;
		case 6:
			printf("sessenta");
			break;
		case 7:
			printf("setenta");
			break;
		case 8:
			printf("oitenta");
			break;
		case 9:
			printf("noventa");
			break;
	}
	(u>0)?printf(" e "):printf(" \n ");
	switch(u) {
		case 1:
			printf("um");
			break;
		case 2:
			printf("dois");
			break;
		case 3:
			printf("tres");
			break;
		case 4:
			printf("quarto");
			break;
		case 5:
			printf("cinco");
			break;
		case 6:
			printf("seis");
			break;
		case 7:
			printf("sete");
			break;
		case 8:
			printf("oito");
			break;
		case 9:
			printf("nove");
			break;
	}

	return 0;
}
