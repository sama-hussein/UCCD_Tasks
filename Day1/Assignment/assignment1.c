#include <stdio.h>

void main(void){
	
	int r;
	printf("enter rows: ");
	scanf(" %d", &r);
	
	for(int i=0; i<r-1; i+=2){
		
		for(int j=r; j>=i; j--) printf(" ");
		
		for(int j=0; j<=i; j++) printf("* ");
		
		printf("\n");
	}
}