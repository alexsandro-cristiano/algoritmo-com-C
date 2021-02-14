/*FAETERJ-Rio
  FAC Trabalho I- 2019.2
  Professor: Leonardo Vianna - Turma A
  Alunos: Alexsandro Cristiano Gonçalves da Silva e Rogério Rocha de Oliveira
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//Tamanho do vetor
#define CAP 4

//Prototipos das Funções Usadas no Programa:
int fun_inseri (int vet[],int tam,int *quant,int numN);
int fun_remove (int vet[],int *quant,int numR);
int fun_altera (int vet[],int tam,int *quant,int numA,int numN);
int fun_busca (int vet[],int quant,int numP);
void fun_exibe (int vet[],int quant);

//Função Principal:
int main ()
{
//Declaração das Variaveis:
	int L[CAP]={0},quant=0,numNovo,numPerd,numAlte,retorno;
	char esc;
//Processamento dos Dados:
	do
	{
		printf("\tVoce iniciou o Programa\n\tSeja Bem-Vindo!");
		printf("\n\n\tMenu de Opcao:\n[I]nsercao de novo elemento\n[R]emocao de elemento\n[A]ltercao de um elemento");
		printf("\n[B]uscar elemento\n[E]xibir elemento\n[S]air do programa\n");
		printf("Escolha uma Opcao: ");
		fflush(stdin);
		scanf("%c",&esc);
		esc=toupper(esc);
		switch(esc) 
		{
			case 'I':
				printf("\n\n\t\t Voce escolheu a opcao Inserir elementos na Lista!\n\n");
				printf("Inserir o Elemento: ");
				scanf("%d",&numNovo);
				retorno=fun_inseri (L,CAP,&quant,numNovo);
				if(retorno==1)
				{
					printf("\n\n\t\t Parabens!!!\n\t\tO elemento foi Inserido :D\n\n");
				}
				else
				{
					printf("\n\n\t\t E uma pena, sua Lista esta Lotada :(\n\n");
				}
				system("pause");
				system("cls");
				break;
			case 'R':
				printf("\n\n\t\t Voce escolheu a opcao Remover elementos na Lista!\n\n");
				//Exibindo os elementos da Lista para escolha do usuario
				printf("Lista: ");
				fun_exibe (L,quant);
				printf("Qual elemento sera removido:? ");
				scanf("%d",&numAlte);
				retorno=fun_remove (L,&quant,numAlte);
				if(retorno==1)
				{
					printf("\n\n\t\t Parabens!!!\n\t\tO elemento foi Removido :D\n\n");
				}
				else
				{
					printf("\n\n\t\t O elemento nao pode ser foi removido\n\t\tPorFavor, verifique o elemento informado :(\n\n");
				}
				system("pause");
				system("cls");
				break;
			case 'A':
				printf("\n\n\t\t Voce escolheu a opcao Alterar elemento na Lista!\n\n");
				//Exibindo os elementos do Vetor para escolha
				printf("Lista: ");
				fun_exibe (L,quant);
				//Recebendo valores que seram alterados
				printf("Qual elemento sera substituido:? ");
				scanf("%d",&numAlte);
				printf("Qual sera o novo elemento:? ");
				scanf("%d",&numNovo);
				//chamando a função que altera os numeros
				retorno= fun_altera (L,CAP,&quant,numAlte,numNovo);
				if(retorno==1)
				{
					printf("\n\n\t\t Parabens!!!\n\t\tO elemento foi Alterado :D\n\n");
				}
				else
				{
					printf("\n\n\t\t Nao conseguimos realizar a Alteracao do elemento.\n\t\tPorFavor, verifique o elemento informado :(\n\t\tPor favor verifique os numeros informados.\n\n");
				}
				system("pause");
				system("cls");
				break;
			case 'B':
				printf("\n\n\t\t Voce escolheu a opcao Buscar elemento na Lista!\n\n");
				printf("Qual elemento vamos procurar:? ");
				scanf("%d",&numPerd);
				retorno =fun_busca (L,quant,numPerd);
				if(retorno!=-1)
				{
					printf("\nO elemento %d que voce procura esta na posicao %d da lista\n\n",numPerd,retorno);
				}
				else
				{
					printf("\nO elemento %d que voce procura nao existe nesta lista :(\n\n",numPerd);
				}
				system("pause");
				system("cls");
				break;
			case 'E':
				printf("\n\n\t\t Voce escolheu a opcao Exibir elementos da Lista!\n\n");
				printf("Lista: ");
				fun_exibe (L,quant);
				system("pause");
				system("cls");
				break;
			case 'S':
				printf("\n\n\n\t\tVoce finalizou o programa!\n\t\tObrigado,ate a proxima :D\n\n");
				system("pause");
				system("cls");
				break;
			default:
				printf("\n\n\t\t Opcao Invalida!\n\n");
				system("pause");
				system("cls");
		}
	}while(esc!='S');
}

//Funções utilizadas no programa

int fun_inseri (int vet[],int tam,int *quant,int numN)
{
	int ind=*quant;
	if(*quant<tam) //verificando se tem espaço na Lista
	{
		ind--;
		while(vet[ind]>numN)//bug de loop infinito.
		{
			printf("no loop doidao");
			vet[ind+1]=vet[ind];
			if(ind>=0)
			{
				ind--;
			}
		}
		vet[ind+1]=numN;
		(*quant)++;
		return 1; // retornando que a inserção do numero foi um sucesso
	}
	else
	{
		return 0; // retornando que nao tem mais espaço na lista
	}
}

int fun_remove (int vet[],int *quant,int numR)
{
	int i=0,ind,volta=0;
	
	while(i<*quant)
	{
		if(vet[i]==numR)
		{
			for(ind=i+1;ind<*quant;ind++)
			{
				vet[ind-1]=vet[ind];
			}
			(*quant)--;
			volta=1;
		}
		else
		{
			i++;
		}
	}
	return volta;
}

int fun_altera (int vet[],int tam,int *quant,int numA,int numN)
{
	int i,volta, numRepet=*quant;
	
	volta = fun_remove (vet,quant,numA);//removendo da lista o numero solicitado para alteração
	numRepet-=*quant;//verificando se existe repetição de elementos removidos
	
	if(volta==1)//verificando se o numero existe na lista e se foi removido
	{
		//inserindo a quantidade de numeros que foi pedido para alterar
		for(i=0;i<numRepet;i++)
		{
			volta = fun_inseri(vet,tam,quant,numN);
		}
		return volta;
	}
	else
	{
		return 0;//caso nao consiga alterar o numero retorna 0
	}
}

int fun_busca (int vet[],int quant,int numP)
{
	int i; //declarando a variavel que serve de indice para o vetor
	for(i=0;i<quant;i++) //Varrendo a lista
	{
		if(vet[i]==numP) //Verificando se existe o numero pedido na lista
		{
			return i; //retornando a primeira ocorrencia do numero pedido
		}
	}
	return -1;//retornando que nao foi encontrado o numero pedido
}

void fun_exibe (int vet[],int quant)
{
	int i,j; //declarando a variavel que serve de indice para o vetor
	if(quant>0)//verificando se existe elemento na lista
	{
		for(i=0;i<quant;i++)//Varrendo a lista
		{
			printf(" %d " ,vet[i]); //Exibindo todos os elementos da lista
		}
		printf("\n\n");
	}
	else
	{
		printf("\tVoce nao Possui Elementos na Lista :/\n\n"); //Informando que nao exites elemento na lista
	}
}
