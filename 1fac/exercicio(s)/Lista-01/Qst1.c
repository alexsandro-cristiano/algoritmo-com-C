/*QUESTÃO 01:
O custo ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica).
Desenvolver um algoritmo que calcule o custo ao consumidor de determinado carro.

taxa = (custo d fabrica + porcentagem distribuido / 100) + (custo d fabrica + imposto / 100)
custo do consumidor = custo d fabrica + taxa
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("QUESTÃO 01:\n");
	printf("O custo ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distribuidor e\n dos impostos (aplicados ao custo de fábrica).\n");
	printf("Desenvolver um algoritmo que calcule o custo ao consumidor de determinado carro.\n\n");
	
	
	//declaração de variaveis
	float taxa,cf,pd,pi,cc;
	//entrada de dados
	printf("Digite a porcentagem do distribuidor 0 - 100: ");
	scanf("%f", &pd);
	printf("Digite a porcentagem do imposto 0 - 100: ");
	scanf("%f", &pi);
	printf("Digite custo de fabrica: ");
	scanf("%f", &cf);
	//processando dados
	//modo errado -> taxa = (cf+pd)/100 + (cf*ci)/100;
	taxa = cf*((pi/100)+(pd/100)); //como correto
	cc = taxa+cf;
	//exibindo dados
	printf(" - > custo do seu carro: %.2f\n\n", cc);
	
	system("pause");
	return (0);
}
