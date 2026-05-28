#include <stdio.h>
void main(){
    int a,b=0,c,n;
    printf("Enter the number to be reversed-");
    scanf("%d",&n);
    while (n!=0){
        a=n%10;
        b=b*10+a;
        n=n/10;
    }
    printf("The reversed number is %d",b);
}