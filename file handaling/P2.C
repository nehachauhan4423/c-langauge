#include<stdio.h>
struct employee{
	int emp_id;
	char name[25];
	float salary;
	char emp_city;
};
void main(){
	FILE *fp;
	fp=fopen("emp.txt","w");
	if(fp!=NULL){
		int n;
		printf("ENTER NUMBER OF EMPLOYEE:-");
		scanf("%d",&n);
	}
	else{
		printf("FILE IS NOT CREATION");
	}
}
