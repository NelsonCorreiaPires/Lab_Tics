#include <stdio.h>
#include <stdlib.h>
/*
– Faça um programa em C que receba o número de horas trabalhadas e o valor
do salário mínimo, calcule e mostre o salário a receber, seguindo estas regras:
a) a hora trabalhada vale a metade do salário mínimo.
b) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo
valor da hora trabalhada.
c) o imposto equivale a 3% do salário bruto.
d) o salário a receber equivale ao salário bruto menos o imposto.
*/
int main (){
	float SalMin, Salario; 
	int HoraTrab, imposto;
	printf("Salário mínimo: ");
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