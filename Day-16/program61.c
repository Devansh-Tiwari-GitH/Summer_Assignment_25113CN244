//Write a program to Find missing number in array.
#include <stdio.h>
int main(){
    int i,A=0,d=1,j,n,asum=0,tsum=0,mterm=0;
    printf("enter no of elements : ");
    scanf("%d", &n);
    int a[n-1];
    //for entering array elements
    for(i=0;i<n-1;i++){
        printf("enter element %d : ", i+1);
        scanf("%d", &a[i]);
    }
    //for finding missing element
    for(i=0;i<n-1;i++){
        asum=asum+a[i];
    }
    A=a[0];
    //for calculating common difference
    d=1;
    tsum=(n * (2 * A + (n - 1) * d)) / 2;
    //missing term
    mterm=tsum-asum;
    printf("missing term : %d", mterm);
    return 0;
}