#include <stdio.h>
void main() {
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age>=18) {
        printf("You are eligible to vote.\n");
    }
    else if(age>=0){
        printf("You are not eligible to vote.\n");
        printf("You can vote after %d year(s).\n",18-age);
    }
    else{
        printf("Invalid age entered.\n");
    }
}