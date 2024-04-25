//Q.1 Write a Program to find all the negative elements from a given 1D array.
//For example,
//Input:
//Enter the array's size: 5
//
//Enter array's elements:
//a[0] = 2
//a[1] = -4
//a[2] = 1
//a[3] = -3
//a[4] = -5
//
//Output:
//Negative elements from an Array: -4, -3, -5//


#include<stdio.h>
main(){
	int s,i;
	
	printf("ENTER THE SIZE OF ARRAY:-");
	scanf("%d",&s);
	
	int arr[i];
	for(i=0;i<s;i++){
		printf("ENTER ELEMENTS OF AN ARRY:-\n");
		scanf("%d",&arr[i]);
	}
	printf("NEGATIVE ELEMENTS FROM AN ARRAY ARE :-        ");
	
	for(i=0;i<s;i++){
		if(arr[i]<0){
			printf("%d,",arr[i]);
		}
	}
}
