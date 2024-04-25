/*Q.1 Write a Program to check whether a number is even or odd using the ternary operator.*/
#include<stdio.h>
main(){
	int a;
	
	printf("ENTER YOU ODD || EVEN NUMBER :-");
	scanf("%d",&a);
	
	(a % 2 == 0)?printf("YOUR VALUE IS EVEN")
                :printf("YOUE VALUE IS ODD");
}
