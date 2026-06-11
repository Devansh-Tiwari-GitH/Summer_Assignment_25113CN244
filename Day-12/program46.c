#include <stdio.h>
#include <math.h>
int armstrong(int a){
    int i,j,c=0,sum=0,rem,temp;
    temp=a;
    //to count number of digits
    while(temp!=0){
        c++;
        temp=temp/10;
    }
    //to check armstrong
    temp=a;
    while(temp!=0){
        rem=temp%10;
        sum=sum+round(pow(rem,c));
        temp=temp/10;
    }
    if(sum==a){
        printf("the given number is a armstrong number");
    }
    else{
        printf("the given number is not a armstrong number");
    }
    return 0;
}
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d", &n);
    armstrong(n);
    return 0;
}