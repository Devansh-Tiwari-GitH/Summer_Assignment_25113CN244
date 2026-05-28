#include <stdio.h>

int main() {
    int b, c;
    int d = 1;

    printf("Enter the number of which you want table");
    scanf("%d", &b);

    printf("The multiplication table is ");

    for(c = 1; c <= 10; c++) {
        d = b * c;

        printf("\n");
        printf("%d", d);
    }

    return 0;
}