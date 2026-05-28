#include <stdio.h>
void main(){
    int i,j,n,m,c;
    printf("Enter the lower and upper limit of prime number range-");
    scanf("%d%d",&n,&m);
    printf("The prime numbers between %d and %d are-",n,m);
    for(i=n;i<=m;i++){
        c=0;
        for(j=1;j<=i;j++){
            if(i%j==0){
                c++;
            }
    }
    if(c==2){
        printf("%d ",i);
    }
}
}