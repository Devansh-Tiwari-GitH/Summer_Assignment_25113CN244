#include <stdio.h>
void main(){
    int i,n,x,b=0;
    printf("Enter the number ");
    scanf("%d",&n);
    x=n;
    for(i=1;i<n;i++){
        if(n%i==0){
            b=b+i;
        }
    }
    if(b==x){
        printf("The number %d is perfect", x);
    }
    else{
        printf("The number %d is not perfect", x);
    }
}