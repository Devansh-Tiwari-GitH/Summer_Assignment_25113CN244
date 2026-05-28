#include <stdio.h>

int main() {
    int n, i;
    int a = 0;

    printf("Enter the natural number upto which you want sum");
    scanf("%d", &n);

    for(i = 0; i <= n; i++) {
        a = a + i;
    }

    printf("The sum upto that digit is %d", a);

    return 0;
}