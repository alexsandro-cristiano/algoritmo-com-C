/*Questão 02 [2,0 pontos]:
Implementar três programas (um para cada estrutura de repetição estudada) que
exibam todas as potências de 2 existentes no intevalo definido por [primeiroNumero, segundoNumero].
*/
#include <stdio.h>
int main()
{
	int segundoNumero,primeiroNumero,i,potencia;
	
	printf("digite primeiro numero: ");
	scanf("%d",&primeiroNumero);
	printf("digite segundo numero: ");
	scanf("%d",&segundoNumero);
	
	/*Com FOR:
	for(i=primeiroNumero;i<=segundoNumero;i*=2)
	{
		printf("%d\n",i);
	}*/
	/*Com WHILE
	i=primeiroNumero;
	while(i<=segundoNumero)
	{
		printf("%d\n",i);
		i*=2;
	}*/
	/*Com DO ... WHILE*/
	i=primeiroNumero;
	do
	{
		printf("%d\n",i);
		i*=2;
	}while(i<=segundoNumero);
}

