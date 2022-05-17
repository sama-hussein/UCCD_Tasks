#include<stdio.h>

void main(){
	int x;
	
	printf("Please enter the number: ");
	scanf(" %d", &x);
	
	if(x % 2 == 0){
		printf("Number is even");
	} else{
		printf("Number is odd");	
	}
}