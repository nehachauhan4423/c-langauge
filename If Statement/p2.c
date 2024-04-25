/*Write a program that takes an integer as input and checks if it is even 
or odd. Print "Even" if the number is even and "Odd" if it's odd.*/

#include<stdio.h>
main(){
	int a;
	printf("Enter number for check even||odd:-\n");
	scanf("%d",&a);
	
	if(a % 2 == 0){
		printf("Your value is even");	
	}
	else{
		printf("Your value is odd");
	}
	
}
