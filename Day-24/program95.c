#include <stdio.h>
void main() {
    char str[200],w[50],l[50];
    int i=0,j=0,maxLen=0,len=0;
    printf("Enter a sentence: ");
    fgets(str,sizeof(str),stdin);
    while(1){
        len=0;
        // Extract one word
        while(str[i]!=' '&&str[i]!='\0'&&str[i]!='\n'){
            w[len]=str[i];
            len++;
            i++;
        }
        w[len]='\0';
        // Check if this word is the largest
        if(len>maxLen){
            maxLen=len;
            // copy word to largest
            for(j=0;j<=len;j++) {
                l[j]=w[j];
            }
        }
        // If end of string
        if (str[i]=='\0'||str[i]=='\n') {
            break;
        }
        i++; // move past space
    }
    printf("Largest word: %s\n", l);
}