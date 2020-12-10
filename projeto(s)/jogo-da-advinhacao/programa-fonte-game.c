#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <locale.h>

void aprensentar_tela_inicial();
void exibir_borda();
void limpar_console();
void exibir_instrucao(int x);
void exibir_cabecalho(int chance);
void exibir_vencedor(int fim);
int gerarNumeroAleatorio();
int processarJogo (int numJ,int numA);


int main () {
	setlocale(LC_ALL, "Portuguese");
	int numAleatorio = gerarNumeroAleatorio();
	int numJogado, fimDeJogo, turno;
	char nivel_dificuldade;
	
	aprensentar_tela_inicial();
	nivel_dificuldade = toupper(getchar());

	switch(nivel_dificuldade) {
		case 'F':
			turno=10;
			limpar_console();
			exibir_instrucao(turno);
			do{
				limpar_console();
				exibir_cabecalho(turno);
				printf("\n\nInforme seu Número: ");
				scanf("%d",&numJogado);
				turno --;
				fimDeJogo = processarJogo(numJogado,numAleatorio);
			}while((turno>0)&&(fimDeJogo!=1));
		break;
		case 'M':
			turno=5;
			limpar_console();
			exibir_instrucao(turno);
			do{
				limpar_console();
				exibir_cabecalho(turno);
				printf("\n\nInforme seu Número: ");
				scanf("%d",&numJogado);
				turno --;
				fimDeJogo = processarJogo(numJogado,numAleatorio);
			}while((turno>0)&&(fimDeJogo!=1));
			break;
		case 'D':
			turno=3;
			limpar_console();
			exibir_instrucao(turno);
			do{
				limpar_console();
				exibir_cabecalho(turno);
				printf("\n\nInforme seu Número: ");
				scanf("%d",&numJogado);
				turno --;
				fimDeJogo = processarJogo(numJogado,numAleatorio);
			}while((turno>0)&&(fimDeJogo!=1));
			break;
		default:
			printf("Informação Invalida\n");
	}
	exibir_vencedor(fimDeJogo);
	return 0;
}

void limpar_console() {
	system("cls");
}

void exibir_borda() {
	int i;
	for(i=0; i<50; i++) {
		printf("*");
	}
}

void aprensentar_tela_inicial() {
	exibir_borda();
	printf("\n\n\n *\t\t\tBEM VINDO\t\t*\n");
	printf(" *\t\tAO JOGO DA ADVINHAÇÃO\t\t*\n\n\n");
	exibir_borda();
	printf("\n\n\tSELECIONE: [F]acil - [M]edio - [D]ificil\n");
}

void exibir_instrucao(int x) {
	exibir_borda();
	printf("\n\t\tINSTRUCOES:\n\n");
	printf("Ja sorteamos um numero para voce.\n\nA partir de agora voce tera %d tentativas.\n\n O numeros esta entre 0 - 100 para acertar o numero.\n",x);
	exibir_borda();
	fflush(stdin);
	getchar();
}

void exibir_cabecalho(int chance) {
	exibir_borda();
	printf("\n\tNúmero de Chances: %d\n",chance);
	exibir_borda();
}

void exibir_vencedor(int fim){
	limpar_console();
	if(fim!=1) {
		printf("\t\t\t    _______________         \n");
		printf("\t\t\t   /               \\       \n"); 
		printf("\t\t\t  /                 \\      \n");
		printf("\t\t\t//                   \\/\\  \n");
		printf("\t\t\t\\|   XXXX     XXXX   | /   \n");
		printf("\t\t\t |   XXXX     XXXX   |/     \n");
		printf("\t\t\t |   XXX       XXX   |      \n");
		printf("\t\t\t |                   |      \n");
		printf("\t\t\t \\__      XXX      __/     \n");
		printf("\t\t\t   |\\     XXX     /|       \n");
		printf("\t\t\t   | |           | |        \n");
		printf("\t\t\t   | I I I I I I I |        \n");
		printf("\t\t\t   |  I I I I I I  |        \n");
		printf("\t\t\t   \\_             _/       \n");
		printf("\t\t\t     \\_         _/         \n");
		printf("\t\t\t       \\_______/           \n");
		printf("\n\n\t\t\tInfelizmente não foi dessa vez!\n\t\t\tTente Novamente...");
	}
	else{
		printf("\n\n\t\t\tVoce é o GRANDE CAMPEAO, meus parabéns!!!\n\n\n");
		printf("\t\t\t       ___________      \n");
		printf("\t\t\t      '._==_==_=_.'     \n");
		printf("\t\t\t      .-\\:      /-.    \n");
		printf("\t\t\t     | (|:.     |) |    \n");
		printf("\t\t\t      '-|:.     |-'     \n");
		printf("\t\t\t        \\::.    /      \n");
		printf("\t\t\t         '::. .'        \n");
		printf("\t\t\t           ) (          \n");
		printf("\t\t\t         _.' '._        \n");
		printf("\t\t\t        '-------'       \n\n");
	}
}

int processarJogo (int numJ,int numA){
	if(numJ==numA){
		return 1;
	}
	else{
		if(numJ>numA){
			printf("\n\n\t\tPassou do Ponto!\n\n O numero secreto e menor.\n\nAperte[ENTER]");
			fflush(stdin);
			getchar();
		}
		else{
			printf("\n\n\t\tEsta Frio!\n\n O numero secreto e maior.\n\nAperte[ENTER]");
			fflush(stdin);
			getchar();
		}
	}
	return 0;
}

int gerarNumeroAleatorio (){
	srand(time(NULL));
	return rand()%100;
}
