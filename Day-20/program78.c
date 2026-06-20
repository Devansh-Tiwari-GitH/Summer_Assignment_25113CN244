//Write a program to Check symmetric matrix.
#include <stdio.h>
void main() {
    int r,c;
    // Input dimensions of the matrix
    printf("Enter rows and columns for the matrix: ");
    scanf("%d%d",&r,&c);
    //  A symmetric matrix must be square (rows must equal columns)
    if (r!=c) {
        printf("The matrix is not square, so it cannot be symmetric.\n");
    }
    int matrix[10][10];
    int isSymmetric=1; // Assume the matrix is symmetric until proven otherwise
    // Input elements of the matrix
    printf("\nEnter elements of the matrix:\n");
    for (int i=0;i<r;++i) {
        for (int j=0;j<c;++j) {
            printf("Enter element a%d%d: ",i+1,j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    //Check symmetry by comparing element (i, j) with (j, i)
    for (int i=0;i<r;++i) {
        for (int j=0;j<c;++j) {
            if (matrix[i][j]!=matrix[j][i]) {
                isSymmetric=0; // Set flag to false if a mismatch is found
                break; // Exit inner loop early if a mismatch is found
            }
        }
        if (!isSymmetric) break; // Exit outer loop
    }
    //Display the result
    if (isSymmetric) {
        printf("\nThe matrix is Symmetric.\n");
    } else {
        printf("\nThe matrix is NOT Symmetric.\n");
    }
}