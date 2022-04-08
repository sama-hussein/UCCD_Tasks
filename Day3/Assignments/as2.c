#include <stdio.h>
#include <stdbool.h>


void main(){
	
	int id, pass;
	bool pass_status = true;
	
	printf("enter your ID: ");
	scanf(" %d", &id);

	switch(id){
		case 1234:
		printf("enter your Password: ");
		scanf(" %d", &pass);
		for(int i=0; i<3; i++){
			if(pass == 7788){
				printf("Welcome Ahmed");
				break;
			} else{
				printf("please enter your Password again: ");
				scanf(" %d", &pass);
			}
			pass_status = false;
		}
		if(pass_status==false){printf("No more tries!");}
		break;
		
		case 5678:
		printf("enter your Password: ");
		scanf(" %d", &pass);
		for(int i=0; i<3; i++){
			if(pass == 5566){
				printf("Welcome Amr");
				break;
			} else{
				printf("please enter your Password again: ");
				scanf(" %d", &pass);
			}
			pass_status = false;
		}
		if(pass_status==false){printf("No more tries!");}
		break;	
		
		case 9870:
		printf("enter your Password: ");
		scanf(" %d", &pass);
		for(int i=0; i<3; i++){
			if(pass == 1122){
				printf("Welcome Wael");
				break;
			} else{
				printf("please enter your Password again: ");
				scanf(" %d", &pass);
			}
			pass_status = false;
		}
		if(pass_status==false){printf("No more tries!");}
		break;
		
		default:		
		printf("Not registered!");
		
	}
		
}