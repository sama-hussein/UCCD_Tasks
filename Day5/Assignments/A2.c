#include<stdio.h>

int arr_size = 5;

int main() {
	int c1[arr_size], c2[arr_size], c3[arr_size], min, max, passed=0, failed=0;
	
	for(int i=0; i<arr_size; i++){
		printf("Class number 1: ");
		scanf(" %d", &c1[i]);
	}
	for(int i=0; i<arr_size; i++){
		printf("Class number 2: ");
		scanf(" %d", &c2[i]);
	}
	for(int i=0; i<arr_size; i++){
		printf("Class number 3: ");
		scanf(" %d", &c3[i]);
	}
	
	//Passed and Failed students
	for(int i=0; i<arr_size*3; i++){
		if(c1[i]>=50 || c2[i]>=50 || c3[i]>=50){
			passed++;
		} else if(c1[i]<50 || c2[i]<50 || c3[i]<50){
			failed++;
		}
	}
	
	printf("Passed: %d", passed);
	printf("\nFailed: %d", failed);
	//Highest and Lowest Grade
	
	//min = max = arr[0];
	/*for(int i=0; i<arr_size; i++){
		if(min>arr[i]){
			min=arr[i];
		}   
		if(max<arr[i]){
		    max=arr[i];
		}
	}
	
	printf("Min number is : %d",min);
    printf("\nMax number is : %d",max); */

}
