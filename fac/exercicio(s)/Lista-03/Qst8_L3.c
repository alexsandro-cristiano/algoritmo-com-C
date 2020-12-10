/*QUESTÃO 08: Em uma empresa deseja-se fazer um levantamento sobre algumas informações dos seus 250 funcionários.
Cada funcionário deverá responder um questionário ao qual informará os seguintes dados: matrícula, sexo, idade,
salário e tempo (em anos) de trabalho na empresa. A execução do programa deve exibir os seguintes itens:
a) Matrícula de todos os funcionários que ingressaram na empresa com menos de 21 anos;
b) Quantidade de funcionários do sexo feminino;
c) Média salarial dos homens.*/

#include<stdio.h>
int main()
{
	int mat,idade,temp,sf,s,med,conts,x;
	float sal;
	char sex;
	sf = s = conts = med, x = 0;
	do
	{
		printf("Informe seu sexo: ");
		fflush(stdin);
		scanf("%c",&sex);
		printf("Informe sua matricula: ");
		scanf("%d",&mat);
		printf("Informe sua idade: ");
		scanf("%d",&idade);
		printf("Informe seu salario: ");
		scanf("%f",&sal);
		printf("Informe seu tempo de casa: ");
		scanf("%d",&temp);
    	if(idade < 21)
		{
			printf("matricula %d\n",mat);
		}
    if((sex == 'f')||(sex == 'F'))
		{
			sf++;
		}
		else
		{
			s = s+sal;
			conts++;
			med = s/conts;
		}
    x++;
	}while(x<5);

	printf("Quantidade de funcionarias feminina %d\n",sf);
	printf("Media salarial maculina %d\n",med);
}
