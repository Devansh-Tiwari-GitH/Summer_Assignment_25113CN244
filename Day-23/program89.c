#include <stdio.h>
void main() {
    char str[100];
    int i,j=0,c;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0'&&str[i]!='\n';i++) {
        c=0;
        for(j=0;str[j]!='\0'&&str[j]!='\n';j++) {
            if(str[i]==str[j]) {
                c++;
            }
        }
        if(c==1) {
            printf("First non-repeating character in the string: %c",str[i]);
            break;
        }
        else {
            printf("No non-repeating character found in the string.");
            break;
        }
    }
}