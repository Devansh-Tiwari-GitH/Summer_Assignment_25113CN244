#include <stdio.h>
void main(){
    int a,b=1,c,n;
    printf("Enter the number -");
    scanf("%d",&n);
    while (n!=0){
        a=n%10;
        b=b*a;
        n=n/10;
    }
    printf("The product of digits is %d",b);
}