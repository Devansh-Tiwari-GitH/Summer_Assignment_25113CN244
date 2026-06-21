#include <stdio.h>
void main() {
    char str[100];
    int i=0,vow=0,con=0;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    while (str[i]!='\0') {
        // Check if character is an alphabet
        if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z')) {
            // Check for vowels
            if (str[i]=='A'||str[i] =='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
                vow++;
            } else {
                con++;
            }
        }
        i++;
    }
    printf("Number of vowels = %d\n", vow);
    printf("Number of consonants = %d\n", con);
}