#include <stdio.h>
void main(){
    int c=0,n,i;
    printf("Enter the number-");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            c++;        //if the number is divisible by i then c is incremented
        }
    }
    if(c==2){           //if c is 2 then the number is prime because it is divisible by 1 and itself only
        printf("Number %d is prime number",n);
    }
    else{
        printf("Number %d is not a prime number",n);
    }
}