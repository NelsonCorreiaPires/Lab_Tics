#include<stdio.h>

main(){
	int num;
	int res = 1;

	printf("Digite um numero: ");
		scanf("%i", &num);

	for(int i = num; i >= 1; i--){
		if(i != 1){
			printf("%d X ", i);
		}else if (i == 1){
			printf("%d = ", i);
		}

		res = res * i;
	}

	printf("%d", res);
}