#include<stdio.h>

int get_max(int a, int b);

void main(){

int x,y,z;
printf("Please enter number 1: ");
scanf(" %d", &x);

printf("Please enter number 2: ");
scanf(" %d", &y);

z = get_max(x,y);
printf("Max value is: %d", z);

}

int get_max(int a, int b){
	if(a>b){
		return a;
	}else{
		return b; 
	}	
}

