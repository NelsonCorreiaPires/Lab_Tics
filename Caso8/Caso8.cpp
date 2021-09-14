#include <stdio.h>
#include <stdlib.h>
/*
Faça um programa em C que receba o salário 
de um funcionário, calcule e mostre o novo 
salário, sabendo-se que este sofreu um aumento de 25%.
*/
int main (){
	float salario;
	printf("Salario: ");
	scanf ("%f",&Salario);
	salario += (salario*25)/100;
	printf("Novo Salario: %f\n",salario);
	return 0;
}