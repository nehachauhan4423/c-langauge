//Q.4 Write a Program to print the below pattern using nested for loop.
//10101
// 1010
//  101
//   10
//    1//

#include<stdio.h>
void main()
{
	int i,j,s;
	for(i=5;i>=1;i--)
	{
		for(s=4;s>=i;s--){
	 		printf(" ");
			}
		for(j=1;j<=i;j++){
			if(j%2==0){
		 		printf("0");
				}
			else{
				printf("1");
				}
			}
				printf("\n");
	}
}
