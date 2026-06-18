//Write a program to Add matrices.
#include <stdio.h>
void main(){
    int n,m,i,j;
    printf("Enter the numbers of rows and columns of the matrix:");
    scanf("%d%d",&n,&m);
    int a[n][m],b[n][m],c[n][m];
    printf("Enter the elements of first array:");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of the second array:");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&b[i][j]);
        }
    }
    // Adding the matrices
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    // Displaying the result
    printf("The sum of the matrices is:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}