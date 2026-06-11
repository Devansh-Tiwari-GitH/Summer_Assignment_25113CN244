#include <stdio.h>
int main(){
    int n,i;
    printf("enter number of elements in array : ");
    scanf("%d", &n);
    int a[n];
    //for input array elements
    for(i=0;i<n;i++){
        printf("enter element %d : ", i+1);
        scanf("%d", &a[i]);
    }
    //for searching large and smallest element
    int largest = a[0]; 
    int smallest = a[0];
    for(i = 0; i < n; i++) {
        if(a[i] < smallest) {
            smallest = a[i];
        }
        if(a[i] > largest) {
            largest = a[i];
        }
    }
    printf("smallest element : %d\n", smallest);
    printf("largest element : %d\n", largest);
    return 0;
}