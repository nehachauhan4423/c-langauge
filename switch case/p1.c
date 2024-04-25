//Enter the week//
#include<stdio.h>
main(){
	int choice;
	
	printf("Enter your choice week:-");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("FIRST WEEK");
			break;
		case 2:
			printf("SECOND WEEK");
			break;
		case 3:
			printf("THIRD WEEK");
			break;
		case 4:
			printf("FOURTH WEEK");
	        break;
 		default:
 			printf("PLEASE ENTER YOUR VALID WEEK");
	}
	
}
