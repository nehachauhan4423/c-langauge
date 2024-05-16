#include<stdio.h>
main(){
	int n;
	int a[n];
	printf("ENTER THE SIZE OF AN ARRY: ");
	scanf("%d",&n);
	int *ptr[n];
	int i;
	for(i=0;i<n;i++){
		printf("ENTER ELEMENT %d: ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		ptr[i] = &a[i];
	}
	
	printf("THE SQUARE ARE ");
	for(i=0;i<n;i++){
		int sqr = (*ptr[i]) * (*ptr[i]);
		printf("%d\n",sqr);
	}
}
