/*Questão 03 [3,0 pontos]:
Desenvolver um programa que permaneça lendo valores até que o
número 0 seja fornecido.
A sua execução deve exibir, para cada número digitado
(excluindo o 0), o número de vezes que apareceu,
em sequência, como ilustrado no exemplo abaixo:
1 1 6 6 6 2 1 1 1 4 4 3 3 3 3 2 2 0
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num, x, cont = 0;
  	printf("digite um numero: ");
	scanf("%d", &num);
    x=num;
    cont++;
    
	do{
		printf("digite um numero: ");
		scanf("%d", &num);

		if(num == x){
			cont++;
		}
		else{
			printf("%d - %d vez(es)\n", x, cont);
			cont = 1;
			x = num;
		}
	}while(num!=0);
}

