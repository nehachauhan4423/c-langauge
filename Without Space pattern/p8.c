//Q.8 Write a Program to print the below pattern using nested for loop.
//1
//2    3
//4    5   6
//7    8   9   10
//11 12 13 14 15//

#include<stdio.h>
main(){
	
	int i,j,l=1;
	for(i=1;j<=5;i++){
		for(j=1;j<=i;j++){
			printf("%d",l);
			l++;
		}
		printf("\n");
	}
}

