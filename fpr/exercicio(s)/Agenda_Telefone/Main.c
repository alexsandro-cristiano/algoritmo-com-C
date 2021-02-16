#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("Iniciando o arquivo para Simular uma Agenda Telefonica\n");
	
	puts("Pressione [ENTER] para finalizar...");
	getchar();
	return 0;
}
