/*Implementar um programa no qual o usuário informa um número e verifica-se se ele é um número triangular.
Obs.: Um número é triangular quando ele for resultado do produto de três números consecutivos.
Exemplo: 24 = 2 x 3 x 4.

	1 x 2 x 3 = 6
	2 x 3 x 4 = 24
	3 x 4 x 5 = 60
	4 x 5 x 6 = 120
	5 x 6 x 7 = 210
	7 x 8 x 9 = 504

*/

#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int num,tri,prod,pri,sec,ter;
	prinf("informe um numero: ");
	scanf("%d",&num);
	pri =1;
	sec =2;
	ter =3;
	
	while(pri<=7){
		prod = pri*sec*ter;
		if(num==prod){
			tri=1;
		}
		pri++;sec++;ter++;
	}
}
