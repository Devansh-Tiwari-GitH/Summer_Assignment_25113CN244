#include <stdio.h>
int main(){
    int n,i,ceven=0,codd=0;
    printf("enter number of elements of array : ");
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++){            //for inserting array element
        printf("enter element %d : ", i+1);
        scanf("%d", &a[i]);
    }
    //counting odd and even 
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            ceven++;
        }
        else{
            codd++;
        }
    }
    printf("even elements are : %d\n", ceven);
    printf("odd elements are : %d\n", codd);
    return 0;
}