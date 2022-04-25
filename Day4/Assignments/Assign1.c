#include<stdio.h>

int max_num(int a, int b, int c, int d);
int min_num(int a, int b, int c, int d);

int main() {
	
    int a,b,c,d,m,n;
    printf("Enter number 1: ");
    scanf(" %d",&a);
	printf("Enter number 1: ");
    scanf(" %d",&b);    
	printf("Enter number 1: ");
    scanf(" %d",&c);    
	printf("Enter number 1: ");
    scanf(" %d",&d);
	
	m = max_num(a, b, c, d);
	n = min_num(a, b, c, d);
    printf("Max number is: %d", m);
	printf("\nMin number is: %d", n);

    return 0;
}

int max_num(int a, int b, int c, int d){
	if(a>b && a>c && a>d){ return a;}
	else if(b>a && b>c && b>d){ return b;}
	else if(c>a && c>b && c>d){ return c;}
	else { return d; }

}

int min_num(int a, int b, int c, int d){
	if(a<b && a<c && a<d){ return a;}
	else if(b<a && b<c && b<d){ return b;}
	else if(c<a && c<b && c<d){ return c;}
	else { return d; }

}