#include <stdio.h>
#include<stdlib.h>

void exibir_tabela_preco();

int main () {
	int cod;
	float valor_total=0,arrecadado=0,maiorValor=0,valor_total_da_compra=0;
	char op= 'y';
	
	do{
			while((op=='Y') || (op=='y')) {
				system("cls");
				exibir_tabela_preco();
				printf("Enter with codigo: ");
				scanf("%d",&cod);
		
				switch(cod){
					int quantidade;
					case 123:
						printf("Enter the quantity: ");
						scanf("%d",&quantidade);
						valor_total = 0.10*quantidade;
						printf("Valor do Produto: %.2f\n",valor_total);
						break;
					case 234:
						printf("Enter the quantity: ");
						scanf("%d",&quantidade);
						valor_total = 0.15 * quantidade;
						printf("Valor do Produto: %.2f\n",valor_total);
						break;
					case 345:
						printf("Enter the quantity: ");
						scanf("%d",&quantidade);
						valor_total = 0.12 * quantidade;
						printf("Valor do Produto: %.2f\n",valor_total);
						break;
					case 456:
						printf("Enter the quantity: ");
						scanf("%d",&quantidade);
						valor_total = 0.10 * quantidade;
						printf("Valor do Produto: %.2f\n",valor_total);
						break;
					case 567:
						printf("Enter the quantity: ");
						scanf("%d",&quantidade);
						valor_total = 4.50 * quantidade;
						printf("Valor do Produto: %.2f\n",valor_total);
						break;
					case 678:
						printf("Enter the quantity: ");
						scanf("%d",&quantidade);
						valor_total = 30.0 * quantidade;
						printf("Valor do Produto: %.2f\n",valor_total);
						break;
					case 789:
						printf("Enter the quantity: ");
						scanf("%d",&quantidade);
						valor_total = 8.50 * quantidade;
						printf("Valor do Produto: %.2f\n",valor_total);
						break;
					default:
						printf("This is invalid codigo\n");
				}
		
				valor_total_da_compra+= valor_total;
				arrecadado+=valor_total_da_compra;
				if(valor_total_da_compra>maiorValor){
					maiorValor = valor_total_da_compra;
				}
				printf("\nvalor total da compra: %.2f\n\n",valor_total_da_compra);
				printf("You want continue buy (Y-N) ");
				scanf(" %c", &op);
				system("pause");
			}
			printf("New buy (Y-N) ");
			scanf(" %c", &op);
			
	}while(op=='y'||op=='Y');
	
	printf("\n\n\nO total arrecadado com as compras realizadas: %.2f\n",arrecadado);
	printf("O valor da compra de valor mais alto: %.2f\n",maiorValor);
   
	return 0;
}

void exibir_tabela_preco() {
	
	printf("Codigo\tDescricao\tValor unitario\n");
	printf("123\tPrego\tR$ 0,10\n");
	printf("234\tParafuso\tR$ 0,15\n");
	printf("345\tPorca\tR$ 0,12\n");
	printf("456\tArruela\tR$ 0,10\n");
	printf("567\tTijolo\tR$ 4,50\n");
	printf("678\tCimento\tR$ 30,00\n");
	printf("789\tFita isolante\tR$ 8,50\n");
}


