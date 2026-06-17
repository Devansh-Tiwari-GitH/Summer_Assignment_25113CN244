//Write a program to Intersection of arrays.
#include <stdio.h>
int main(){
    int i,j,k,n;
    printf("enter no of elements of the array : ");
    scanf("%d", &n);
    int a[n];
    int b[n];
    int in[50]={0};
    int totalElements = 0;
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
    //for intersection
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]==b[j]){
            in[totalElements]=a[i];
            totalElements++;
            break;
            }
        }
    }
    //printing intersection aaray
    printf("intersection array : ");
    for(i=0;i<totalElements;i++){
        printf("%d ", in[i]);
    }
    return 0;
}