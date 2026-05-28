#include <stdio.h>
void main(){
    int i,n;
    printf("Enter the number");
    scanf("%d",&n);
    int a[n];
    int b[n];
    int d[n];
    for(i=1;i<=n;i++){
        if(n%i==0){
            a[i]=i;
            if(a[i]%2!=0&&a[i]!=1){
                b[i]=a[i]; 
                printf(" b is %d \n",b[i]);
            }
            printf("%d \n",a[i]);
        }
    }
}