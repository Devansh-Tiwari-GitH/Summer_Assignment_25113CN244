#include <stdio.h>
void main() {
    char str[100],maxC;
    int i,j,c,maxF=0;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0'&&str[i]!='\n';i++){
        c=0;
        for(j=0;str[j]!='\0'&&str[j]!='\n';j++){
            if(str[i]==str[j]){
                c++;
            }
        }
        if(c>maxF){
            maxF=c;
            maxC=str[i];
        }
    }
    printf("Most frequent character in the string: %c",maxC);
}