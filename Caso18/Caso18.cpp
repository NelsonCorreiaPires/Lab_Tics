#include<stdio.h>
main(){
	
	int dia[30], quartos = 30;
	float tot_pag, ganho = 0.0;
	char nome[2][20];
	for(int i = 1; i <= quartos; i++){
		printf("Digite o nome do Cliente: ");
			scanf("%s", &nome[i]);

		printf("Quantos dias vai ficar?: ");
			scanf("%d", &dia[i]);
	}
	for(int i = 1; i <= quartos; i++){
		tot_pag = 0.0;

		if(dia[i] < 15){
			tot_pag = (dia[i] * 4.00);
		}else 
			if(diaria[i] == 15){
			tot_pag =  (dia[i] * 3.60);
		}else{
			tot_pag = (dia[i] * 3.00);
		}

		printf("O Sr %s tem uma divida no valor de: %.2f USD\n", nome[i], conta);
		ganho += tot_pag ;
	}

	printf("Lucro do Hotel: %.2f USD", ganho);

}