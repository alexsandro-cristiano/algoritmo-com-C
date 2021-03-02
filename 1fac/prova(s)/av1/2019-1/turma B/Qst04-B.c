#include <stdio.h>
int main()
{
	//declaracao de variaveis
	int idade,conta,contb,contc,contd,conte,ida,idd,ide,somad,med,x;
	float perb, perc,pere;
	char opi;
	//inicializando as variaveis com 0
	conta = contb = contc = contd = conte = ida = idd = ide = somad = med = x = 0;
	printf("\t***QUESTAO 4 DA PROVA - CINEMA***\n\n");
	//processamento de dados
	do
	{
		//entrada de dados
		printf("Qual a sua nota, A(otimo),B(bom),C(regular),D(ruim),E(pessimo)? ");
		fflush(stdin);
		scanf("%c",&opi);
		printf("Qual a sua idade? ");
		scanf("%d",&idade);
		
		if((opi == 'A')||(opi == 'a'))
		{
			conta++;
			if(ida < idade)
			{
				ida = idade;
			}
		}
		else
		{
			if((opi == 'B')||(opi == 'b'))
			{
				contb++;
				perb = perb+(contb/100);
			}
			else
			{
				if((opi == 'C')||(opi == 'c'))
				{
					contc++;
					perc = perc+(contc/100);
				}
				else
				{
					if((opi == 'D')||(opi == 'd'))
					{
						contd++;
						somad=somad+idade;
						med = somad/contd;
						if(idd < idade)
						{
							idd = idade;
						}
					}
					else
					{
						conte++;
						pere = pere+(conte/100);
						if(ide < idade)
						{
							ide = idade;
						}
					}
				}
			}
		}
		x++;
	}while(x<5);
	//saida de dados
	printf("Quantidade de resposta otimo = %d\n",conta);
	printf("Diferenca de percentual entre bom e regular = %.2f\n",perb-perc);
	printf("Media da idade de resposta ruim = %d\n",med);
	printf("a percentagem de respostas pessimo e a maior idade que utilizou esta opcao: %.2f/%d\n",pere,ide);
	printf("diferença entre a maior idade que respondeu otimo e a maior idade que respondeu ruim: %d\n",(ida-idd)*-1);
}
