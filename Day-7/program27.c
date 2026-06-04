//Write a program to Recursive sum of digits.
#include <stdio.h>
int sod(int n){
    if(n==0){
        return 0;
    }
    return (n%10)+sod(n/10);
}
int main(){
    int a;
    printf("enter a number : ");
    scanf("%d", &a);
    printf("%d", sod(a));
    return 0;
}