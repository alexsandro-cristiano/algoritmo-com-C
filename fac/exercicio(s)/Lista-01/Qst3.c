/*QUESTAO 03:
Construir um algoritmo que calcule o peso ideal de uma pessoa, de acordo com o seu sexo e altura, utilizando as seguintes formulas:
X para homens: (72.7*h)-58
X para mulheres: (62.1*h)-44.7/*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("QUESTAO 03:\n");
	printf("Construir um algoritmo que calcule o peso ideal de uma pessoa, de acordo com o seu sexo e altura, utilizando as seguintes formulas:\n");
	printf("homens: (72.7*h)-58\nmulheres: (62.1*h)-44.7\n\n");
	//declaração de variaveis
	char sexo;
	float pesoideal, altura;
	//entrada de dados
	printf("Digite seu sexo: ");
	scanf(" %c",&sexo);
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	//processando dados
	if((sexo == 'm')||(sexo == 'M'))
	{
		pesoideal = (72.7*altura)-58;
	}
	else
	{
		pesoideal = (62.1*altura)-44.7;
	}
	//exibindo dados
	printf("O peso ideal para o sexo %c e de %.2f\n\n", sexo,pesoideal);
	
	system("pause");
	return (0);
}
