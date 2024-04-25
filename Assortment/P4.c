//Q.4 Write a Program to print and find the sum of all elements of a given row & column from a 2D array.
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
//Enter row number: 0
//Elements of row 0: 2, 7, 1
//The sum of a row 0: 10
//
//Enter column number: 2
//Elements of column 2: 1, 4, 6
//The sum of column 2: 11//


#include <stdio.h>
main() {
    int r,c,i,j;

    printf("ENTER THE ARRAY'S ROW SIZE: ");
    scanf("%d",&r);
    printf("ENTER THE ARRAY'S COLUMN SIZE: ");
    scanf("%d",&c);

    int arr[r][c];
    printf("\nENTER ARR'S ELEMENTS:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("a[%d][%d] = ", i, j);
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}

    int row , row_sum = 0;
    printf("\nENTER ROW NUMBER: ");
    scanf("%d", &row);
    printf("ELEMENTS OF ROW %d: ", row);

    for (j = 0; j < c; j++) {
        printf("%d ", arr[row][j]);
        row_sum += arr[row][j];
    }
    printf("\nTHE SUM OF ROW %d: %d\n", row, row_sum);

    int col , col_sum = 0;
    printf("\nENTER COLUMN NUMBER: ");
    scanf("%d", &col);
    printf("ELEMENTS OF COLUMN %d:  ", col);

    for (i = 0; i < r; i++) {
        printf("%d ", arr[i][col]);
        col_sum += arr[i][col];
    }
    printf("\nTHE SUM OF COLUMN %d: %d\n", col, col_sum);
}

