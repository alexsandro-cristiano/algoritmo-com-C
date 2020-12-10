
/*Questão 02 [3,0 pontos]:
Desenvolver um programa que simule uma calculadora que realize as seguintes operações:
adição (+), subtração (-), multiplicação (x), divisão (/) e logaritmo (L). O sistema deve permanecer apresentando
um menu
ao usuário até que este opte pela opção de saída (S). Se a opção escolhida for uma das 4 operações básicas,
devem ser
solicitados os dois operadores; caso escolha logaritmo, devem ser solicitados o número (logaritmando) e a base.
Nota: logba = c ? bc = a
Observação: todos os operandos são números reais, assim como a base e o logaritmando. Porém, o resultado do logaritmo
deverá ser inteiro.*/
#include <stdio.h>
#include <ctype.h>
int main()
{
	int c;
	float a,b,res;
	char esc;
	
	do{
		printf("\t\nCalculadora:\n");
		printf("\tA- Adicao (+)\n");
		printf("\tS- Subtracao (-)\n");
		printf("\tM- Multiplicacao (*)\n");
		printf("\tD- Divisao (/)\n");
		printf("\tL- Logaritmo (L)\n");
		printf("\tX- Sair da Calculadora\n");
		printf("Escolha uma opcao: ");
		fflush(stdin);
		scanf("%c",&esc);
		esc=toupper(esc);
	
		switch (esc)
		{
			case 'A':
				printf("Digite a:");
				scanf("%f",&a);
				printf("Digite b: ");
				scanf("%f",&b);
				res = a+b;
				printf("Resultado = %.2f\n",res);
				break;
			case 'S':
				printf("Digite a:");
				scanf("%f",&a);
				printf("Digite b: ");
				scanf("%f",&b);
				res = a-b;
				printf("Resultado = %.2f\n",res);
				break;
			case 'M':
				printf("Digite a:");
				scanf("%f",&a);
				printf("Digite b: ");
				scanf("%f",&b);
				res = a*b;
				printf("Resultado = %.2f\n",res);
				break;
			case 'D':
				printf("Digite a:");
				scanf("%f",&a);
				printf("Digite b: ");
				scanf("%f",&b);
				res = a/b;
				printf("Resultado = %.2f\n",res);
				break;
			case 'L':
				printf("Digite base:");
				scanf("%f",&a);
				printf("Digite logaritmando: ");
				scanf("%f",&b);
				while(b>1)
				{
					b/=a;
					c++;
				}
				printf("Resultado = %d\n",c);
				break;
			default:
				printf("Voce encerrou a calculadora!\n");
		}
	}while(esc!='X');
}
