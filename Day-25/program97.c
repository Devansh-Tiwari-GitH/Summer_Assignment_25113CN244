#include <stdio.h>
void main() {
    int a[50],b[50],c[100];
    int n1,n2,i,j,k,temp;
    printf("Enter size of first array: ");
    scanf("%d",&n1);
    printf("Enter elements of first array:\n");
    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d",&n2);
    printf("Enter elements of second array:\n");
    for(i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    // Sort first array
    for(i=0;i<n1-1;i++){
        for(j=i+1;j<n1;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    // Sort second array
    for(i=0;i<n2-1;i++){
        for(j=i+1;j<n2;j++){
            if(b[i]>b[j]){
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    // merge
    i=j=k=0;
    while(i<n1&&j<n2){
        if(a[i]<b[j]){
            c[k++]=a[i++];
        } else {
            c[k++]=b[j++];
        }
    }
    while(i<n1)c[k++]=a[i++];
    while(j<n2)c[k++]=b[j++];
    printf("Merged sorted array:\n");
    for(i=0;i<k;i++){
        printf("%d ",c[i]);
    }
}