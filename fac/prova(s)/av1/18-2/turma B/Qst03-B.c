/*Questão 03 [2,5 pontos]:
Implementar um programa que leia diversos números inteiros positivos até que a terceira potência de 2 seja
informada pelo usuário. Ao final, devem ser exibidos:
a. Total de valores digitados;
b. Média dos valores entre a primeira e segunda potências de 2.
Observação: sempre que um valor não positivo for digitado, uma mensagem de erro deverá ser exibida ao usuário.
E estes valores não poderão ser considerados no cálculo de cada um dos itens solicitados.
*/
#include <stdio.h>
int main()
{
	int num,total_valor,s,cont,media;
	//inicializando as variaveis
	num = total_valor = s = cont = media = 0;
	
	while(num!=4)
	{
		printf("Digite um numero: ");
		scanf("%d",&num);
		if(num<0)
		{
			printf("erro!\n\n");
		}
		else
		{
			total_valor+=num;
			if(num<=2)
			{
				s+=num;
				cont++;
				media = s/cont;
			}
		}
	}
	printf("Total de Valores Digitados = %d\n",total_valor);
	printf("Media dos valores entre a primeira e a segunda potencia de 2 = %d\n",media);
}

