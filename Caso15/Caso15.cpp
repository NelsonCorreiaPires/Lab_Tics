#include <stdio.h>
#include <stdlib.h>
/*
� Fa�a um programa que recebe �n� n�meros calcule e mostre o sucessor de
todos os n�meros inseridos. O programa s�termina quando for digitado um n�mero
negativo.
*/
int main (){
	int num=0;
	do{
		printf("Digite um numero: \n");
		scanf ("%d",&num);
		printf("Sucessor de  %d � \n", num + 1, num);
	}while (num <= 0);
	
	

}