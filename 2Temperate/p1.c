//Q.1 Write a Program to print all alphabets from a to z by skipping 3 alphabets using do while loop.//

#include<stdio.h>
main(){
	char i='a';
	do{
		printf(" %c",i);
		i=i+4;
	}
	while(i<='z');
}
