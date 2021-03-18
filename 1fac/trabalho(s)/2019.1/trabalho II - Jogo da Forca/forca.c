#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <locale.h>

//Prototipo das Funções
void introducao();
void limparTela();
void pauseTela();
void esconderPalavra(char palavra[], char palavraSecreta[]);
void atualizarPalavraSecreta(char palavra[], char palavraSecreta[], char letra, int tam);
bool validarEntrada(char palavra[], char palavraSecreta[], char letra);
bool buscarLetra(char palavra[], char letra, int tam);
bool finalizarJogo(char palavra[], char palavraSecreta[]);

int main(){
	setlocale(LC_CTYPE, "Portuguese");
	char palavra[40], palavraSecreta[40];
	char letra;
	int err=0;
	
	introducao();
	printf("Entre com a palavra a ser descoberta: ");
	gets(palavra);
	limparTela();
	esconderPalavra(palavra, palavraSecreta);
	printf("Palavra: %s\n\n",palavraSecreta);
	pauseTela();
		
	do{
		printf("Escolha uma letra: ");
		fflush(stdin);
		letra = toupper(getchar());
		if(validarEntrada(palavra,palavraSecreta,letra)){
			printf("\n\nA letra %c foi encontrada na palavra!\n",letra);
			printf("Palavra: %s\n\n",palavraSecreta);
			pauseTela();
		}
		else{
			printf("\n\nA letra %c não foi encontrada na palavra!\n",letra);
			printf("Numero de erros = %d\n",err+1);
			pauseTela();
			err++;
		}
		if(finalizarJogo(palavra,palavraSecreta)){
			err = 8;
		}
		
	}while(err<7);

	if(err == 7){
		limparTela();
		printf("Infelizmente, voce perdeu o jogo. A palavra era %s\n\n",palavra);
		pauseTela();
	}
	else {
		printf("Parabens! Voce descobriu a palavra: %s\n\n",palavra);
		pauseTela();
	}
	return 0;
}

//Funções
void introducao() {
	printf("Jogo da forca:\n\n");
	printf("1. O jogador 1 deverá fornecer uma palavra para ser descoberta\n");
	printf("2. Após o jogador 1 definir a palavra, o jogador 2 tentara descobri-la\n");
	printf("3. O jogo terminara quando o jogador 2 descobrir a palavra ou quando cometer 7 erros\n\n");
	pauseTela();
}

void esconderPalavra(char palavra[], char palavraSecreta[]) {
	int tamanho = strlen(palavra);
	int i;
	for(i=0;i<tamanho;i++) {
		if(palavra[i]!=' ') {
			palavraSecreta[i] = '*';
			palavra[i] = toupper(palavra[i]);
		}
		else {
			palavraSecreta[i] = ' ';
		}
	}
	palavraSecreta[i] = '\0';
}

bool validarEntrada(char palavra[], char palavraSecreta[], char letra){
	int tam = strlen(palavra);
	if(buscarLetra(palavra,letra,tam)) {
		atualizarPalavraSecreta(palavra,palavraSecreta,letra,tam);
		return true;
	}
	return false;
}

bool buscarLetra(char palavra[], char letra, int tam){
	int i;
	for(i=0;i<tam;i++) {
		if(palavra[i]==letra) {
			return true;
		}
	}
	return false;
}

void atualizarPalavraSecreta(char palavra[], char palavraSecreta[], char letra, int tam){
	int i;
	for(i=0;i<tam;i++)
	{
		if(palavra[i]==letra) {
			palavraSecreta[i] = palavra[i];
		}
	}
}

bool finalizarJogo(char palavra[], char palavraSecreta[]){
	if(strcmp(palavra,palavraSecreta)==0){
		return true;
	}
	return false;
}

void pauseTela(){
	printf("Pressione qualquer tecla para continuar. . .");
	fflush(stdin);
	getchar();
	limparTela();
}

void limparTela(){
	system("cls");
}
