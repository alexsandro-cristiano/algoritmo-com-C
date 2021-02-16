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
	const int SELECOES = 4, GRUPO = 8;
	int fase_Grupo[32] = {0}, fase_oitavas[16];
	int time1, time2, aux = 1, limite = 0, pass;

	while(aux <= GRUPO){
		int gol_feitos[4] = {0}, gol_tomados[4] = {0};
		int placar_time1 = 0, placar_time2 = 0;
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
				placar_time1 = rand() % 3;
				placar_time2 = rand() % 3;
				//Validando a partida
				if(placar_time1 == placar_time2) {
					fase_Grupo[time1] += EMPATE;
					fase_Grupo[time2] += EMPATE;							
				}
				else if(placar_time1 > placar_time2){
					fase_Grupo[time1] += VITORIA;					
				}
				else {
					fase_Grupo[time2] += VITORIA;
				}

				//Convertendo os Gols do jogo Time 1 e Time 2
				gol_feitos[time1] += placar_time1;
				gol_tomados[time1] += placar_time2;
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
		//Verificar e Tratar o Empate
		int primeiro_classificado,segundo_classificado, maior= -999;
		char houve_empate = 'n';

		for(time1=(limite-SELECOES); time1<(limite-1); time1++) {
			for(time2=time1+1; time2<limite; time2++) {
				if(fase_Grupo[time1] == fase_Grupo[time2]){
					houve_empate = 's';
					int saldo_gol_time1 =gol_feitos[time1] - gol_tomados[time1];
					int saldo_gol_time2 =gol_feitos[time2] - gol_tomados[time2];
					if(saldo_gol_time1>saldo_gol_time2) {
						segundo_classificado = time1;
					}
					else { 
						if(saldo_gol_time1<saldo_gol_time2){
							segundo_classificado = time2;
						}
						else {
							if(gol_feitos[time1] > gol_feitos[time2]){
								segundo_classificado = time1;
							}
							else {
								if(gol_feitos[time1]<gol_feitos[time2]){
									segundo_classificado = time2;
								}
								else{
									if(gol_tomados[time1]<gol_tomados[time2]){
										segundo_classificado = time1;
									}
									else{
										segundo_classificado = time2;
									}
								}
							}
						}
					}
				}
			}
		}
		
		if(houve_empate == 'n') {
			//orderna vetor
			int i,j, aux[4];
			for(j=0; j<limite; j++){
				aux[j] = fase_Grupo[j];
			}
			for(i=0; i<limite; i++){
				int aux2;
				for(j=0; j<limite; j++){
					if(aux[i]<aux[j]){
						aux2 = aux[i];
						aux[i] = aux[j];
						aux[j] = aux2;
					}
				}
			}
			
			for(i=0;i<limite;i++){
				if(aux[0]==fase_Grupo[i]){
					primeiro_classificado = i;
				}
				if(aux[1]==fase_Grupo[i]){
					segundo_classificado = i;
				}
			}
		
		}
		else {
			int v;
			for(v=0; v<limite; v++){
				if(fase_Grupo[v]>maior){
					maior = fase_Grupo[v];
					primeiro_classificado = v;
				}
			}
		}
		printf("\nTIME 1 = %d\nTIME 2= %d\n\n\n",primeiro_classificado,segundo_classificado);
		
		//classificados para oitavas
		
		fase_oitavas[pass] = primeiro_classificado;
		pass++;
		fase_oitavas[pass] = segundo_classificado;
		pass++;
		aux++;
	}
	
	
	printf("\n\n\n\n\n Classificados:\n");
	int i;
	for(i=0; i < 16; i++) {
		printf("Time - %d\n",fase_oitavas[i]);
		
	}
	
	
	printf("Pressione [ENTER] para finaliza...\n");
	getchar();
	return 0;
}
