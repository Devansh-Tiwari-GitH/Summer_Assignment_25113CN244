#include <stdio.h>
#include <math.h>
void main(){
    int a,b=0,n,x,c=0,y;
    printf("Enter a number: ");
    scanf("%d",&n);
    x=n;
    y=n;

    while(n!=0){
        n=n/10;
        c++;
    }
    while(y!=0){
        a=y%10;
        b=b+pow(a,c);
        y=y/10;
    }
    if(x==b){
        printf("%d is an armstrong number",x);
    }
    else{
        printf("%d is not an armstrong number",x);
    }

}