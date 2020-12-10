/*QUESTÃO 9:
Fazer um algoritmo que determine quanto dias ainda tem no ano.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	//declaração de variaveis
	int dia,mes,ordem;
	//entrada de dados
	printf("Digite o dia/mes: ");
	scanf("%d/%d", &dia, &mes);
	//processando dados
	switch(mes)
	{
		case 1:
			ordem = dia;
			break;
		case 2:
			ordem = dia+31;
			break;
		case 3:
			ordem = dia+59;
			break;
		case 4:
			ordem = dia+90;
			break;
		case 5:
			ordem = dia+120;
			break;
		case 6:
			ordem = dia+151;
			break;
		case 7:
			ordem = dia + 181;
			break;
		case 8:
			ordem = dia + 212;
			break;
		case 9:
			ordem = dia+243;
			break;
		case 10:
			ordem = dia+273;
			break;
		case 11:
			ordem = dia+304;
			break;
		case 12:
			ordem = dia+334;
			break;

	}
	
	//exibindo dados
	printf("%d dia do ano\nfaltam %d para acabar o ano\n", ordem,((ordem-365)*-1));
	
	system("pause");
	return (0);
}
