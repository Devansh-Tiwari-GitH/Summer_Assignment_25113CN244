#include <stdio.h>
#include <string.h>
void main() {
    char str1[100],str2[100];
    int i,len;
    printf("Enter a string: ");
    fgets(str1,sizeof(str1),stdin);
    len=strlen(str1);
    if(str1[len-1]=='\n'){
        str1[len-1]='\0';
        len--;
    }
    for(i=0;i<len-1;i++){
        str2[i]=str1[i+1];
    }
    str2[len-1]=str1[0];
    str2[len]='\0';
    printf("The rotated string: %s",str2);
}