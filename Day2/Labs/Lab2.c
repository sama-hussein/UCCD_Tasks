#include <stdio.h>

void main(){
	
	int w_hours, salary;
	
	printf("Please enter your working hours: ");
	scanf(" %d", &w_hours);

	
	salary = w_hours * 50;
	
	if(w_hours < 40){
		salary = salary - (0.1*salary);
	}
	
	printf("your salary is: %d", salary);
	
}