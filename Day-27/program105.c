#include <stdio.h>
#define MAX 100
struct Student {
    int roll;
    char name[50];
    float marks;
};
void main(){
    struct Student s[MAX];
    int n,i,choice,searchRoll,f=0;
    printf("Enter number of students: ");
    scanf("%d",&n);
    // Input student details
    for(i=0;i<n;i++){
        printf("\nEnter details of student %d\n",i+1);
        printf("Roll number: ");
        scanf("%d",&s[i].roll);
        printf("Name: ");
        scanf(" %s",s[i].name);
        printf("Marks: ");
        scanf("%f",&s[i].marks);
    }
    printf("1. Display All Students\n");
    printf("2. Search Student by Roll Number\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("\n===== STUDENT LIST =====\n");
            for(i=0;i<n;i++){
                printf("Roll: %d | Name: %s | Marks: %.2f\n",
                       s[i].roll,s[i].name,s[i].marks);
            }
            break;
        case 2:
            printf("Enter roll number to search: ");
            scanf("%d",&searchRoll);
            for(i=0;i<n;i++){
                if (s[i].roll==searchRoll) {
                    printf("Found!\n");
                    printf("Roll: %d | Name: %s | Marks: %.2f\n",
                           s[i].roll,s[i].name,s[i].marks);
                    f=1;
                    break;
                }
            }
            if(!f){
                printf("Student not found!\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
    }
}