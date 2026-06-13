//Write a program to Find maximum frequency element.
#include <stdio.h>
int main(){
    int i,e,n;
    printf("enter no of elements of array : ");
    scanf("%d", &n);
    int a[n];
    //enter the elements
    for(i=0;i<n;i++){
        printf("enter element %d : ", i+1);
        scanf("%d", &a[i]);
    }
    //to count frequency
    int freq=0;
    printf("enter the element to count frequency : ");
    scanf("%d", &e);
    for(i=0;i<n;i++){
        if(a[i]==e){
            freq++;
        }
    }
    printf("maximum frequency of the element : %d", freq);
    return 0;
}