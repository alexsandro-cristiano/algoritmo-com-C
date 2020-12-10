#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

void saudar();
void borda();
void limparTela();
void instrucao(int x);
void cabecalho(int chance);
void ganhador(int fim);
int gerarNumeroAleatorio();
int processarJogo (int numJ,int numA);


int main (){
	int numAleatorio = gerarNumeroAleatorio(),numJogado,fimDeJogo,rodada;
	char nivel;
	
	saudar();
	printf("\n\tESCOLHA A DIFICULDADE:\n");
	printf("\t[F]acil - [M]edio - [D]ificil\n");
	nivel = toupper(getchar());

	switch(nivel) {
		case 'F':
			rodada=10;
			limparTela();
			instrucao(rodada);
			do{
				limparTela();
				cabecalho(rodada);
				printf("\n\nInforme seu Numero: ");
				scanf("%d",&numJogado);
				rodada --;
				fimDeJogo = processarJogo(numJogado,numAleatorio);
			}while((rodada>0)&&(fimDeJogo!=1));
		break;
		case 'M':
			rodada=5;
			limparTela();
			instrucao(rodada);
			do{
				limparTela();
				cabecalho(rodada);
				printf("\n\nInforme seu Numero: ");
				scanf("%d",&numJogado);
				rodada --;
				fimDeJogo = processarJogo(numJogado,numAleatorio);
			}while((rodada>0)&&(fimDeJogo!=1));
			break;
		case 'D':
			rodada=3;
			limparTela();
			instrucao(rodada);
			do{
				limparTela();
				cabecalho(rodada);
				printf("\n\nInforme seu Numero: ");
				scanf("%d",&numJogado);
				rodada --;
				fimDeJogo = processarJogo(numJogado,numAleatorio);
			}while((rodada>0)&&(fimDeJogo!=1));
			break;
		default:
			printf("Erro\n");
	}
	ganhador(fimDeJogo);
	return 0;
}
void saudar(){
	borda();
	printf("\n *\t\t\tBEM VINDO\t\t*\n");
	printf(" *\t\tAO JOGO DA ADVINHACAO\t\t*\n");
	borda();
}
void borda(){
	int i=0;
	while(i<50){
		printf("*");
		i++;
	}
}
void instrucao(int x){
	borda();
	printf("\n\t\tINSTRUCOES:\n\n");
	printf(" Ja sorteamos um numero para voce.\n\n A partir de agora voce tera %d tentativas.\n\n O numeros esta entre 0 - 100 para acertar o numero.\n",x);
	borda();
	fflush(stdin);
	getchar();
}
void cabecalho(int chance){
	borda();
	printf("\n\tNumero de Chances: %d\n",chance);
	borda();
}
void limparTela(){
	system("cls");
}
void ganhador(int fim){
	limparTela();
	if(fim!=1){
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
		printf("\n\n\t\t\tInfelizmente nao foi dessa vez!\n\t\t\tTente Novamente...");
	}
	else{
		printf("\t\t\tVoce é o GRANDE CAMPEAO, meus parabens!!!\n\n\n");
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
