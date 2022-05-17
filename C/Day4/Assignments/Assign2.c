#include<stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int divide(int a, int b);
int And(int a, int b);
int Or(int a, int b);
int Xor(int a, int b);
int reminder(int a, int b);
int incr(int a);
int decr(int a);


int main() {
	int id,a,b;
	
	printf("Enter ID: ");
	scanf(" %d",&id);
	
	if(id != 9 && id != 10){
		printf("Enter number 1: ");
		scanf(" %d",&a);
		printf("Enter number 2: ");
		scanf(" %d",&b);  
		
		if(id==1){ printf(" %d", add(a,b)); }
		else if(id==2){ printf(" %d", sub(a,b)); }
		else if(id==3){ printf(" %d", mul(a,b)); }
		else if(id==4){ printf(" %d", divide(a,b)); }
		else if(id==5){ printf(" %d", And(a,b)); }
		else if(id==6){ printf(" %d", Or(a,b)); }
		else if(id==7){ printf(" %d", Xor(a,b)); }
		else if(id==8){ printf(" %d", reminder(a,b)); }
	
	}else{
		printf("Enter number 1: ");
		scanf(" %d",&a);
		
		if(id==9){ printf(" %d", incr(a)); }
		else if(id==10){ printf(" %d", decr(a)); }
	}

    return 0;
}


int add(int a, int b){
	int x = a+b;
	return x;
}

int sub(int a, int b){
	int x = a-b;
	return x;
}

int mul(int a, int b){
	int x = a*b;
	return x;
}

int divide(int a, int b){
	int x = a/b;
	return x;
}

int And(int a, int b){
	int x = a & b;
	return x;
}

int Or(int a, int b){
	int x = a | b;
	return x;
}

int Xor(int a, int b){
	int x = a ^ b;
	return x;
}

int reminder(int a, int b){
	int x = a % b;
	return x;
}

int incr(int a){
	a++;
	return a;
}

int decr(int a){
	a--;
	return a;
}