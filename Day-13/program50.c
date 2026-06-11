#include <stdio.h>
int main(){
    int n,i;
    double avg=0,sum=0;
    printf("enter number of elements of array : ");
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++){            //for inserting array element
        printf("enter element %d : ", i+1);
        scanf("%d", &a[i]);
    }
    //to find sum 
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    //to find avg
    avg=sum/n;
    printf("sum of the array : %.2f\n", sum);
    printf("average of the array : %.2f\n", avg);
    return 0;
}