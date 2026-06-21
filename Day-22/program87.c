#include <stdio.h>
void main() {
    char str[100], ch;
    int i=0,c=0;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    printf("Enter the character to find: ");
    scanf("%c",&ch);
    while(str[i]!='\0') {
        if(str[i]==ch) {
            c++;
        }
        i++;
    }
    printf("Frequency of '%c' = %d\n",ch,c);
}