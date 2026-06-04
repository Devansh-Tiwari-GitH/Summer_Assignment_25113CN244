//Write a program to Recursive reverse number.
#include <stdio.h>
int rev(int n,int sum){
    if(n==0){
        return sum;
    }
    return rev(n/10,sum*10+(n%10));
    
}
int main(){
    int a;
    printf("enter a number : ");
    scanf("%d", &a);
    printf("%d", rev(a, 0));
}