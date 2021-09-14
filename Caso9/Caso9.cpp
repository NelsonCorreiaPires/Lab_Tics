#include <stdio.h>
#include <stdlib.h>
/*
Pedro comprou um saco de ração com peso em quilos. Ele possui dois gatos,
para os quais fornece a quantidade de ração em gramas. A quantidade diária de
ração fornecida para cada gato e´ sempre a mesma. Faça um programa em C que
receba o peso do saco de ração e a quantidade de ração fornecida para cada
gato, calcule e mostre quanto restara´ de ração no saco após cinco dias.
*/
int main (){
	float PesoSaco, QtdForn;
	printf("Peso do saco: ");
	scanf ("%d",&PesoSaco);
	printf("quantidade de ração fornecida: ");
	scanf ("%d",&QtdForn);
	QtdForn *= 10;
	PesoSaco -= QtdForn * 0,001;
	printf("Depois de 5 dias o saco terá %d Kg",PesoSaco);
	return 0;
}