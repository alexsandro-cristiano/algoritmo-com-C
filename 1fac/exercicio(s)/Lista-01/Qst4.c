/*QUESTÃO 04:
Um banco concederá um crédito especial aos seus clientes, variável com o saldo médio no último ano.
Faça um algoritmo que calcule o valor do crédito de acordo com a tabela abaixo:

Saldo Médio 					Percentual
Inferior a R$ 1000,00			nenhum crédito\n
De R$ 1000,00 a	R$ 1499,99		20% do saldo médio\n
De R$ 1500,00 a	R$ 2499,99		30% do saldo médio\n
R$ 2500,00 ou mais				40% do saldo médio\n

creditoespecial
saldomedio
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("QUESTAO 04:\n");
	printf("Um banco concederá um crédito especial aos seus clientes, variável com o saldo médio no último ano.\nFaça um algoritmo que calcule o valor do crédito de acordo com a tabela abaixo:\n\n");
	printf("Saldo Médio 					Percentual\n\n");
	printf("Inferior a R$ 1000,00			nenhum crédito\n");
	printf("De R$ 1000,00 a	R$ 1499,99		20%% do saldo médio\n");
	printf("De R$ 1500,00 a	R$ 2499,99		30%% do saldo médio\n");
	printf("R$ 2500,00 ou mais			40%% do saldo médio\n\n");
	
	//declaração de variaveis
	float saldomedio, valorcred;
	//entrada de dados
	printf("Entre com o valor do saldo medio: ");
	scanf("%f", &saldomedio);
	//processando dados
	if(saldomedio < 1000)
	{
		printf("Nao possui credito.\n");
	}
	else
	{
		if(saldomedio <= 1499.99)
		{
			valorcred = (saldomedio*20)/100;
		}
		else
		{
			if(saldomedio <= 2499.99)
			{
				valorcred = saldomedio*0.3;
			}
			else
			{
				valorcred = saldomedio*0.4;
			}
		}
	}
	//exibindo dados
	printf("De acordo com o seu salario mednio de %.2f o valor de credito fica em %.2f\n\n", saldomedio, valorcred);
	
	system("pause");
	return (0);
}
