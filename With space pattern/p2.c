//					1
//				1	2
//			1	2	3
//		1	2	3	4
//	1	2	3	4	5
//		1	2	3	4
//			2	3	4
//				3	4
//					4//

#include<stdio.h>
main(){
	int i,j,s;
	for(i=1;i<=5;i++){
		for(s=4;s>=i;s--){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
		printf("\n");
		
		for(i=1;i<=4;i++){
			for(s=1;s<=i;s++){
				printf(" ");
			}
			
			for(j=i;j<=4;j++){
				printf("%d",j);
			}
			printf("\n");
		}
	}
}
