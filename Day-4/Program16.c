#include <stdio.h>
#include <math.h>
void main(){
    int a,b=0,n,x,c=0,y,i,m,j;
    printf("Enter the range of numbers: ");
    scanf("%d%d",&n,&m);
   for(i=n;i<=m;i++){
    x=i;
    y=i;
    c=0;
    b=0;
    while(x!=0){
        x=x/10;
        c++;
    }
    while(y!=0){
        a=y%10;
        b=b+pow(a,c);
        y=y/10;
    }
    if(i==b){
        printf("%d is an armstrong number\n",i);
    }
   }

}