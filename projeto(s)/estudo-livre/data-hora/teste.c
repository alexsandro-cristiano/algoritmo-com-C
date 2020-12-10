#include <stdio.h>
#include <time.h>
#include <string.h>

/*
	Fazer um programa que crie um arquivo com o nome de log-data_corrente
*/

int main() {
	//pegando data atual
	struct tm *data_hora_atual;
	time_t segundos;
	time(&segundos);
	data_hora_atual = localtime(&segundos);
	//converter interiro para string
	printf("EXIBINDO O INTEIRO DA STRUCT\nDia:.......%d\n",data_hora_atual->tm_mday);
	char data[50];
	sprintf(data,"%d%d%d",data_hora_atual->tm_mday,data_hora_atual->tm_mon+1,data_hora_atual->tm_year);
	printf("EXIBINDO A STRING CONVERTIDA\nDia.......%s\n",data);
	
	char nome_do_arquivo[30] = {"log-"};
	
	printf("\nNome do Arquivo incompleto:%s\n",nome_do_arquivo);
	strcat(nome_do_arquivo,data);
	
	printf("\nNome do Arquivo completo:%s\n",nome_do_arquivo);

	return 0;
}

