//Write a program to find the transpose of a matrix.`
#include <stdio.h>
void main(){
    int n,m,i,j;
    printf("Enter the number of rows and columns of the matrix:");
    scanf("%d%d",&n,&m);
    int a[n][m],b[n][m];
    printf("Enter the elements of first array:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    // Transposing the matrix
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            b[j][i] = a[i][j];
        }
    }
    printf("The transpose of the matrix is:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}