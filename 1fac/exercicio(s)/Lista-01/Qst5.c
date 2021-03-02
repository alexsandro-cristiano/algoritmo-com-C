/*QUESTÃO 05:
Escrever um algoritmo que, dada uma quantia em reais, calcule o menor número possível de notas/moedas
(100, 50, 20, 10, 5, 2 e 1) em que o valor pode ser decomposto.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	//declaração de variaveis
	int nota,n100,n50,n20,n10,n5,n2,n1,resto;
	//entrada de dados
	printf("Digite o valor em reais: ");
	scanf("%d", &nota);
	//processando dados
	n100 = nota/100;
	resto = nota % 100;
	n50 = resto / 50;
	resto = resto % 50;
	n20 = resto / 20;
	resto = resto % 20;
	n10 = resto / 10;
	resto = resto % 10;
	n5 = resto /5;
	resto = resto % 5;
	n2 = resto / 2;
	resto = resto % 2;
	n1 = resto /1;
	resto = resto % 1;
	//exibindo dados
	printf("nota de 100 = %d\n", n100);
	printf("nota de 50 = %d\n", n50);
	printf("nota de 20 = %d\n", n20);
	printf("nota de 10 = %d\n", n10);
	printf("nota de 5 = %d\n", n5);
	printf("nota de 2 = %d\n", n2);
	printf("nota de 1 = %d\n", n1);
	
	system("pause");
	return (0);
}
