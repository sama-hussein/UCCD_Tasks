#include<stdio.h>

void main(){
	int grade;
	
	printf("Please enter the number: ");
	scanf(" %d", &grade);
	
	if(grade >= 85) printf("Your rating is Excellent");
	else if(grade >= 75 && grade < 85) {	printf("Your rating is Very Good");	}
	else if(grade >= 65 && grade < 75) {	printf("Your rating is Good");		}
	else if(grade >= 50 && grade < 65) {	printf("Your rating is Normal"); 	}	
	else { printf("Your rating is Failed"); }

	
}