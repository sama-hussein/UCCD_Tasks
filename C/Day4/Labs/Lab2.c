#include<stdio.h>

int swap(int a, int b);

void main(){

int x,y,z;
printf("Please enter X: ");
scanf(" %d", &x);

printf("Please enter Y: ");
scanf(" %d", &y);

z = swap(x,y);

}

int swap(int a, int b){
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("X after swapping: %d", a);
	printf("\nY after swapping: %d", b);

}
