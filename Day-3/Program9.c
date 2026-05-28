#include <stdio.h>
void main(){
    int c=0,n,i;
    printf("Enter the number-");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            c++;
        }
    }
    if(c==2){
        printf("Number %d is prime number",n);
    }
    else{
        printf("Number %d is not a prime number",n);
    }
}