#include <stdio.h>
void main(){
    int a,i=0,n,x=0;
    int b[99];
    printf("Enter the number :");
    scanf("%d",&n);
    while(n!=0){
        a=n%2;
        b[i]=a;   //this array stores the binary number
        i++;
        n=n/2;
    }
    printf("The binary number is :");
    for(i=i-1;i>=0;i--){
        if(b[i]==1){   //set bits are counted in this loop
            x++;
        }
        printf("%d",b[i]);
    }
    printf("\nThe number of set bits are : %d",x);
}