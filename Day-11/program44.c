
#include <stdio.h>
int fact(int a){
    int i,fact=1;
    for(i=a;i>=1;i--){
        fact=fact*i;
    }
    printf("factorial : %d", fact);
    return 0;
}
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d", &n);
    fact(n);
    return 0;
}