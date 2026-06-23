#include <stdio.h>
#include <string.h>
void main(){
    char str[100];
    int i,c;
    printf("Enter a string: ");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        c=1;
        while(str[i]==str[i+1]){
            c++;
            i++;
        }
        printf("%c%d", str[i],c);
    }
}