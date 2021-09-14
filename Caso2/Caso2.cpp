#include <stdio.h>
#include <stdlib.h>
/*
Faça um programa em C que receba o valor do salário mínimo e o valor do
salário de um funcionário, calcule e mostre a quantidade de salários mínimos que
esse funcionário ganha.
*/ 

int main (){
	int SalMin, Salario, quant = 0;
	printf ("Salario minimo:");
	scanf ("%d",&SalMin);
	printf ("Salario :");
	scanf ("%d",&Salario);
	quant = ( Salario - SalMin) / 100;
	printf ("Quantidade do  %d salarios minimos é :",quant);
	return 0;
}