/*
	Questão 03 [2,5 pontos]:
Desenvolver um programa que leia um número inteiro
(no intervalo de 1 a 2000) e exiba o número romano
equivalente.
*/
#include <stdio.h>
int main()
{
	 	int numero, m=0,c=0,d=0,u=0,res=0;
	
	printf("Entre com um ano: ");
	scanf("%d",&numero);

	if(numero>2000){
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
			printf("M");
			break;
		case 2:
			printf("MM");
			break;	
	}

	switch(c) {
		case 1:
			printf("C");
			break;
		case 2:
			printf("CC");
			break;
		case 3:
			printf("CCC");
			break;
		case 4:
			printf("CD");
			break;
		case 5:
			printf("D");
			break;
		case 6:
			printf("DC");
			break;
		case 7:
			printf("DCC");
			break;
		case 8:
			printf("DCCC");
			break;
		case 9:
			printf("CM");
			break;
	}

	switch(d) {
		case 1:
			printf("X");
			break;
		case 2:
			printf("XX");
			break;
		case 3:
			printf("XXX");
			break;
		case 4:
			printf("XL");
			break;
		case 5:
			printf("L");
			break;
		case 6:
			printf("LX");
			break;
		case 7:
			printf("LXX");
			break;
		case 8:
			printf("LXXX");
			break;
		case 9:
			printf("XC");
			break;
	}

	switch(u) {
		case 1:
			printf("I");
			break;
		case 2:
			printf("II");
			break;
		case 3:
			printf("III");
			break;
		case 4:
			printf("IV");
			break;
		case 5:
			printf("V");
			break;
		case 6:
			printf("VI");
			break;
		case 7:
			printf("VII");
			break;
		case 8:
			printf("VIII");
			break;
		case 9:
			printf("IX");
			break;
	}

	return 0;
}
