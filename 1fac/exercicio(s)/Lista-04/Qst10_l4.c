/*Foi feita uma pesquisa entre os habitantes de uma região e coletados os dados de altura e sexo das pessoas.
Faça um programa que leia as informações de 50 pessoas e informe:
- a maior e a menor alturas encontradas;
- a média de altura das mulheres;
- a média de altura da população;
- o percentual de homens na população.*/
#include <stdio.h>
#include <stdlib.h>
#define Q 3
int main ()
{
	int mediaf, contf = 0, contp = 0, mediap, contm = 0, i;
	char sexo;
	float altura, altmaior, altmenor,altm, altf, somap, percm;
	
	for(i=0; i<Q; i++)
	{
		printf("Digite o sexo: ");
		fflush (stdin);
		scanf("%c", &sexo);
		printf("Digite a altura: ");
		fflush (stdin);
		scanf("%f", &altura);
		
		//a maior alturas encontradas
		if(altura>altmaior)
		{
			altmaior += altura;
		}
		if(altura>altmenor)
		{
			altmenor += altura;
		}
				
		//a média de altura das mulheres
		if ((sexo == 'F')|| (sexo == 'f'))
		{
			contf++;
			altf += altura;
		}
		mediaf = altf / contf;
		//o percentual de homens na população
		if ((sexo == 'M')|| (sexo == 'm'))
		{
			contm++;
			altm += altura;			
		}
		percm = Q - contf/100;
			
		//a média de altura da população
		contp++;
		somap += altura;
		mediap = somap / contp;
	}
	
	
	
	printf("maior alturas encontradas %.2f\n", altmaior);
	printf("a menor alturas encontradas %.2f\n", altmenor);
	printf("a media de altura das mulheres %d\n", mediaf);
	printf("o percentual de homens na populacao %d\n", percm);
	printf("a media de altura da população %d\n", mediap);
}
