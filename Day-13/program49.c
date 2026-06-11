#include <stdio.h>
int main(){
    int n,i;
    printf("enter number of elements in array : ");
    scanf("%d", &n);
    int a[n];
    //for input array elements
    for(i=1;i<=n;i++){
        printf("enter element %d : ", i);
        scanf("%d", &a[i]);
    }
    //for display of array
    printf("elements of array are : ");
    for(i=1;i<=n;i++){
        printf("%d ", a[i]);
    }
    return 0;
}