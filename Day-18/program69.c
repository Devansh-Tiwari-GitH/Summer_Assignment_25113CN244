//Write a program to Bubble sort.
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
    //bubble sort
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    //printing sorted array
    printf("Sorted array : ");
    for(i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    return 0;
}