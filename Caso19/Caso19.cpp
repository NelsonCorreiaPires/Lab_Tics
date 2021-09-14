#include<stdio.h>

main(){
	int fib = 0, n1 = 1, n2 = 2;

	printf("0, 1 ");
	for(int i = 1; i < 19; i++){
		fib = n1 + n2;
		n1 = n2;
		n2 = fib;
		printf(",%d ", fib);
	}
}