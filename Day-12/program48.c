#include <stdio.h>
int perfect(int n){
    int i,j,sum=1,temp=0;
    temp=n;
    for(i=2;i*i<=n;i++){
        if(temp%1==0){
            sum=sum+i;
        }
        if (i * i != temp) {
                sum = sum + (temp / i); // Add the larger paired factor
            }
    }
    if(sum==n){
        printf("the given number is a perfect number ");
    }
    else{
        printf("the given number is not a perfect number ");
    }
    return 0;
}
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d", &n);
    perfect(n);
    return 0;
}