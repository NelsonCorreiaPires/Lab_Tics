#include <stdio.h>
#include <stdlib.h>
/*
Fa�a um programa em C que receba o valor do sal�rio m�nimo e o valor do
sal�rio de um funcion�rio, calcule e mostre a quantidade de sal�rios m�nimos que
esse funcion�rio ganha.
*/ 

int main (){
	int SalMin, Salario, quant = 0;
	printf ("Salario minimo:");
	scanf ("%d",&SalMin);
	printf ("Salario :");
	scanf ("%d",&Salario);
	quant = ( Salario - SalMin) / 100;
	printf ("Quantidade do  %d salarios minimos � :",quant);
	return 0;
}