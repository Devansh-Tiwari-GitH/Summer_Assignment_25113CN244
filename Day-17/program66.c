//Write a program to Union of arrays.
#include <stdio.h>
int main(){
    int i,j,k,n;
    printf("enter no of elements of the array : ");
    scanf("%d", &n);
    int a[n];
    int b[n];
    int u[50];
    int totalElements = n;
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
    //for creating union of arrays
    for(i=0;i<n;i++){
        u[i]=a[i];
    }
    for(i = 0; i < n; i++) {
        int isDuplicate = 0;
        
        // Check if b[i] already exists in our union array so far
        for(j = 0; j < totalElements; j++) {
            if(b[i] == u[j]) {
                isDuplicate = 1;
                break;
            }
        }
        // If it's a new unique element, add it
        if(!isDuplicate) {
            u[totalElements] = b[i];
            totalElements++;
        }
    }
    //printing of union array
    printf("union array : ");
    for(i=0;i<totalElements;i++){
        printf("%d ", u[i]);
    }
    return 0;
}