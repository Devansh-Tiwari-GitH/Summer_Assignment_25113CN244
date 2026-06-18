//Write a program to Sort array in descending order.
#include <stdio.h>
int main(){
    int i,j,k,n,temp=0;
    printf("enter no of elements of array : ");
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++){
        printf("enter element %d : ", i+1);
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    //printing sorted array
    printf("Sorted array in descending order : ");
    for(i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    return 0;
}