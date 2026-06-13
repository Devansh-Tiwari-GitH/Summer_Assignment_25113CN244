#include <stdio.h>
void main(){
    int i,n,j;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int a[n];
    int b[n];
    printf("Enter the elements of the array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    j=1;
    for(i=0;i<n;i++){
        if(a[i]==0){
            b[j]=a[i];
            j++;
        }
    }
    printf("The shorted array is:");
    for(i=0;i<n;i++){
        if(a[i]!=0){
            printf("%d ",a[i]);
        }
    }
     for(i=j;i<n;i++){
        b[i]=0;
        printf("%d ",b[i]);
      }
    }