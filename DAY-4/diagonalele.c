#include<stdio.h>
int main(){
    int row, col;

    printf("Enter the number of rows: ");
    scanf("%d", &row);

    printf("Enter the number of columns: ");
    scanf("%d", &col);

    int arr[row][col];
    printf("Enter %d elements for a %dx%d array:\n", row * col, row, col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("matrix :\n");
    for (int i = 0; i < row; i++) { 
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("The main diagonal elements are:\n");
    for(int i=0; i<row && i<col; i++){
        printf("%d ", arr[i][i]);
    }

}