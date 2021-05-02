#include <stdio.h>

int main () {
	
	int qtda_subRede=32;
	int host=8;
	int i,j;
	
	printf("Digite a quantidade de sub redes: ");
	scanf("%d",&qtda_subRede);
	printf("Digite a quantidade de host: ");
	scanf("%d",&host);
	printf("Faixas de SubRede\n");
	
	int cont=0;
	for(i=0;i<qtda_subRede;i++) {
		printf("Rede %d: ", i+1);
		for(j=0;j<host;j++){
			printf("%d ",cont);
			cont++;
		}
		printf("\n");
	}
}
