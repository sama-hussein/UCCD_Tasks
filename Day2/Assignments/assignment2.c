#include<stdio.h>

void main(){
	
	int id, password;
	
	printf("please enter your ID: ");
	scanf(" %d", &id);
	
	if(id == 1010){
		printf("please enter your password: ");
		scanf(" %d", &password);
		if(password == 2001){ printf("welcome %d!", id); }
		else {printf("Incorrect password");}
	}
	else {printf("Incorrect ID");}

}