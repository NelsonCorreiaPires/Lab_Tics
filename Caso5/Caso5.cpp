#include <stdio.h>
#include <stdlib.h>
/*
– Faça um programa em C que receba o custo de um espetáculo teatral e o preço
do convite desse espetáculo. Esse algoritmo devera´ calcular e mostrar a
quantidade de convites que devem ser vendidos para que, pelo menos, o custo do
espetáculo seja alcançado.
*/
int main (){
	int Custo, Convite, quantConvi = 0;
	printf("Custo do Espetaculo: ");
	scanf ("%d",&Custo);
	printf("Custo do Convite: ");
	scanf ("%d",&Convite);
	int quantConvit = custoEspect / precoConvit;
	printf("Deves vender aproximadamente %d Convites para que o custo do Espetaculo seja alcancado \n",quantConvit); 
	return 0;
}