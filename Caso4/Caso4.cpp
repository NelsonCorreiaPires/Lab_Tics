#include <stdio.h>
#include <stdlib.h>
/*
� Fa�a um programa em C que receba o n�mero de horas trabalhadas e o valor
do sal�rio m�nimo, calcule e mostre o sal�rio a receber, seguindo estas regras:
a) a hora trabalhada vale a metade do sal�rio m�nimo.
b) o sal�rio bruto equivale ao n�mero de horas trabalhadas multiplicado pelo
valor da hora trabalhada.
c) o imposto equivale a 3% do sal�rio bruto.
d) o sal�rio a receber equivale ao sal�rio bruto menos o imposto.
*/
int main (){
	float SalMin, Salario; 
	int HoraTrab, imposto;
	printf("Sal�rio m�nimo: ");
	scanf ("%f",&SalMin);
	printf("Horas trabalhadas: ");
	scanf ("%d",&HoraTrab);
	ValHoraTrab = SalMin/2;
	SalBrut = HoraTrab * ValHoraTrab;
	imposto = (SalBrut * 0,3);
	Salario = SalBrut - imposto;
	printf("Salario a receber: %d \n",Salario);
	return 0;
}