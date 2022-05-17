#include<stdio.h>

int byRef(int *p1, int *p2);

int main() {

int x,y,sum;
printf("Enter x: ");
scanf(" %d", &x);
printf("Enter y: ");
scanf(" %d", &y);

sum = byRef(&x,&y);
printf("The result is: %d", sum);

}

int byRef(int *p1, int *p2){
	return *p1 + *p2;
}