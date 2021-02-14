#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Representando a quantidade de ponto que o time recebe se:
	ganhar = 3 pontos
	empatar = 1 ponto
*/
#define VITORIA 3
#define EMPATE 1

int main() {
	srand(time(NULL));
	const int SELECOES = 4;
	int fase_Grupo[32] = {0};
	int fase_oitavas[16];
	
	const int GRUPO = 2;
	int time1, time2, aux = 1, limite = 0;
	while(aux <= GRUPO){
		int gol_feitos[4] = {0}, gol_tomados[4] = {0};
		int placar_time1=0, placar_time2=0;

		limite += SELECOES;
		printf("\tGrupo %d\n\n", aux);
		//realizar as partidas time 1 vs time2
		for(time1=(limite-SELECOES); time1<(limite-1); time1++) {
			for(time2=time1+1; time2<limite; time2++) {
				/*recebendo o placar_time1acar do jogo - placar_time1
				printf("JOGO TIME %d x TIME %d\n",time1+1,time2+1);
				printf("PLACAR DO JOGO\nENTRE COM OS GOLS DO TIME %d: ",time1+1);
				scanf("%d",&placar_time1);
				printf("ENTRE COM OS GOLS DO TIME %d: ",time2+1);
				scanf("%d",&placar_time2);*/
				placar_time2 = rand() % 5;
				placar_time1 = rand() % 5;
				//verificar empate
				if(placar_time1 == placar_time2){
					fase_Grupo[time1] += EMPATE;
					fase_Grupo[time2] += EMPATE;
										
				} else if(placar_time1 > placar_time2){
					fase_Grupo[time1] += VITORIA;					
				} else {
					fase_Grupo[time2] += VITORIA;
				}

				//Convertendo os Gols do jogo Time 1
				gol_feitos[time1] += placar_time1;
				gol_tomados[time1] += placar_time2;
				//Convertendo os Gols do jogo Time 2
				gol_feitos[time2] += placar_time2;
				gol_tomados[time2] += placar_time1;
				
				placar_time1=0, placar_time2=0;
				printf("\n\n");
			}
			printf("--------------------------------------------------\n");
			/*DEBUG VERIFICANDO INFORMAÇÃO DE PONTOS DO VETOR*/
			int v;
			printf("Time -\tPontos -\tGol Feitos -\tGol Tomado\n");
			for(v=0; v< limite; v++) {
				printf("%d -\t%d -\t\t %d -\t\t %d\n",v,fase_Grupo[v],gol_feitos[v], gol_tomados[v]);
			}
			printf("\n\n");
		}
		
		//Classificado dos Grupo
		/*
			varrer o vetor e ver quem tem mais pontos
			se tiver empate de pontos entrar para desempatar
		*/
			printf("\n\n");
		int ind, maior=-999,classif1,classif2;
		for(ind=(limite-SELECOES); ind<limite; ind++) {
			if(fase_Grupo[ind]==fase_Grupo[ind+1]){
				printf("%d = %d",fase_Grupo[ind],fase_Grupo[ind+1]);
			}
			if(fase_Grupo[ind] > maior) {
				maior = fase_Grupo[ind];
				classif1 = ind;
			}
			
		}
		printf("Mais pontos, time %d, quantidade de pontos %d\n",classif1,maior);
		
		aux++;
	}
	
	/*Exibir Vetor das Oitavas de final
	for(i=0; i < 16; i++) {
		
	}*/
	
	
	printf("Pressione [ENTER] para finaliza...\n");
	getchar();
	return 0;
}
