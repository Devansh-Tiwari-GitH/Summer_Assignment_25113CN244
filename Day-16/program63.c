//Write a program to Find pair with given sum. 
#include <stdio.h>
int main(){
    int i,j,target=0,n;
    printf("enter no of elements of arrray : ");
    scanf("%d", &n);
    int a[n];
    //for entering array elements
    for(i=0;i<n;i++){
        printf("enter element %d : ", i+1);
        scanf("%d", &a[i]);
    }
    printf("enter the target sum : ");
    scanf("%d", &target);
    //for printing pair 
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]!=a[j]){
                if(a[i]+a[j]==target){
                printf("pair with given sum : %d %d\n", a[i], a[j]);
                break;
                }
            }
        }
    }
    return 0;
}