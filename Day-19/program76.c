//Write a program to find the sum of diagonal elements of a matrix.
#include <stdio.h>
void main(){
    int n,m,i,j,c=0;
    printf("Enter the numbers of rows and columns of the matrix:");
    scanf("%d%d",&n,&m);
    int a[n][m];
    printf("Enter the elements of first array:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    // Finding the sum of diagonal elements
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(i==j){
                c += a[i][j];
            }
        }
    }
    printf("The sum of the diagonal elements is: %d", c);
}