/*Fazer um programa que auxilie o orgão regulador no cálculo do total de recursos arrecadados com a aplicação de multas de trânsito.
O programa deve ler as seguintes informações para cada motorista:
- O número da carteira de motorista;
- Número de multas;
- Valor de cada uma das multas.
Deve ser exibido o valor da dívida de cada motorista e ao final da leitura o total de recursos arrecadados (somatório de todas as multas).
O programa também deverá apresentar o número da carteira do motorista que obteve o maior número de multas.
*/ 
#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int cm, nm;
	float vm;
	
	
	printf("Digite o número da carteira de motorista: ");
	scanf("%d", &cm);
	printf("Digite o número de multas: ");
	scanf("%d", &nm);
	printf("Digite o valor de cada uma das multas: ");
	scanf("%f", &vm);
	
	
}
