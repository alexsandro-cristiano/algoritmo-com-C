#include<stdio.h>
#include<stdbool.h>

int menor(int a,int b) {
	printf("\n menor \n");
	return (a<b)?a:b;
}

int mdc(int n1,int n2) {
	int i,m=menor(n1,n2);
	
	printf("\n mdc \n %d", m);
	for(i=m; i>=1; i--) {
		printf("--loop mdc--\n %d ",i);
		if((n1%i==0)&&(n2%i==0)) {
			return i;
		}
	}
}

int funD(int e, int p, int q) {
	int numero = 2;

	while(true) {
		
		if( (e*numero) % ((p-1)*(q-1)) == 1 ) {
			return numero;
		}
		numero++;
	}
}

int num_elevado(int base, int exponte) {
	int i, soma=1;
	for(i=0;i<exponte;i++){
		soma*=base;
	}
	return soma;
}

int main() {
	int p,q,n,e,d;
	int num_orig = 2;
	int num_crip;

	p= 3;
	q = 11;
	n = (p*q);

	int numero = 3;

	while(true) {
		printf("--loop para encontrar e --\n%d",numero);
		if(mdc(numero,n) == 1) {
			e = numero;
			break;
		}
		numero++;
	}

	printf("\n\n\n\n");
	d = funD(e, p, q);
	
	int f = num_elevado(num_orig, 7);
	printf("\n\n\n f = %d\n\n\n\n", f );
	
	num_crip = ( f % n );
	printf("------ DADOS ------ \n P = %d\n Q = %d\n N = %d\n E = %d\n D = %d\n Numero Original = %d\n Numero Criptografado = %d\n",p,q,n,e,d, num_orig,num_crip);
}
