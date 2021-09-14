#include <stdio.h>
#include <stdlib.h>
/*
– Faça um programa em C que receba o ano de 
nascimento de uma pessoa e oano atual, 
calcule e mostre:
a) a idade dessa pessoa;
b) quantos anos ela terá em 2050.*/ 

int main (){
	int AnoNasc, AnoActual;
	//coletando dados
	printf ("Ano de nascimento:");
	scanf ("%d",&AnoNasc);
	printf ("Ano Actual:");
	scanf ("%d",&AnoActual);
	//exibindo resultados
	printf ("Tens %d anos de idade\n",AnoActual-AnoNasc);
	printf ("Em 2050 teras %d anos de idade\n",(2050-AnoNasc) );
	return 0;
}