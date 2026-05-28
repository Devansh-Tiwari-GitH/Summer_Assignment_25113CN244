#include <stdio.h>
void main(){
    int a,b,c=1,n,m,i;
    printf("Enter the numbers- ");
    scanf("%d%d",&n,&m);
    a=n;
    b=m;
    if(n>m){
        for(i=1;i<=n;i++)
        {
            if(a%i==0&&b%i==0){
                c=c*i;
                n=n/i;
                m=m/i;
            }
        }
        printf("The HCF of %d and %d is %d",a,b,c);
    }
    else{
        for(i=1;i<=m;i++)
        {
            if(a%i==0&&b%i==0){
                c=c*i;
                n=n/i;
                m=m/i;
            }
        }
        printf("The HCF of %d and %d is %d",a,b,c);
    }
}
