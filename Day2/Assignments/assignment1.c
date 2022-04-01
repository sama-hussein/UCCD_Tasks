#include<stdio.h>

void main(){
	
	int n=5, arr[n], search_num, found=0;
	
	//filling the array
	for(int i=0; i<n; i++){
		printf("enter number %d: ",i+1);
		scanf(" %d", &arr[i]);
	}
	
	printf("enter search number: ");
	scanf(" %d", &search_num);

	for(int i=0; i<n; i++){
		if(search_num == arr[i]){
			found=1;
			printf("found number at number %d \n", i+1);
			break;
		}
	}
	
	if(found==0){	printf("not found");	}
	
	
}