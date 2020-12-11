/*
Questao 05 [2,0 pontos]:
Uma pesquisa foi realizada para saber a area de interesse de
um grupo de pessoas para ingressarem em um curso de graduacao.
Para isto, cada entrevistado forneceu os seguintes dados: sexo (M ou F),
idade e area de interesse (1 ¡V Biomedica, 2 ¡V Humanas ou 3 ¡V Exatas).
Pede-se o desenvolvimento de um programa que leia estes dados
(ate que o usuario opte por terminar a leitura) e informe, ao final:
- Area mais escolhida pelos entrevistados de 16 a 24 anos;
- Area mais escolhida pelos homens;
- Media de idade das pessoas que preferem Exatas;
- Percentual de mulheres em cada area.
*/
#include <stdio.h>

int main() {
	int idade, media, percent, area_interesse;
	char sexo,continuar;
	int contB,contH,contE;
	int fcontB,fcontH,fcontE,hcontB,hcontH,hcontE,cont,soma_idade,contf;
	soma_idade=cont=contB=contE=contH=hcontB=hcontH=hcontE=fcontB=fcontH=fcontE=contf=0;

	do {
		printf("idade: ");
		scanf("%d",&idade);
		printf("Informe o sexo: ");
		fflush(stdin);
		scanf("%c",&sexo);
		printf("Area de interesse: 1- Biomedica, 2- Humanas ou 3- Exatas\nEscolha: ");
		scanf("%d",&area_interesse);

	//	- Area mais escolhida pelos entrevistados de 16 a 24 anos;
		if((idade>15)||(idade<=24)){
			switch(area_interesse) {
				case 1:
					contB++;
					break;
				case 2:
					contH++;
					break;
				case 3:
					contE++;
					break;
			}
		}
	//	- Area mais escolhida pelos homens;
		if(sexo=='h'||sexo=='H'){
			switch(area_interesse) {
				case 1:
					hcontB++;
					break;
				case 2:
					hcontH++;
					break;
				case 3:
					hcontE++;
					break;
			}
		}
	//- Media de idade das pessoas que preferem Exatas;	
		if(area_interesse==3){
			soma_idade+=idade;
			cont++;
		}
	//	- Percentual de mulheres em cada area.
		if(sexo=='f'||sexo=='F'){
			contf++;
			switch(area_interesse) {
				case 1:
					fcontB++;
					break;
				case 2:
					fcontH++;
					break;
				case 3:
					fcontE++;
					break;
			}
		}
		printf("Ler de novo: ");
		fflush(stdin);
		scanf("%c",&continuar);
		printf("\n\n");
	}while(continuar!='n');

//	- Area mais escolhida pelos entrevistados de 16 a 24 anos;
	if((contB>contE)&&(contB>contH)){
		printf("Area mais escolhida pelos entrevistados de 16 a 24 anos: Biomedica\n");
	}
	else {
		if(contE>contH){
			printf("Area mais escolhida pelos entrevistados de 16 a 24 anos: Exatas\n");
		}
		else{
			printf("Area mais escolhida pelos entrevistados de 16 a 24 anos: Humanas\n");
		}
	}
//- Area mais escolhida pelos homens;
	if(hcontB>hcontE){
		if(hcontB>hcontH){
			printf("Area mais escolhida pelos homens: Biomedica\n");
		}
	}
	else {
		if(hcontE>hcontH){
			printf("Area mais escolhida pelos homens: Exatas\n");
		}
		else{
			printf("Area mais escolhida pelos homens: Humanas\n");
		}
	}
//- Media de idade das pessoas que preferem Exatas;
	media = soma_idade/cont;
	printf("Media de idade das pessoas que preferem Exatas = %d\n",media);
//- Percentual de mulheres em cada area.
	printf("Percentual de mulheres em Biomedica = %d\n",((fcontB*contf)/100));
	printf("Percentual de mulheres em Exatas = %d\n",((fcontE*contf)/100));
	printf("Percentual de mulheres em Humanas = %d\n",((fcontH*contf)/100));

	return 0;
}
