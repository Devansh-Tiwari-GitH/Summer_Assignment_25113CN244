#include <stdio.h>
void main(){
    int i,j,n,m,c;
    printf("Enter the lower and upper limit of prime number range-");
    scanf("%d%d",&n,&m);
    printf("The prime numbers between %d and %d are-",n,m);
    for(i=n;i<=m;i++){
        c=0;
        for(j=1;j<=i;j++){
            if(i%j==0){     //if the number is divisible by j then c is incremented
                c++;    
            }
    }
    if(c==2){     //if c is 2 then the number is prime because it is divisible by 1 and itself only
        printf("%d ",i);
    }
}
}