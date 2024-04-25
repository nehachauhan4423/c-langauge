#include<stdio.h>
main(){
	float hra,da,ta;
	int gross , salary;
	
	printf("Enter salary");
	scanf("%d",&salary);
	
	printf("Enter HRA:-");
	scanf("%f",&hra);
	printf("Enter DA:-");
	scanf("%f",&da);
	printf("Enter TA:-");
	scanf("%f",&ta);
	
	gross=salary+(salary*hra/100)+(salary*da/100)+(salary*ta/100);
	
	printf("gross:- %d",gross);
}
