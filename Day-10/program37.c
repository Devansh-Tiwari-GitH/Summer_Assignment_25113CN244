#include <stdio.h>
int main(){
    int i,j,n;
    printf("enter no of rows : ");
    scanf("%d", &n);
    for(i=0;i<=n;i++){
        //spaces
        for(j=n;j>=i;j--){
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