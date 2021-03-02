#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//prototipo funcao
float total_vendido(int linha,int col,int mat[][col]);
float venda_mesal(int mes,int col,int mat[][col]);
float venda_funcionario(int funcionario,int linha,int mat[][10]);
void indece_venda(int linha,int col,int mat[][col]);
void gerarMatriz (int linha, int col, int mat[][col]);
void fun(int linha,int col,int mat[][10]);

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int linha=12,col=10;
	int funcionario,mes,opcao,mat[linha][col];
	gerarMatriz (linha, col, mat);
	printf("Menu\n1 - Calcular o total vendido durante o ano\n2 - Informe um mes para determinar o total vendido\n");
	printf("3 - Informe um funcionário para determinar o total vendido durante o ano\n");
	printf("4 - Determinar o mês com maior índice de vendas\n5 - Determinar o funcionário que menos vendeu durante o ano\n");
	printf("Escolha uma opcao: ");
	scanf("%d",&opcao);
	printf("\n\n");
	switch(opcao){
		case 1:
			printf("Total Anual de Vendas: R$ %.2f\n",total_vendido(linha,col,mat));
			break;
		case 2:
			printf("Informe o mes (1 - 12): ");
			scanf("%d",&mes);
			printf("Total Mensal de Vendas: R$ %.2f\n",venda_mesal(--mes,col,mat));
			break;
		case 3:
			printf("Informe o funcionario (1 - 10): ");
			scanf("%d",&funcionario);
			printf("Total Mensal de Vendas: R$ %.2f\n",venda_funcionario(--funcionario,linha,mat));
			break;
		case 4:
			indece_venda(linha,col,mat);
			break;
		case 5:
			fun(linha,col,mat);
			break;	
	}
}

//funcao
void gerarMatriz (int linha, int col, int mat[][col]){
	srand(time(NULL));
	int i,j;
	for(i=0;i<linha;i++){
		for(j=0;j<col;j++){
			//scanf("%d",&mat[i][j]);
			mat[i][j] = rand ()% 100;
		
		}
	}
}

float total_vendido(int linha,int col,int mat[][col]){
	int i,j;
	float soma=0;
	for(i=0;i<linha;i++) {
		for(j=0;j<col;j++) {
			soma += mat[i][j];
		}
	}
	return soma;
}

float venda_mesal(int mes,int col,int mat[][col]){
	int i=mes,j;
	float vendas=0;
	while(i==mes){
		for(j=0;j<col;j++){
			vendas = vendas + mat[i][j];
		}
		i++;
	}
	return vendas;
}

float venda_funcionario(int funcionario,int linha,int mat[][10]){
	int i,coluna_funcionario=funcionario;
	float venda_funcionario=0;
	while(coluna_funcionario==funcionario){
		for(i=0;i<linha;i++){
			venda_funcionario = venda_funcionario + mat[i][coluna_funcionario];
		}
		coluna_funcionario++;
	}
	return venda_funcionario;
}

void indece_venda(int linha,int col,int mat[][10]){
	int soma=0,mes,venda=-9999,i,j;
	for(i=0;i<linha;i++){
		for(j=0;j<col;j++){
			soma = soma + mat[i][j];
		}
		if(soma>venda){
			venda = soma;
			mes = i;
			soma = 0 ;
		}
	}
	printf("Mes %d e o maior mes com R$: %d",mes+1,venda);
	
}

void fun(int linha,int col,int mat[][10]){
	int soma=0,funcionario=9999,i,j;
	for(i=0;i<linha;i++){
		for(j=0;j<col;j++){
			soma = soma + mat[i][j];
		}
		if(soma<funcionario){
			funcionario = soma;
			soma = 0 ;
		}
	}
	printf("Funcionario %d",funcionario);
}
