/*Pede-se o desenvolvimento de um programa que leia n valores e determine o maior e o menor elementos do conjunto fornecido.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int x,maior,menor;
	for(int i=0;i<10;i++)
	{
		scanf("%d",&x);
		if(maior<x){
			maior = x;
		}
		else{
			if(menor>x){
				menor = x;
			}
		}
	}
	printf("Maior: %d\nMenor:%d",maior,menor);
}
