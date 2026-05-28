#include <stdio.h>
void main(){
    int a=0,b=1,c,i;
    for(i=0;i<=15;i++){
        printf(" %d \n",a);
        c=a+b;
        a=b;
        b=c;
    }
}