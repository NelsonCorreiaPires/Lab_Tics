#include <stdio.h>
#include <stdlib.h>
/*
Fa�a um programa em C que receba o sal�rio 
de um funcion�rio, calcule e mostre o novo 
sal�rio, sabendo-se que este sofreu um aumento de 25%.
*/
int main (){
	float salario;
	printf("Salario: ");
	scanf ("%f",&Salario);
	salario += (salario*25)/100;
	printf("Novo Salario: %f\n",salario);
	return 0;
}