#include<stdio.h>
void main(){
	FILE *fp;
	
	fp=fopen("demo.txt","w");
	
	if(fp!=NULL){
		printf("FILE IS SUCCESSFULLY OPEN..!");
		fprintf(fp,"HELLO C-LANGUAGE..!");
	}
	else{
		printf("FILE IS NOT OPEN..!");
	}
}
