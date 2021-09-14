#include<stdio.h>

main(){
	float alt = 0.0, maior = 0.0, menor = 0.0;

	for(int i = 1; i <= 4; i++){
		printf("Digite a sua altura a altura: ");
			scanf("%f", &altura);

		if(i == 1){
			maior = altura;
			menor = altura;
		}

		if(altura > maior){
			maior = altura;
		}

		if(altura < menor){
			menor = altura;		
		}
	}

	printf("\n Altura menor : %.2f", menor);
	printf("\n Altura maior : %.2f", maior);