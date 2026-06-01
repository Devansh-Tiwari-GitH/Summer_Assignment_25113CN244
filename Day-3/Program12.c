#include <stdio.h>
void main(){
    int a,b,c=1,n,m,i,z=1;
    printf("Enter the numbers- ");
    scanf("%d%d",&n,&m);
    a=n;
    b=m;
    if(n>m){
        for(i=1;i<=n;i++)
        {
            if(a%i==0&&b%i==0){
                c=i;
            }
        }
        z=a*b/c;          //formula of LCM is (a*b)/HCF
        printf("The LCM of %d and %d is %d",a,b,z);
    }
    else{
        for(i=1;i<=m;i++)
        {
            if(a%i==0&&b%i==0){
                c=i;
            }
        }
        z=a*b/c;         //formula of LCM is (a*b)/HCF
        printf("The LCM of %d and %d is %d",a,b,z);
    }
}
