
#include <stdio.h>
int main(){
    int i,j,n;
    printf("enter no of rows : ");
    scanf("%d", &n);
    for(i=n;i>=1;i--){
        //spaces
        for(j=0;j<=(n-i);j++){
            printf("  ");
        }
        //stars
        for(j=1;j<=(2*i-1);j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}