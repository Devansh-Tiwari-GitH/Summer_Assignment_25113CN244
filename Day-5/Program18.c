#include <stdio.h>
void main(){
    int n,a,c=0,x,i,b=1;
    printf("Enter the number ");
    scanf("%d",&n);
    x=n;
    while(n!=0){
        a=n%10;
        for(i=a;i>=1;i--){
            b=b*i;
        }
        c=c+b;
        b=1;
        n=n/10;
    }
    if(c==x){
        printf("The number %d is strong", x);
    }
    else{
        printf("The number %d is not strong", x);
    }
}