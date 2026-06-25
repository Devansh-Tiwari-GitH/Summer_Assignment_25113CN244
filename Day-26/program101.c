#include <stdio.h>
void main() {
    int lo=1,hi=100;
    char resp;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        printf("Is it %d? (h/l/c): ",mid);
        scanf(" %c", &resp);
        if(resp=='c'){
            printf("Found it!\n");
            break;
        }
        else if(resp=='l'){
            hi=mid-1;
        }
        else if(resp=='h'){
            lo=mid+1;
        }
    }
}