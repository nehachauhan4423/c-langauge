#include<stdio.h>
main(){
	int i;
	for(i=1;i<=1000;i++){
		if(i==899){
			break;
		}
		printf("%d",i);
		printf("\n");
	}
}
