/*Questão 04 [2,5 pontos]:
Determinada zona eleitoral possui 50 eleitores inscritos que poderão votar, uma única vez, em um dos 4
candidatos para o único cargo em votação (códigos 10, 20, 30 ou 40). Pede-se o desenvolvimento de um programa que:
a. Leia o voto de cada eleitor, considerando que o processo terminará quando os 50 eleitores votarem ou
quando o número -1 for digitado como voto;
b. Exiba o total de votos para cada candidato, assim com a quantidade de votos brancos (código 0) e de
nulos (código sem candidato associado). Além disso, exibir a quantidade de abstenções (eleitores que não votaram).
*/

#include <stdio.h>
int main()
{
	int pessoa,branco,voto,cand1,cand2,cand3,cand4,nulo,abst,aux;
	//inicializando as variaveis
	pessoa = branco = cand1 = cand2 = cand3 = cand4 = nulo = abst = aux =0;
	//Processando os dados
	do{
		pessoa++; //contador das pessoas que votaram
		
		printf("Entre com seu Voto: ");
		scanf("%d",&voto);
		switch(voto)
		{
			case -1:
				abst = 50-pessoa;
				aux=1;
				pessoa = 50;
				break;
			case 0:
			branco++;
				break;
			case 10:
				cand1++;
				break;
			case 20:
				cand2++;
				break;
			case 30:
				cand3++;
				break;
			case 40:
				cand4++;
				break;
			default:
				nulo++;
				break;
		}
	}while(pessoa!=50);
	if(abst==aux)
	{
		abst = 50-pessoa;
	}
	//saida de dados
	printf("Votos Registrado no Candidado 10: %d\n",cand1);
	printf("Votos Registrado no Candidado 20: %d\n",cand2);
	printf("Votos Registrado no Candidado 30: %d\n",cand3);
	printf("Votos Registrado no Candidado 40: %d\n",cand4);
	printf("Votos Brancos Registrado: %d\n",branco);
	printf("Votos Nulos Registrado: %d\n",nulo);
	printf("Quantidade de Abstencoes: %d\n",abst);
}

