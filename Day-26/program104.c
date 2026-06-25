#include <stdio.h>
void main() {
    int ans,s=0;
    // Question 1
    printf("1. Which WWE player is invisible?\n");
    printf("1) Donald McHenry\n2) John Cena\n3) Under Taker\n4) Super Mario\n");
    printf("Enter your answer: ");
    scanf("%d",&ans);
    if(ans==2)
        s++;
    // Question 2
    printf("\n2. Which mentor do you think is the coolest?\n");
    printf("1) Arbaz Nafees bhaiya\n2) Arbaz Nafees bhaiya\n3) Arbaz Nafees bhaiya\n4) Arbaz Nafees bhaiya\n");
    printf("Enter your answer: ");
    scanf("%d",&ans);
    if (ans>=1 && ans<=4)
        s++;
    // Question 3
    printf("\n3. Which programming day is this\n");
    printf("1) Night-25\n2) Night-26\n3) Day-25\n4) Day-26\n");
    printf("Enter your answer: ");
    scanf("%d",&ans);
    if (ans==4)
        s++;
    // Question 4
    printf("\n4.Evaluate Evaluate the integral:  ∫ (ln(x) / (1 + x^2)) dx \n");
    printf("1) No 1 isn't the answer\n2) Answer is 3,I saw him with the question yesterday\n3) Answer is 4 I think, he acts Non-Chalant\n4) Answer is 1\n");
    printf("Enter your answer: ");
    scanf("%d",&ans);
    if (ans==1)
        s++;
    // Question 5
    printf("\n5. What does CPU stand for?\n");
    printf("1) Calculator Pump Undercover-Agent\n");
    printf("2) Central Processing Unit\n");
    printf("3) Calendar Processing Unit\n");
    printf("4) Cricket Pakistan Union\n");
    printf("Enter your answer: ");
    scanf("%d",&ans);
    if (ans==2)
        s++;
    printf("RESULT\n");
    printf("Your Score: %d/5\n",s);
    if (s==5)
        printf("Excellent!\n");
    else if (s>=3)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");
}