#include <stdio.h>
void main(){
    int x,n,z=0,p=1;
    printf("Enter the number :");
    scanf("%d",&x);
    printf("Enter the power of the number :");
    scanf("%d",&n);
    while(z!=n){     //loop executes until z becomes equal to n
        p=p*x;     //p stores the value of x^n 
        z++;      //z is used to to increment the power of x
    }
    printf("The result is : %d",p);
}