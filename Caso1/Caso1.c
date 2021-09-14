#include <stdio.h>
#include <stdlib.h>
/*
	 Faça um programa em C que calcule e mostre a área de um quadrado. 
	Sabese que: A = lado * lado.
*/ 

void main (){
	int lado;
	printf ("Digite o lado do quadrado:");
	scanf ("%d",&lado);
	printf ("Area do Quadrado: %d",lado * lado );
}
