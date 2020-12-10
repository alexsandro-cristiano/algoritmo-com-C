/*
	Questão 03 [2,5 pontos]:
Desenvolver um programa que leia um número inteiro
(no intervalo de 1 a 2000) e exiba o número romano
equivalente.
*/
#include <stdio.h>
int main()
{
	//Declarando as variaveis
	 int x,a1000,a500,a100,a50,a10,a9,a8,a7,a6,a5,a4,a3,a2,a1;
	  
	//Inicializando as variaveis
	  a1000 = a500 = a100 = a50 = a10 = a9 = a8 = a7 = a6 = a5 = a4 = a3 = a2 = a1 =0;
	
	//Pedindo um numero ao Usuario
	 printf("Informe um numero: ");
	 scanf("%d",&x);
	
	//Verificando se o numero esta dentro do Intervalo
		if(x>2000)
		 {
		   printf("erro!");
		 }
	//Estando dentro faça
		 else
 		{
   			printf("\n\nNumero Digitado: %d\n\n",x);
   			a1000=x/1000;
   			x=x%1000;
   			a500=x/500;
   			x=x%500;
   			a100=x/100;
   			x=x%100;
   			a50=x/50;
   			x=x%50;
  			 a10=x/10;
   			x=x%10;
   			a9=x/9;
   			x=x%9;
   			a8=x/8;
   			x=x%8;
   			a7=x/7;
   			x=x%7;
   			a6=x/6;
   			x=x%6;
   			a5=x/5;
   			x=x%5;
   			a4=x/4;
   			x=x%4;
   			a3=x/3;
   			x=x%3;
   			a2=x/2;
   			x=x%2;
   			a1=x/1;
   			x=x%1;
 
  			printf("Numero em Romano: ");
			while(a1000!=0)
			{
				printf("M ");
    			a1000-=1;
  			}
  			while(a500!=0)
  			{
   				printf("D ");
  				  a500-=1;
  			}
   			while(a100!=0)
   			{
    			printf("C ");
   				 a100-=1;
   			}
   			while(a50!=0)
   			{
   				printf("L ");
   				a50-=1;
   			}
   			while(a10!=0)
   			{
     			printf("X ");
    			 a10-=1;
   			}
   			while(a9!=0)
  			{
    			printf("IX ");
    			a9-=1;
  			}
  			while(a8!=0)
 			{
    			printf("VIII ");
    			a8-=1;
   			}
  			while(a7!=0)
  			{
  				printf("VII ");
    			a7-=1;
  			}
  			while(a6!=0)
  			{
  				printf("VI ");
  				a6-=1;
  			}
   			while(a5!=0)
   			{
   				printf("V ");
   				 a5-=1;
  			}
  			while(a4!=0)
  			{
  				printf("IV ");
    			a4-=1;
  			}
  			while(a3!=0)
  			{
 			   printf("III ");
  			   a3-=1;
 			}
 			while(a2!=0)
  			{
  				printf("II ");
  				  a2-=1;
  			}
  			 while(a1!=0)
  			{
  			  printf("I ");
  			  a1-=1;
  			}
 }
 
}

