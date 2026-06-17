//Write a program to Merge arrays.
#include <stdio.h>
int main(){
    int i,j,k,n;
    printf("enter no of elements of the array : ");
    scanf("%d", &n);
    int a[n];
    int b[n];
    int m[n];
    //for entering first array
    printf("enter first array elements" "\n");
    for(i=0;i<n;i++){
        printf("enter element %d : ", i+1);
        scanf("%d", &a[i]);
    }
    //for entering second array
    printf("enter second array elements" "\n");
    for(i=0;i<n;i++){
        printf("enter element %d : ", i+1);
        scanf("%d", &b[i]);
    }
    //merging of the arrays
    for(i=0;i<n;i++){
        m[i]=a[i]+b[i];
    }
    printf("merged array : ");
    //printing merged array
    for(i=0;i<n;i++){
        printf("%d ", m[i]);
    }
    return 0;
}