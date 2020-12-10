/* Desenvolva um algoritmo que calcule o consumo de combustível de um automóvel em determinada viagem.
Para isso, devem ser obtidos:
i) o percurso (em quilômetros) da viagem; = dv
ii) o número de quilômetros que o carro percorre com um litro de combustível (km/l); =dl
iii) o preço do litro do combustível. = pc
Ao final, o algoritmo deve determinar:


• A quantidade de combustível, em litros, consumida durante a viagem; = qtdc
• O custo total de combustível.  = ct
*/
#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float dv, dl, pc, ct, qtd;
	
	printf("Digite a distancia em KM da sua viajem: ");
	scanf("%f", &dv);
	
	printf("Digite a distancia que seu carro faz com um litro de combustivel KM/l: ");
	scanf("%f", &dl);
	
	printf("Digite o valor do combustivel em Reais: ");
	scanf("%f", &pc);
	qtd = dl/dv;
	ct = qtd*pc;
	
	printf(" A quantidade de combustivel consumida e %f\n" , qtd);
	
	printf(" Seu custo com combustivel foi RS:%f" , ct);
}
