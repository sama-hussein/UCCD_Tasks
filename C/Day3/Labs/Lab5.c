#include <stdio.h>

void main(void){
	
	int n;
	printf("enter number: ");
	scanf(" %d", &n);
	
	for(int i=1; i<=12; i++){
		printf("6 x %d = %d", i, n*i);
		
		printf("\n");
	}
}