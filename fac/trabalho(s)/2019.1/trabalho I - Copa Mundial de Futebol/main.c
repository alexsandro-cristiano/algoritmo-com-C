#include <stdio.h>

/*
Representando a quantidade de ponto que o time recebe se
	ganhar = 3 pontos
	empatar = 1 ponto
*/
#define VITORIA 3
#define EMPATE 1

int main() {
	
	const int SELECOES = 4, TIME = 4, GRUPO = 8;
	int fase_Grupo[SELECOES], oitavas[16];
	int i, aux = 1, marcador = 0;
	
	while(aux <= GRUPO){
		
		//definir fim do grupo
		for(i=0; i < TIME; i++) {
			marcador++;
		}
		//marcador--;
		
		//jogos
		printf("\tGrupo %d\n", aux);

		aux++;
	}
	
	/*Exibir Vetor das Oitavas de final
	for(i=0; i < 16; i++) {
		
	}*/
	
	
	printf("Pressione [ENTER] para finaliza...\n");
	getchar();
	return 0;
}
