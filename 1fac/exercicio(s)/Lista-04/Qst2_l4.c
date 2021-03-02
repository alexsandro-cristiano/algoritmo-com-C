/*Desenvolver um programa que calcule a soma dos números de 1 a N, sendo N um número inteiro fornecido pelo usuário.*/

/* Pensando no Algoritmo
preciso somar de 1 a n >> 1 + n ; 2 + n ; 3 + n ... n + n
enquanto rodar n
exibe n + 1
*/

#include <stdio.h>
#include <stdlib.h>
int main ()
{
	//declarando variaveis
	int n, i = 1, soma;
	
	//corpo do programa
	//interagindo com o usuario
	printf("Digite valor para n: ");
	scanf("%d", &n);
	//acao do programa
	while (i<=n)
	{
		soma = i + n;
		printf("soma = %d + %d =  %d\n", i,n,soma);
		i++;
	}
	printf("\n valor digitado pelo usuario: %d\n valor que i ficou na ultima atualizacao: %d\n valor final da soma: %d", n,i,soma);
}
