#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main (){
	int num;
	setlocale(LC_ALL,"portuguese");
	system ("color 0A");
	printf("Digite um Número de 5 Digitos: ");
	scanf("%i",&num);
	system("cls");
	if(num > 10000 && num < 99999)
		int prim = (num/10000) %10;
		int segun = (num/1000)%10;
		int penul = (num/10)%10;
		int ultim = (num/1)%10;
		
		if ( prim == ultim && segun == penul)
			printf("Números Palindromes");
		else
			printf("Números Não Palindromes");
	else{
		printf("Números Insuficiente, Digite Número de 5 digitos");
	
	}
	
	return (0);
}
