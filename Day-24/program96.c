#include <stdio.h>
void main() {
    char str[100];
    int i,j,k;
    printf("Enter a string: ");
    scanf("%s",str);
    // Find length manually
    int len=0;
    while(str[len]!='\0'){
        len++;
    }
    // Remove duplicates
    for(i=0;i<len;i++){
        for(j=i+1;j<len;j++){
            if(str[i]==str[j]){
                for(k=j;k<len;k++){
                    str[k]=str[k+1];
                }
                len--;   // reduce length
                j--;     // check new character at position j
            }
        }
    }
    printf("String after removing duplicates: %s\n", str);
}