#include <stdio.h>
void main() {
    char str[100];
    int l=0;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    while (str[l]!='\0'){
        l++;
    }
    // If fgets() reads a newline, exclude it from the length
    if (l>0&&str[l-1]=='\n'){
        l--;
    }
    printf("Length of the string = %d\n", l);
}