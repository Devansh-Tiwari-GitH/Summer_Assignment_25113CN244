#include <stdio.h>
void main(){
    char str[100];
    int l=0,i,P=1;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    // Find length (excluding newline)
    while(str[l]!='\0'&&str[l]!='\n') {
        l++;
    }
    // Check palindrome
    for(i=0;i<l/2;i++) {
        if(str[i]!=str[l-1-i]) {
            P=0;
            break;
        }
    }
    if (P)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");
}