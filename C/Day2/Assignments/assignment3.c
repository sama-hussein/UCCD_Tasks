#include<stdio.h>

void main(){
	
	int n1,n2,n3,max;
	
	printf("enter num1: ");
	scanf(" %d", &n1);
	printf("enter num2: ");
	scanf(" %d", &n2);
	printf("enter num3: ");
	scanf(" %d", &n3);
	
	if(n1>n2 && n1>n3){	max=n1; }
	else if(n2>n1 && n2>n3){ max=n2; }
	else{ max=n3; }
	
	printf("Maximum number is: %d", max);

	
	
	
	
	
	
	
}