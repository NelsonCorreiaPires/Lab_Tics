#include <stdio.h>
#include <stdlib.h>
/*
Faça um programa que recebe 10 números e ache a média dos pares e a
média dos ímpares.
*/
int main (){
	int num=0;
	int soma = 0, int quant = 0;
	int soma1 = 0, quant1 = 0, quantNum = 0;
	 do {
		printf("Digite um numero: \n");
		scanf ("%d",&num);
		quantNum ++;
		if (num % 2 == 0)
			soma+=num;
			quant++;

	}
	else 
			soma1+=num;
			quant1++;

	}while( quantNum != 10);
	
	printf("Media dos pares: %d\n",(soma/quant) );
	printf("Media dos imoares: %d",(soma1/quant1) );
}