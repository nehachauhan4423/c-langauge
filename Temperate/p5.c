/*Q.5  Write a C program that takes a number (1 to 12) as input and prints the corresponding month's name using a switch statement.*/

#include<stdio.h>
main(){
	int choice;
	
	printf("ENTER YOUR CHOICE :-");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("JANUARY");
		break;
		case 2:
			printf("FEBRUARY");
		break;
		case 3:
			printf("MARCH");
		break;
		case 4:
			printf("APRIL");
		break;
		case 5:
			printf("MAY");
		break;
		case 6:
			printf("JUNE");
		break;
		case 7:
			printf("JULAY");
		break;
		case 8:
			printf("AUGUST");
		break;
		case 9:
			printf("SEPTEMBER");
		break;
		case 10:
			printf("OCTOMBER");
		break;
		case 11:
			printf("NOVEMBER");
		break;
		case 12:
			printf("DECEMBER");
		break;
		default:
			printf("ENTER YOUR VALID MONTH");
		
			
	}
}
