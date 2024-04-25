/*Grade Calculator*/
#include<stdio.h>
main(){
	int a;
	printf("Enter the Grade:-");
	scanf("%d",&a);
	
	if(a<=32){
		printf("you are the fail");
	}
	else if(a<=40){
		printf("grade 'd'");
	}
	else if(a<=70){
		printf("grade 'c'");
	}
	else if(a<=80){
		printf("grade 'b'");
	}
	else{
        printf("grade a");	
	}
}
