#include<stdio.h>
main(){
	   int ss,gujarati,science,hindi,english;
	   float per,total;
	   
	   printf("ENTER YOUR SS MARKS:-");
	   scanf("%d",&ss);
	   printf("ENTER YOUR GUJARATI MARKS:-");
	   scanf("%d",&gujarati);
	   printf("ENTER YOUR SCIENCE MARKS:-");
	   scanf("%d",&science);
	   printf("ENTER YOUR HINDI MARKS:-");
	   scanf("%d",&ss);
	   printf("ENTER YOUR ENGLISH MARKS:-");
	   scanf("%d",&english);
	   
   	total=gujarati+english+ss+hindi+science;
	per=total/500*100;
	printf("per:-%.2f",per);
	   
	   if(per>=90){
			printf("grade A");
	}
	else if(per>=80){
			printf("grade B");
	}
	else if(per>=70){
		printf("grade C");
	}
	else if(per>=60){
		printf("grade D");
	}
	else if(per>=50){
		printf("grade E");
	}
	else{
		printf("grade F");
	}	   
}
