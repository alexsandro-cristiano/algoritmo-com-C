/*17-2-A
Questão 05 [2,0 pontos]:
Pede-se o desenvolvimento de uma função que, dados dois vetores
de reais A e B, com quantA e quantB elementos, respectivamente,
crie um vetor C com todos os elementos de A que não se encontram em B.
*/
#include <stdio.h>
#include <stdlib.h>

void fun(int quantA, int quantB, int vetA[], int vetB[]);

int main() {
	int vetA[5], vetB[5], quantA, quantB;
	fun(quantA,quantB,vetA,vetB);
}

void fun(int quantA, int quantB, int vetA[], int vetB[]){
	int i, vetC[quantA];
	for(i=0; i< quantB; i++)
	{
		if(vetA[i] != vetB[i]) {
			vetC[i] = vetA[i];
		}
	}
}
