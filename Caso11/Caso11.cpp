#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main (){
	/*O Nosso Primeiro passo vai ser Receber os  valores de A, B e C */
	system("color 0a");
	int a,b,c;
	setlocale(LC_ALL,"portuguese");
	float delta = 0.0, x1 = 0.0, x2 = 0.0;
	printf("A Fórmula da Equação do 2º grau e  ax^2 + bx + c = 0 \n");
	system("pause");
	system("cls");
	printf("Digite o Valor de A, B, C\n");
	printf("A -> ");
	scanf("%i",&a);
	printf("\nB -> ");
	scanf("%i",&b);
	printf("\nC -> ");
	scanf("%i",&c);
	/*Ate aqui ja temos os valores de A, B e C 
	O Nosso Segundo Passo vai ser calcular o Delta, deste valores*/
	
	delta =(pow(b,2) - (4*a*c));
	printf("Delta -> %.2f",delta);
	system("cls");
	/*Ate aqui ja temos o nosso delta calculado.
	O Nosso treceiro Passo vai ser verificar se o valor de Delta e correspondente em quais da nossas condicoes*/
	if( delta < 0)
		printf("\nRaizes Imaginárias");
	else 
	if(delta == 0)
	{
		printf("\nA Nossa Equação tem Apenas uma Solução: \n");
			x1 = x2 = (-b)/2*a;
				printf("X1 e X2 -> %.2f , %.2f", x1,x2 );
				printf("CS{ %.2f , %.2f }",x1,x2 );
				
	}
	else 
	if(delta > 0)
	{
		printf("\nA Nossa Equação tem Duas Soluções: \n");
			x1 = (- b + sqrt(delta) )/2*a;
			x2 = (- b - sqrt(delta) )/2*a;
				printf("X1 -> %.2f\n", x1 );
				printf("X2 -> %.2f\n", x2 );
				printf("CS{%.2f ,%.2f}",x1,x2 );
	}
	/* Aqui terminamos com as nossas condicoes, e verificacoes do delta
	O nosso Progrma ira de nos apresentar os valores onde a nossa condicao for
	Verdadeira, e ingorar onde as condicoes forem falsas.*/
	
	return (0);
}
