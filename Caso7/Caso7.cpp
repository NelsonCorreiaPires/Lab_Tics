#include <stdio.h>
#include <stdlib.h>
/*
O custo ao consumidor de um carro novo e´a soma do preço de fábrica com o
percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica.
Faça um programa em C que receba o preço de fábrica de um veículo, o
percentual de lucro do distribuidor e o percentual de impostos, calcule e mostre:
a) o valor correspondente ao lucro do distribuidor;
b) o valor correspondente aos impostos;
c) o preço final do veículo
*/
 int main(){
	//preço da fábrica + % de lucro distribuidor + % impostos de lucro / % preco de fábrica
	float PrecoFabr; 
	int PercLucrDistr, PercImpost;
	printf("Preco da fabrica: ");
	scanf ("%f",&PrecoFabr);
	printf("Percentual de lucro do distribuidor: ");
	scanf ("%d",&PercLucrDistr);
	printf("Percentual de impostos: ");
	scanf ("%d",&PercImpost);
	//convertendo os percentuais em valores sobrepostos ao preço da fábrica
	printf("valor do lucro do distribuidor: %d\n", (PrecoFabr * PercLucrDistr)/100);
	printf("valor do imposto: %d\n", (PrecoFabr * PercImpost)/100);
	printf("valor total: %d\n",PrecoFabr + (PrecoFabr * PercLucrDistr)/100 + (PrecoFabr * PercImpost)/100);
	return 0;
}