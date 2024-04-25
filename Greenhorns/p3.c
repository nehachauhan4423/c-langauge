#include<stdio.h>

main(){
	float angle1,angle2,angle3;
	
	printf("Enter the first angle:");
	scanf("%f",&angle1);
	
	printf("Enter the second angle:");
	scanf("%f",&angle2);
	
	angle3= 180-(angle1 + angle2);
	printf("angle3 is %f",angle3);
}
