#include <stdio.h>
int palindrome(int a){
    int rem,sum=0,temp,i,j;
    temp=a;
    while(temp!=0){
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
    }
    if(sum==a){
        printf("the given number is a palindrome ");
    }
    else{
        printf("the given number is not a palindrome");
    }
    return 0;
}
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d", &n);
    palindrome(n);
    return 0;
}