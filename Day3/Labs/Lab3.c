#include<stdio.h>

void main(){
	int num, sum=0;
	float avg=0;
	
	for(int i=1; i<=5; i++){
		printf("Enter num %d:", i);
		scanf(" %d", &num);
		sum += num;
	}
	
	avg = sum/5.0;
	
	printf("Sum is: %d", sum);
	printf("\nAvg is: %.3f", avg);

	
}