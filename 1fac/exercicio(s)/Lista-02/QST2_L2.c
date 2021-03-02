/* Escrever um algoritmo que obtenha o peso de uma pessoa na Terra e o número de um planeta. Ao final, com auxílio da tabela abaixo,
calcular o peso desta pessoa no planeta escolhido.
Número 		Planeta 	Gravidade Relativa g


1 			Mercúrio			 0,37
2 			Vênus 				 0,88
3 			Marte 				 0,38
4 			Júpiter 			 2,64
5 			Saturno				 1,15
6 			Urano				 1,17
Para calcular o peso no planeta escolhido, utilize a seguinte fórmula:

pesoPlaneta = (pesoTerra/10) * gravidadePlaneta

	1 - apresentar a tabela - ok
	2 - obter o numero do planeta - ok
	3 - obter o peso da pessoa - ok
	4 - fazer o calculo - ok
	5 - exibir o resultado - ok */
	
#include <stdio.h>
#include <stdlib.h>

int main ()
{
	//declarando as variaveis
	float pt, pp;
	int num;
	char mer[10] = "Mercurio";
	char ven[10] = "Venus";
	char mar[10] = "Marte";
	char jup[10] = "Jupiter";
	char sat[10] = "Saturno";
	char ura[10] = "Urano";
	
	
	//interagindo com o usuario	
	printf("  Numero        Planeta Gravidade        Relativa g\n");
	printf("\n    1		  Mercurio		   0,37");
	printf("\n    2		  Venus 		   0,88");
	printf("\n    3		  Marte 		   0,38");
	printf("\n    4		  Jupiter		   2,64");
	printf("\n    5		  Saturno		   1,15");
	printf("\n    6		  Urano 		   1,17");
	
	printf ("\n\n Digite o numero do planeta escolhido: ");
	scanf("%i", &num);
	
	printf("\n Digite o seu peso: ");
	scanf("%f", &pt);
	
	//desenvolvendo o programa
	if (num == 1)
	{
		pp = (pt/10) * 0.37;
		printf ("\nO numero que voce escolheu e %i, no planeta %s, e la voce pesaria %f", num, mer, pp);
	}	
	else	if (num == 2)
	{
		pp = (pt/10) * 0.88;
		printf ("\nO numero que voce escolheu e %i, no planeta %s, e la voce pesaria %f", num, ven, pp);
	}
	else if (num == 3)
	{
		pp = (pt/10) * 0.38;
		printf ("\nO numero que voce escolheu e %i, no planeta %s, e la voce pesaria %f", num, mar, pp);
	}	
	else if (num == 4)
	{
		pp = (pt/10) * 2.64;
		printf ("\nO numero que voce escolheu e %i, no planeta %s, e la voce pesaria %f", num, jup, pp);
	}
	else if (num == 5)
	{
		pp = (pt/10) * 1.15;
		printf ("\nO numero que voce escolheu e %i, no planeta %s, e la voce pesaria %f", num,sat,pp);
	}	
	else if (num == 6)
	{
		pp = (pt/10) * 1.17;
		printf ("\nO numero que voce escolheu e %i, no planeta %s, e la voce pesaria %f", num, ura, pp);
	}
	
}
