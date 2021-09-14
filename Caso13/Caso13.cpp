#include<stdio.h>

 main(){
	int som = 0;

	for(int num = 1; num <= 500; num++){
		if(num % 2 != 0 ){
				  if( num % 3 == 0){
				som += num;
			}
		}
	}
	
		printf("Resultado: %i", som);
	
}