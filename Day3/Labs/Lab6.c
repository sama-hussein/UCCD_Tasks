#include<stdio.h>

void main(){

int fact=1,n;

printf("please enter the number: ");
scanf(" %d", &n);

while(n){
	fact *= n;
	n--;	
}

printf("factorial: %d", fact);

}