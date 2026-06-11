
#include <stdio.h>
int fib(int n){
    int i,c,j,temp,a=0,b=1;
    printf("%d %d ", a, b);
    for(i=1;i<=(n-2);i++){
        c=a+b;
        printf("%d ", c);
        temp=a;
        a=b;
        b=c;
    }
    return 0;
}
int main(){
    int n;
    printf("enter given number : ");
    scanf("%d", &n);
    fib(n);
    return 0;
}