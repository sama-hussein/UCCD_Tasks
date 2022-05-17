#include<stdio.h>

/*Global variables*/
int arr_size = 5;

int main() {
	int arr[arr_size], min, max;
	
	for(int i=0; i<arr_size; i++){
		printf("Enter number %d: ", i);
		scanf(" %d", &arr[i]);
	}
	
	min = max = arr[0];
	for(int i=0; i<arr_size; i++){
		if(min>arr[i]){
			min=arr[i];
		}   
		if(max<arr[i]){
		    max=arr[i];
		}
	}
	
	printf("Min number is : %d",min);
    printf("\nMax number is : %d",max);

}
