//Write a program to Find column-wise sum
#include <stdio.h>
void main() {
    int r, c;
    //Input dimensions of the matrix
    printf("Enter rows and columns for the matrix: ");
    scanf("%d%d",&r,&c);
    int matrix[10][10];
    //Input elements of the matrix
    printf("\nEnter elements of the matrix:\n");
    for (int i=0;i<r;++i) {
        for (int j=0;j<c;++j) {
            printf("Enter element a%d%d: ",i+1,j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    //Calculate and display column-wise sum
    printf("\nOutput Column-wise Sum:\n");
    for (int i=0;i<c;++i) {
        int colSum=0; // Reset sum for each new column
        for (int j=0;j<r;++j) {
            colSum += matrix[j][i];
        }
        printf("Sum of column %d = %d\n", i+1,colSum);
    }
}