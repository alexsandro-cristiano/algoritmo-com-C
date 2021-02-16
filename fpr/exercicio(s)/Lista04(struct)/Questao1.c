/*
Escreva um trecho de codigo para fazer a criac¸ ´ ao dos novos tipos de dados conforme ˜
solicitado abaixo:
• Horario: composto de hora, minutos e segundos. ´
• Data: composto de dia, mes e ano. ˆ
• Compromisso: composto de uma data, horario e texto que descreve o compromisso.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct data{
	int dia,mes,ano;
}TData;

typedef struct horario{
	int hora;
	int minutos;
	int segundos;
}THorario;

typedef struct compromisso{
	TData dat;
	THorario hr;
	char descricao[50];
}TCompromisso;


int main(){
	TCompromisso comp;
	printf("Entre com os dados do compromisso:\n");
	printf("Data (dd/mm/yyyy): ");
	scanf("%d/%d/%d",&comp.dat.dia,&comp.dat.mes,&comp.dat.ano);
	printf("Horario(HH:mm:ss): ");
	scanf("%d:%d:%d",&comp.hr.hora, &comp.hr.minutos,&comp.hr.segundos);
	printf("Breve Descricao (50 caracteres): ");
	fflush(stdin);
	fgets(comp.descricao,50,stdin);
	
	printf("Data: %.2d / %.2d / %d\n",comp.dat.dia,comp.dat.mes,comp.dat.ano);
	printf("Horario: %.2d : %.2d : %d\n",comp.hr.hora,comp.hr.minutos,comp.hr.segundos);
	printf("Descricao:%s\n",comp.descricao);
	
	return 0;
}
