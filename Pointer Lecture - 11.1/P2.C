//Q.2 Write a Program to swap two variables using Pointers.
//For example,
//Input:
//Enter the value of x: 5
//Enter the value of y: 3
//
//Output:
//Before swapping:
//x: 5
//y: 3
//
//After swapping:
//x: 3
//y: 5//


#include<stdio.h>
void main(){
	int x,y;
	int *ptr;
	ptr = &x;
	ptr = &y;

	printf("ENTER THE VALUE OF X: ");
	scanf("%d",&x);
	printf("ENTER THE VALUE OF Y: ");
	scanf("%d",&y);

	printf("\nBEFORE SWAPPING:\n");
	printf("x: %d\n",x);
	printf("y: %d\n\n",*ptr);

	printf("AFTER SWAPPING:\n");
	printf("x: %d\n",y);
	printf("y: %d",x);
}
