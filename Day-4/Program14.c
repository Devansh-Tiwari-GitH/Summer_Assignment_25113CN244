#include <stdio.h>
void main(){
    int a=0,b=1,c,i,n,x=0;
    printf("Enter the number to be found in serires:");
    scanf("%d",&n);
    for(i=0;i<=15;i++){
        x++;
        if(a==n){
            printf("The number %d is found at %d",n,x);

        }
        c=a+b;
        a=b;
        b=c;
        
    }
}