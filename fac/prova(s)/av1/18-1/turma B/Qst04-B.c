/*Questão 04 [2,0 pontos]:
Desenvolver um programa que leia um número binário e exiba o número decimal
equivalente. Caso o valor fornecido pelo usuário não represente
um número binário, uma mensagem de erro deve ser exibida.*/
#include <stdio.h>

int main() {
  int numero,potencia,baseDeci;
  
  printf("Digite o numeroero a ser transformado da base 2 para a base 10: ");
  scanf("%d", &numero);
  
  /* inicializando a variavel */
  baseDeci = 0;
  potencia  = 1;
  
  printf("%d na base 10 e': ", numero);
  
  while (numero != 0){
    baseDeci += numero % 10 * potencia;  /* processa um digito binario */
    numero = numero / 10; // anda para o proximo digito
    potencia = potencia * 2; // sobe 1 na potencia de 2
  }
  printf("%d\n", baseDeci);
}
