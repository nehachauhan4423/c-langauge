//Q.3 Write a Program to find square of each element from the given array.
//For example,
//Input:
//Enter array size: 5//

#include<stdio.h>
main(){
	int i, arr[i],a;
	
	printf("Enter the size of arry:-");
	scanf("%d",&a);
	
	for(i=0;i<a;i++){
		printf("arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	
	printf("THE SQUARE ARE:");
	for(i=0;i<a;i++){
		printf("\n %d",arr[i]*arr[i]);
	}
}
