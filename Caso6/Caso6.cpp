#include <stdio.h>
#include <stdlib.h>
/*
� Fa�a um programa em C que receba o sal�rio de um funcion�rio e o percentual
de aumento, calcule e mostre o valor do aumento e o novo sal�rio.
*/
int main (){
	float salario;
	int PercAumento;
	printf("Salario: ");
	scanf ("%f",&Salario);
	printf("Percentual de aumento: ");
	scanf ("%f",&PercAumento);
	salario += (salario*PercAumento)/100;
	printf("Novo Salario: %f\n",salario);
	return 0;
}