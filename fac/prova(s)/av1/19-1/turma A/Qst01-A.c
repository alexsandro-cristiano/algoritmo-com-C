/*
Questão 01 [2,5 pontos]:
Suponha que, para segurança, determinado sistema codifique as senhas
numéricas de seus usuários acrescentando uma unidade a cada um de seus
algarismos (exceto se o algarismo for 9; neste caso, ele será substituído pelo número 0 na codificação).
Exemplos:
Senha original: 12345
Senha codificada: 23456

Senha original: 952941
Senha codificada: 063052
Pede-se o desenvolvimento de um programa que realize, através de um menu, as operações de codificação e decodificação de senhas.
*/
#include <stdio.h>
int main(){
	long int numero,numeroCod=0,numero_invertido=0,resto,opcao;
	
	printf("Menu:\n1 - Codificacao\n2 - Decodificao\nEscolha:");
	scanf("%d",&opcao);
	
	switch(opcao){
		case 1:
			printf("Informe uma senha: ");
			scanf("%d",&numero);
			while(numero>0){
				resto = numero %10;
				numero/=10;		
				if(resto!=9){
					resto +=1;
					numero_invertido = (numero_invertido*10) + resto;
				}
				else{
					resto = 0;
					numero_invertido = (numero_invertido*10) + resto;
				}
			}
			while(numero_invertido>0){
				resto = numero_invertido %10;
				numero_invertido/=10;
				numeroCod = (numeroCod*10) + resto;
					printf(" LoOpOuuuuuu");
			}
			printf("Numero Codificado: %d\n",numeroCod);
			break;
		case 2:
			printf("Informe senha para decodificacao: ");
			scanf("%d",&numero);
			while(numero>0){
				resto = numero %10;
				numero/=10;		
				if(resto!=0){
					resto -=1;
					numero_invertido = (numero_invertido*10) + resto;
				}
				else{
					resto = 9;
					numero_invertido = (numero_invertido*10) + resto;
				}
			}
			while(numero_invertido>0){
				resto = numero_invertido %10;
				numero_invertido/=10;
				numeroCod = (numeroCod*10) + resto;
			}
			printf("Numero Decodificado: %d\n",numeroCod);
			break;
		
	}
}
