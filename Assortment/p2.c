//Q.2 Write a Program to find the largest element from a given 2D array.
//For example,
//Input:
//Enter the array's row size: 3
//Enter the array's column size: 3
//
//Enter array's elements:
//a[0][0] = 2
//a[0][1] = 7
//a[0][2] = 1
//a[1][0] = 3
//a[1][1] = 5
//a[1][2] = 4
//a[2][0] = 8
//a[2][1] = 9
//a[2][2] = 6
//
//Output:
//The largest element is: 9//


#include <stdio.h>
main() {
    int row,col,i,j;

    printf("ENTER THE ARRAY'S ROW SIZE: ");
    scanf("%d",&row);
    printf("ENTER THE ARRAY'S COLUMN SIZE: ");
    scanf("%d",&col);

    int arr[row][col];

    printf("ENTER ARRAY'S ELEMENTS:\n");
    for (i=0;i<row;i++) {
        for (j=0;j<col;j++) {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    int max = arr[0][0];
    
    for (i=0;i<row;i++) {
        for (j=0;j<col;j++) {
            if (arr[i][j]>max) {
                max=arr[i][j];
            }
        }
    }
    printf("THE LARGEST ELEMENT IS: %d\n",max);
}
