/*
O cardápio de uma lanchonete é o seguinte:
Especificação 			Código 			Preço
Cachorro quente			100				3,50
Bauru simples			101				4,50
Bauru com ovo			102				5,20
Hamburger				103				3,00
Cheeseburger			104				4,00
Refrigerante			105				2,50
Escrever um algoritmo que obtenha o código do item pedido, a quantidade e calcule o valor a ser pago.
Considere que, a cada execução do algoritmo, somente será calculado o valor relacionado a um item.
1 - pega o cod
2 - pega a qtd
3 - calcule o valor
4 - exibir

*/
#include <stdio.h>
#include <stdlib.h>

int main ()
{
	//declarando as variaveis
	float valor, qtd;
	int cod;
	char mer[30] = "Cachorro Quente";
	char ven[30] = "Bauru Simples";
	char mar[30] = "Bauru com Ovo";
	char jup[30] = "Hamburguer";
	char sat[30] = "Cheeseburguer";
	char ura[30] = "Refrigerante";
	
	
	//interagindo com o usuario	
	printf("  Especificacao          codigo        Preco\n");
	printf("\n   Cachorro Quente		  100		   3,50");
	printf("\n   Bauru Simples		  101 		   4,50");
	printf("\n   Bauru com Ovo		  102 		   5,20");
	printf("\n   Hamburguer		          103		   3,00");
	printf("\n   Cheeseburguer		  104		   4,00");
	printf("\n   Refrigerante			  105 		   2,50");

	
	printf ("\n\n Digite o codigo do seu pedido: ");
	scanf("%i", &cod);
	
	printf("\n Digite a quantidade: ");
	scanf("%f", &qtd);
	
	//desenvolvendo o programa
	if (cod == 100)
	{
		valor = qtd*3.50;
		printf ("\nO codigo inserido e %i, seu pedido e %s, custando %f", cod, mer, valor);
	}	
	else if (cod == 101)
	{
		valor = qtd*4.50;
		printf ("\nO codigo inserido e %i, seu pedido e %s, custando %f", cod, ven, valor);
	}
	else if (cod == 102)
	{
		valor = qtd*5.20;
		printf ("\nO codigo inserido e %i, seu pedido e %s, custando %f", cod, mar, valor);
	}	
	else if (cod == 103)
	{
		valor = qtd*3.00;
		printf ("\nO codigo inserido e %i, seu pedido e %s, custando %f", cod, jup, valor);
	}
	else if (cod == 104)
	{
		valor = qtd*4.00;
		printf ("\nO codigo inserido e %i, seu pedido e %s, custando %f", cod,sat,valor);
	}	
	else
	{
		valor = qtd*2.50;
		printf ("\nO codigo inserido e %i, seu pedido e %s, custando %f", cod, ura, valor);
	}
	
}
