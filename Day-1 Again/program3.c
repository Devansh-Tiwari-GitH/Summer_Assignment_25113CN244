#include <stdio.h>

int main() {
    int i, n, a = 1;

    printf("Enter the number of which you want to find factorial");
    scanf("%d", &n);

    for(i = n; i >= 1; i--) {
        a = a * i;
    }

    printf("The factorial of %d is %d", n, a);

    return 0;
}