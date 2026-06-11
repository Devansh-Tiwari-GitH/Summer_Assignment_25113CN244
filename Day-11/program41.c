#include <stdio.h>
int sum(int a,int b){
    int sum=0;
    sum=a+b;
    printf("sum of the numbers : %d", sum);
    return 0;
}
int main(){
    int a,b;
    printf("enter first number : ");
    scanf("%d", &a);
    printf("enter second number : ");
    scanf("%d", &b);
    sum(a,b);
    return 0;
}    