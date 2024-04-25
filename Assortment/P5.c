#include <stdio.h>
main(){
    int r,c,i,j;

    printf("ENTER THE SIZE OF ROW:  ");
    scanf("%d",&r);

    printf("ENTER THE SIZE OF COLUMN:  ");
    scanf("%d",&c);

    int array[r][c];

    printf("\nENTER ARRAY'S ELEMENTS:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    int sum = 0;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++) {
            sum += array[i][j];
        }
    }

    float average = (float)sum / (r * c);

    printf("\nAVERAGE OF AN ARRAY: %.2f\n", average);

}
