/*
Fac¸a um programa que receba 6 numeros inteiros e mostre: ´
• Os numeros pares digitados; ´
• A soma dos numeros pares digitados; ´
• Os numeros ´ ´impares digitados;
• A quantidade de numeros ´ ´impares digitados;
*/

#include <stdio.h>

void exibirNumerosPares(int vetor[]);
void exibirNumerosImpares(int vetor[]);
int somarNumPares(int vetor[]);
int descobirQuantidadeNumImpar(int vetor[]);

int main() {
	int numeros[6];
	int i;

	printf("Digite 6 numeros inteiros: \n");
	for(i=0; i<6; i++) {
		printf("Digite %d: ", i+1);
		scanf("%d", &numeros[i]);
	}

	printf("\n");
	exibirNumerosPares(numeros);
	printf("Soma dos numeros pares digitados: %d \n", somarNumPares(numeros));
	exibirNumerosImpares(numeros);
	printf("Quantidade dos numeros impares digitados: %d \n", descobirQuantidadeNumImpar(numeros));

	return 0;
}

void exibirNumerosPares(int vetor[]) {
	int i;

	printf("Numeros Pares: ");
	for(i=0; i<6; i++) {
		if(vetor[i] % 2 == 0) {
			printf("%d ", vetor[i]);
		}
	}
	printf("\n");
}

int somarNumPares(int vetor[]) {
	int i, soma = 0;
	for(i=0; i<6; i++) {
		if(vetor[i] % 2 == 0) {
			soma += vetor[i];
		}
	}
	return soma;
}

void exibirNumerosImpares(int vetor[]) {
	int i;
	printf("Numeros Impares: ");
	for(i=0; i<6; i++) {
		if(vetor[i] % 2 != 0) {
			printf("%d ", vetor[i]);
		}
	}
	printf("\n");
}

int descobirQuantidadeNumImpar(int vetor[]) {
	int i, quant = 0;

	for(i=0; i<6; i++) {
		if(vetor[i] % 2 != 0) {
			quant++;
		}
	}

	return quant;
}
