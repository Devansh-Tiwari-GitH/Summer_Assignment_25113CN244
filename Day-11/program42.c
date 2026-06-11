#include <stdio.h>
int max(int a,int b){
    if(a>b){
        printf("maximum : %d", a);
    }
    else{
        printf("maximum : %d", b);
    }
    return 0;
}
int main(){
    int a,b;
    printf("enter first number : ");
    scanf("%d", &a);
    printf("enter second number : ");
    scanf("%d", &b);
    max(a,b);
    return 0;
}