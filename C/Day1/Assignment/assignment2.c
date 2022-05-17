#include<stdio.h>


void main(){
	
	int arr[3];
	
	for(int i=0; i<3; i++){
		printf("Please enter number %d:", i+1);
		scanf(" %d: ", &arr[i]);
	}
	
	for(int i=3; i>0; i--){
		printf("\nnumber %d: %d", i, arr[i-1]);
	}
	
}