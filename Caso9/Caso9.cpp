#include <stdio.h>
#include <stdlib.h>
/*
Pedro comprou um saco de ra��o com peso em quilos. Ele possui dois gatos,
para os quais fornece a quantidade de ra��o em gramas. A quantidade di�ria de
ra��o fornecida para cada gato e� sempre a mesma. Fa�a um programa em C que
receba o peso do saco de ra��o e a quantidade de ra��o fornecida para cada
gato, calcule e mostre quanto restara� de ra��o no saco ap�s cinco dias.
*/
int main (){
	float PesoSaco, QtdForn;
	printf("Peso do saco: ");
	scanf ("%d",&PesoSaco);
	printf("quantidade de ra��o fornecida: ");
	scanf ("%d",&QtdForn);
	QtdForn *= 10;
	PesoSaco -= QtdForn * 0,001;
	printf("Depois de 5 dias o saco ter� %d Kg",PesoSaco);
	return 0;
}