//Q.2 Write a Program to count the total number of digits in a number.//
#include<stdio.h>
main(){
	
	int i,no=0;
	
	printf("Enter the no o i:");
	scanf("%d",&i);
	
	do{
		i/=10;
		no++;
	}
	while(i|=0);
	printf("%d",no);
}
