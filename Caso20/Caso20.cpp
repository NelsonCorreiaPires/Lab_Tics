#include <stdio.h>
main(){
	float alturaC=1.50,alturaJ=1.10;
	int anos=0;
	
	
	while(alturaC>alturaJ){
		alturaC = alturaC + 0.02;
		alturaJ+= alturaJ + 0.03;
		anos = anos + 1;
	}
	
	printf("serao precisos %d anos para que Juca seja maior que Chico\n",anos);
	
}