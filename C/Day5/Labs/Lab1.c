#include<stdio.h>

/*Global variables*/
int arr_size = 10;


int main() {
	int arr[arr_size];
	
	for(int i=0; i<arr_size; i++){
		printf("Enter number %d: ", i);
		scanf(" %d", &arr[i]);
	}
	
	printf("Values in reverses order are: \n");
	
	for(int i = arr_size-1; i>=0; i--){
		
		printf(" %d\n", arr[i]);
	}
	
}
