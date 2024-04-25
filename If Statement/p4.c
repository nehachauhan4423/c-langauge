/*Create a program that prompts the user to enter their
age and determines if they are eligible to vote 
(age 18 or older) or not.*/

#include<stdio.h>
main(){
	int a;
	printf("Enter your age:\n");
	scanf("%d,&a");
	
	if(a<=0){
		printf("Please enter valid age");		
	}
	else if(a>=18){
		printf("You are eligible for vote");
	}
	else{
        printf("you are not eligibale for vote");	
	}
}
