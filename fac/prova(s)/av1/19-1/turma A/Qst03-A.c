/*
Questao 03 [2,5 pontos]:
Faca 3 programas (um para cada estrutura de repeticao estudada) que exiba os numeros primos
existentes no intervalo definido por [a,b], onde a e b sao numeros inteiros fornecidos pelo usuario, sendo a . b.
*/
#include <stdio.h>

int main(){
	int a,b,i,j,num_primo,divisores=0;
	
	printf("Informe a: ");
	scanf("%d",&a);
	printf("Informe b: ");
	scanf("%d",&b);
	
	for(i=a;i<=b;i++){
		num_primo = i;
		divisores=0;
		for(j=2;j<=num_primo;j++) {
			if(num_primo % j == 0 ) {
				divisores++;
			}
		}
		if(divisores == 1){
			printf("%d ",num_primo);
		}
	}
}







