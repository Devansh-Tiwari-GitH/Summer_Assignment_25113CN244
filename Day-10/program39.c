#include <stdio.h>
int main(){
    int i,j,n;
    printf("enter no of rows : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        // 1. Print leading spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // 2. Print ascending numbers from 1 to i
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // 3. Print descending numbers from (i - 1) down to 1
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}