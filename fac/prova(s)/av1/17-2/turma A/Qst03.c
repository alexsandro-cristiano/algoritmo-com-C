/*
Questão 03 [2,0 pontos]:
Dados dois números inteiros A e B, fornecidos pelo usuário, exibir todos os
valores de 1 a B, exceto os divisores de A que deverão ser substituídos pelo caracter #.
Exemplo:
A = 20 e B = 10
Saída: # # 3 # # 6 7 8 9 #
Nota: três programas devem ser implementados – um para cada estrutura de repetição estudada.
*/
#include <stdio.h>

int main() {
	int i,A,B;
	printf("Entre com A e B: ");
	scanf("%d %d",&A,&B);

	for(i=1;i<=B;i++){
		if(A%i==0) {
			printf("# ");
		}
		else {
			printf("%d ",i);
		}
	}
	return 0;
}
