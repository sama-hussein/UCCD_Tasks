#include<stdio.h>


int main() {

int x=10;
int *p = &x;

printf("X before change: %d", x);

*p = 20;
printf("\nX after change: %d", x);




}