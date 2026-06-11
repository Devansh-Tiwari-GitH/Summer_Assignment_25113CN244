#include <stdio.h>
int main(){
    int i,j,n;
    char ch='A';
    printf("enter no of rows : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        //spaces
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        //char
        ch='A';
        for(j=1;j<=i;j++){
            printf("%c", ch);
            ch++;
        }
        //char right
        ch=ch-2;
        for(j = i - 1; j >= 1; j--){
            printf("%c", ch);
            ch--;
        }
        printf("\n");
    }
    return 0;
}