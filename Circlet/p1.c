//Q.1 Write a Program to print the below pattern using nested for loop.
//    1
//   21
//  321
// 4321
//54321//

#include<stdio.h>
main(){
	int i,j,s;
	for(i=1;i<=5;i++){
		for(s=4;s>=i;s--){
			printf(" ");
		}
		for(j=i;j>=1;j--){
			printf("%d",j);
		}
		printf("\n");
	}
}
