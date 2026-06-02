#include <stdio.h>
void main(){
    int a,i=0,n;
    int b[99];
    printf("Enter the number :");
    scanf("%d",&n);
    while(n!=0){
        a=n%2;
        b[i]=a;   //this array stores the binary number
        i++;
        n=n/2;
    }
    printf("The binary number is :");
    for(i=i-1;i>=0;i--){      //the loop is in reverse order because the binary number is stored in reverse order in the array
        printf("%d",b[i]);
    }
}