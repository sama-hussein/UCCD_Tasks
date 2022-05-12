#include<stdio.h>

/*Global variables*/
int arr_size = 10;

int main() {
	int arr[10], search_val, found=0;
	
	for(int i=0; i<arr_size; i++){
		printf("Enter number %d: ", i+1);
		scanf(" %d", &arr[i]);
	}
	
	printf("Enter search number: ");
	scanf(" %d", &search_val);
	
	for(int i=0; i<arr_size; i++){
		if(search_val == arr[i]){
			found++;
		}
	}
	
	if(found>0){
		printf("Number found %d times", found);
	}else {
		printf("Number not found");
	}
	
	
	
	
	
	
}