//Write a Program to print leap years between two given numbers using a while loop.//
#include<stdio.h>
main(){
    int startyear, endyear;

    printf("ENTER YOUR START YEAR:-");
    scanf("%d",&startyear);

    printf("ENTER YOU END YEAR:-");
    scanf("%d",&endyear);

    printf("lEAP YEAR BETWEEN %d and %d ARE:\n", startyear, endyear);

    while (startyear <= endyear) {
        if ((startyear % 4 == 0 && startyear % 100 != 0) || (startyear % 400 == 0)) {
            printf("%d\n", startyear);
        }
        startyear++;
    }
}
