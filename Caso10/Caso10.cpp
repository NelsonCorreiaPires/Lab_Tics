#include <stdio.h>
#include <stdlib.h>
/*
� Sabe-se que o quilowatt de energia custa um quinto do sal�rio m�nimo. Fa�a
um programa em C que receba o valor do sal�rio m�nimo e a quantidade de
quilowatts consumida por uma resid�ncia. Calcule e mostre:
a) o valor de cada quilowatt;
b) o valor a ser pago por essa resid�ncia;
c) o valor a ser pago com desconto de 15%.
*/
int main (){
	float SalMin, QtdKwtt, A_Pagar;
	printf("Salario Minimo: ");
	scanf ("%f",&SalMin);
	printf("Quantidade de quilowatts: ");
	scanf ("%f",&QtdKwtt);
	printf("Cada kilowatts custa: $ %f",SalMin / 5);
	A_Pagar = (QtdKwtt*SalMin) /5 ;
	printf("essa residencia vai pagr: $ %d\n",A_Pagar);
	printf("Com desconto de 15 por cento:  $ %d\n",A_Pagar*= 15/100;);
	return 0;
}