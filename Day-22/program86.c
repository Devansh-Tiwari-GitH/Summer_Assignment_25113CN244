#include <stdio.h>
void main() {
    char str[200];
    int i, w = 1;
    printf("Enter a sentence: ");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' ')
            w++;
    }
    printf("Number of words = %d\n", w);
}