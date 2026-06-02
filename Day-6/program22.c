#include <stdio.h>
#include <math.h>
void main(){
    int a,b,c=0,d=0,n;
    printf("Enter the number :");
    scanf("%d",&n);
    while(n!=0){
        a=n%10;
        b=pow(2,d);   //the b stores the value of 2^d
        d++;
        c=c+(a*b);   //the c stores the decimal number
        n=n/10;
    }
    printf("The decimal number is %d",c);
}