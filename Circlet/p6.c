//Q.6 Write a Program to print the below pattern using nested for loop.
// 54321
//  5432
//   543
//    54
//     5//


#include<stdio.h>
main()
{
	int i,j,s;
	for(i=1;i<=5;i++){
		for(s=1;s<=i;s++){
			printf(" ");
    	}
    	for(j=5;j>=i;j--){
    		printf("%d",j);
		}
		printf("\n");
	}
}
