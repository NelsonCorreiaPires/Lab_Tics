#include <stdio.h>
#include <stdlib.h>
/*
O custo ao consumidor de um carro novo e�a soma do pre�o de f�brica com o
percentual de lucro do distribuidor e dos impostos aplicados ao pre�o de f�brica.
Fa�a um programa em C que receba o pre�o de f�brica de um ve�culo, o
percentual de lucro do distribuidor e o percentual de impostos, calcule e mostre:
a) o valor correspondente ao lucro do distribuidor;
b) o valor correspondente aos impostos;
c) o pre�o final do ve�culo
*/
 int main(){
	//pre�o da f�brica + % de lucro distribuidor + % impostos de lucro / % preco de f�brica
	float PrecoFabr; 
	int PercLucrDistr, PercImpost;
	printf("Preco da fabrica: ");
	scanf ("%f",&PrecoFabr);
	printf("Percentual de lucro do distribuidor: ");
	scanf ("%d",&PercLucrDistr);
	printf("Percentual de impostos: ");
	scanf ("%d",&PercImpost);
	//convertendo os percentuais em valores sobrepostos ao pre�o da f�brica
	printf("valor do lucro do distribuidor: %d\n", (PrecoFabr * PercLucrDistr)/100);
	printf("valor do imposto: %d\n", (PrecoFabr * PercImpost)/100);
	printf("valor total: %d\n",PrecoFabr + (PrecoFabr * PercLucrDistr)/100 + (PrecoFabr * PercImpost)/100);
	return 0;
}