#include <stdio.h>
void main(){
    int i,n,x,b=0;
    printf("Enter the number ");
    scanf("%d",&n);
    x=n;
    for(i=1;i<n;i++){
        if(n%i==0){
            b=b+i;  //this is the sum of all the factors of n except n itself
        }
    }
    if(b==x){     //checks if the number is perfect or not
        printf("The number %d is perfect", x);
    }
    else{
        printf("The number %d is not perfect", x);
    }
}