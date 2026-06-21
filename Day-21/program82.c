#include <stdio.h>
void main() {
    char str[100],temp;
    int i,l=0;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    // Find string length
    while (str[l]!='\0'&&str[l]!='\n'){
        l++;
    }
    // Reverse the string
    for (i=0;i<l/2;i++) {
        temp=str[i];
        str[i]=str[l-1-i];
        str[l-1-i] =temp;
    }
    printf("Reversed string: %.*s\n",l,str);
}