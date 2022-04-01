//Lab4

#include<stdio.h>

void main(){
	
	int num;
	printf("enter the answer of 3x4: ");
	scanf(" %d", &num);
	
	while(1){
		if(num == 12){
			printf("thank you");
			break;
		} else {
			printf("Not correct. try again: ");
			scanf(" %d", &num);
		}
	}
}