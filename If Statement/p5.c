/*Create a program that prompts the user to enter their age and determines
if they are a child (age 12 or younger), a teenager (ages 13 to 19),
an adult (ages 20 to 64), or a senior (age 65 or older).*/
#include<stdio.h>
main(){
	int a;
	printf("Enter the Age:- ");
	scanf("%d",&a);
	
	if(a<12){
		printf("You are the younger");	
	}
	else if(a<=19){
		printf("you are a ateenager ");
	}
	else if(a<=64){
		printf("you are a  adult ");
	}
	else{
		printf("you are a senior");
	}
}
