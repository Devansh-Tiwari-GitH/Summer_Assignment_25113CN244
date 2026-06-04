#include <stdio.h>
int main(){
    int i,n,l=0;
    printf("Enter the number ");
    scanf("%d",&n);
    for(i=2;i*i<=n;i++){ //this loop finds the prime factors of n and stores the largest one in l
        while (n%i==0) {
            l=i;
            n=n/i;
        }
    }
    if (n>1) {   //if n is greater than 1 then it means that n itself is a prime factor and we check if it is greater than l or not
        l=n;
    }
    if(l==0){ //if l is still 0 then it means that there are no prime factors of n
        printf("no prime factor found");
    }
    else{
        printf("largest prime factor is: %d",l);
    }
    return 0;
}