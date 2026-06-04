//Write a program to Recursive Fibonacci
#include <stdio.h>  
int fib(int n){
    if(n==0||n==1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    int a,i;
    printf("enter number of term  : ");
    scanf("%d", &a);
    for(i=0;i<a;i++){
        printf("%d\t", fib(i));
    }
    return 0;
}