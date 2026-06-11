#include <stdio.h>
int prime(int a){
    int i,isprime=1;
    for(i=2;i*i<=a;i++){
        if(a%i==0){
            isprime=0;
            a=a/i;
        }
        else{
            isprime=1;
        }
    }
    if(isprime==1){
        printf("given number is a prime number.");
    }
    else{
        printf("given number is not a prime number.");
    }
    return 0;
}
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d", &n);
    prime(n);
    return 0;
}