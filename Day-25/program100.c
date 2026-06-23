#include <stdio.h>
void main() {
    char w[50][50],temp[50];
    int n,i,j,k1,k2,len1,len2;
    printf("Enter number of words: ");
    scanf("%d",&n);
    printf("Enter words:\n");
    for(i=0;i<n;i++){
        scanf("%s",w[i]);
    }
    // Sorting by length (Bubble sort)
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            // find length of word[i]
            len1=0;
            while(w[i][len1]!='\0'){
                len1++;
            }
            // find length of word[j]
            len2=0;
            while(w[j][len2]!='\0'){
                len2++;
            }
            // swap if word[i] is longer than word[j]
            if (len1>len2) {
                // swap
                for(k1=0;k1<50;k1++){
                    temp[k1]=w[i][k1];
                    w[i][k1]=w[j][k1];
                    w[j][k1]=temp[k1];
                    if(temp[k1]=='\0')
                        break;
                }
            }
        }
    }
    printf("Words sorted by length:\n");
    for(i=0;i<n;i++){
    printf("%s\n",w[i]);
    }
}