#include <stdio.h>
#include <stdlib.h>
/*
– Faça um programa que recebe “n” números calcule e mostre o sucessor de
todos os números inseridos. O programa só´termina quando for digitado um número
negativo.
*/
int main (){
	int num=0;
	do{
		printf("Digite um numero: \n");
		scanf ("%d",&num);
		printf("Sucessor de  %d é \n", num + 1, num);
	}while (num <= 0);
	
	

}