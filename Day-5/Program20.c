#include <stdio.h>
int main(){
    int i,n,l=0;
    printf("Enter the number ");
    scanf("%d",&n);
    for(i=2;i*i<=n;i++){
        while (n%i==0) {
            l=i;
            n=n/i;
        }
    }
    if (n>1) {
        l=n;
    }
    if(l==0){
        printf("no prime factor found");
    }
    else{
        printf("largest prime factor is: %d",l);
    }
    return 0;
}