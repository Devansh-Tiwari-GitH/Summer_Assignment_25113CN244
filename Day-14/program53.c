#include <stdio.h>
int main(){
    int n,i,target,result=0;
    printf("enter the number of elements : ");
    scanf("%d", &n);
    int a[n];
    //enter array elements
    for(i=0;i<n;i++){
        printf("enter element %d : ", i+1);
        scanf("%d", &a[i]);
    }
    //target
    printf("enter element to search : ");
    scanf("%d", &target);
    //linear search 
    for(i=0;i<n;i++){
        if(a[i]==target){
            result=i;
            break;
        }
    }
    if(result!=0){
        printf("element found at index : %d", result);
    }
    else{
        printf("element not found ");
    }
    return 0;
}