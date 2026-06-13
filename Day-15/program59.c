#include <stdio.h>
void main(){
    int i,n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    int b[n];
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
            b[i+1]=a[i];  
    }
    b[0]=a[n-1];
    printf("The shifted array is: ");
    for(i=0;i<n;i++){
        printf("%d ",b[i]);
    }
}