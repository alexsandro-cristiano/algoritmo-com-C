/*QUESTÃO 08:
Faça um algoritmo para calcular a conta final de um hóspede de um hotel, considerando que:
a) Devem ser obtidos o nome do hóspede, o tipo do apartamento utilizado (A, B, C ou D),
o número de diárias utilizadas pelo hóspede e o valor do consumo interno do hóspede;
b) O valor da diária é determinado pela seguinte tabela:
Tipo de Apartamento 			Valor da diária
A									R$ 350,00
B									R$ 275,00
C									R$ 200,00
D									R$ 150,00
c) O valor da taxa de serviço equivale a 10% da conta.
A conta a ser apresentada ao cliente deve conter:o nome do hóspede, o tipo do apartamento,
o valor total das diárias, o valor do consumo interno, o subtotal, o valor da taxa de serviço e o total geral.*/
/*
Logica
pedir tipo do quarto
se A valor diaria 350
se B valor diaria 275
se C valor diaria 200
se D valor diaria 150
pedir número de diárias utilizadas pelo hóspede
pedir consumo interno
taxa de serviço e 10% de tudo
exibe: A conta a ser apresentada ao cliente deve conter:o nome do hóspede, o tipo do apartamento,
o valor total das diárias, o valor do consumo interno, o subtotal, o valor da taxa de serviço e o total geral.

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//declaração de variaveis
	char tipoquarto;
	int dia;
	float consumointer,valor_total_dia, subtotal, txservico, total_geral;
	//entrada de dados
	printf("Entre com o tipo do quarto(com letra minuscula): ");
	scanf("%c", &tipoquarto);
	printf("Entre com o total de dias: ");
	scanf("%d", &dia);
	printf("Entre com o total de consumo interno: ");
	scanf("%f", &consumointer);
	
	//processando dados
	switch(tipoquarto)
	{
		case 'a':
			/*exibe:  o valor do consumo interno, o subtotal, o valor da taxa de serviço e o total geral.*/
		valor_total_dia = 350 * dia;
		break;
		case 'b':
			valor_total_dia = 275 * dia;
			break;
		case 'c':
			valor_total_dia = 200 * dia;
			break;
		case 'd':
			valor_total_dia = 150 * dia;
			break;
		default:
		printf("Opcao de Quarto nao existe\n");
	}
	//calculando o subtotal
	subtotal = valor_total_dia + consumointer;
	//calculando a tx de serviço -> taxa de serviço e 10% de tudo
	txservico = subtotal * 0.1; 
	//calculando o total geral
	total_geral = subtotal + txservico;

	//exibindo dados
	printf("O Tipo do Apartamento e: %c", tipoquarto);
	printf("Valor total de diarias R$: %.2f\n", valor_total_dia);
	printf("Valor do consumo interno R$: %.2f\n", consumointer);
	printf("Subtotal R$: %.2f\n", subtotal);
	printf("Valor da taxa de serviço R$:%.2f\n", txservico);
	printf("Valor Total Geral R$: %.2f\n", total_geral);	
	system("pause");
	return (0);
}
