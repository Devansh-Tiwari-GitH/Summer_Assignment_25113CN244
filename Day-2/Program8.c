#include <stdio.h>
void main(){
    int a,b=0,c,n,x=0;
    printf("Enter the number- ");
    scanf("%d",&n);
    x=n;
    while(n!=0){
        a=n%10;
        b=b*10+a;
        n=n/10;
    }
    if (x==b){
        printf("The number %d is a palindrome", x);
    }
    else{
        printf("The number %d is not a palindrome", x);
    }
}