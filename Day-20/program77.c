//Write a program to perform matrix multiplication.
#include <stdio.h>
void main()
{
    int r1,c1,r2,c2;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d%d",&r2,&c2);
    if (c1!=r2)
    {
        printf("Matrix multiplication not possible.\n");
    }
    int a[r1][c1],b[r2][c2],c[r1][c2];
    //Input elements of the matrices
    printf("Enter elements of first matrix:\n");
    for (int i=0;i<r1;i++)
        for (int j=0;j<c1;j++)
            scanf("%d",&a[i][j]);
    //Input elements of second matrix
    printf("Enter elements of second matrix:\n");
    for (int i=0;i<r2;i++)
        for (int j=0;j<c2;j++)
            scanf("%d",&b[i][j]);
    //Perform matrix multiplication
    for (int i=0;i<r1;i++)
    {
        for (int j=0;j<c2;j++)
        {
            c[i][j]=0;
            for (int k=0;k<c1;k++)
            {
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    printf("Resultant Matrix:\n");
    for (int i=0;i<r1;i++)
    {
        for (int j=0;j<c2;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}