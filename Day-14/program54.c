#include <stdio.h>
int main(){
    int i,j,n,ecount=0,target=0;
    printf("enter number of elements : ");
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++){
        printf("enter element %d : ", i+1);
        scanf("%d", &a[i]);
    }
    //count element
    printf("enter element to count frequency : ");
    scanf("%d", &target);
    for(i=0;i<n;i++){
        if(a[i]==target){
            ecount++;
        }
    }
    printf("frequency of the element : %d", ecount);
    return 0;
}