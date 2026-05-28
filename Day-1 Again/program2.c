#include <stdio.h>

int main() {
    int a, b = 0, c, n;

    printf("Enter the number of which you want to find sum ");
    scanf("%d", &n);

    while(n != 0) {
        a = n % 10;
        b = b + a;
        n = n / 10;
    }

    printf("The sum of digits of the number is %d", b);

    return 0;
}