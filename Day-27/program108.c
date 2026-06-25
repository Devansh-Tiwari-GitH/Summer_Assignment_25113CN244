#include <stdio.h>
#define MAX 100
struct Student {
    int roll;
    char name[50];
    float m1, m2, m3, total, percent;
    char grade;
};
void main() {
    struct Student s[MAX];
    int n,i,choice,searchRoll,f=0;
    printf("Enter number of students: ");
    scanf("%d",&n);
    // Input student data
    for(i=0;i<n;i++){
        printf("\nEnter details of student %d\n",i+1);
        printf("Roll Number: ");
        scanf("%d",&s[i].roll);
        printf("Name: ");
        scanf(" %s",s[i].name);
        printf("Marks of 3 subjects:\n");
        scanf("%f %f %f",&s[i].m1,&s[i].m2,&s[i].m3);
        s[i].total=s[i].m1+s[i].m2+s[i].m3;
        s[i].percent=s[i].total/3;
        // Grade calculation
        if (s[i].percent>=90)
            s[i].grade='A';
        else if (s[i].percent>=75)
            s[i].grade='B';
        else if (s[i].percent>=60)
            s[i].grade='C';
        else if (s[i].percent>=40)
            s[i].grade='D';
        else
            s[i].grade='F';
    }
    printf("1. Display All Marksheet\n");
    printf("2. Search Student by Roll Number\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            for(i=0;i<n;i++){
                printf("\nRoll: %d | Name: %s\n", s[i].roll, s[i].name);
                printf("Total: %.2f | Percent: %.2f%% | Grade: %c\n",
                       s[i].total,s[i].percent,s[i].grade);
            }
            break;
        case 2:
            printf("Enter Roll Number to search: ");
            scanf("%d",&searchRoll);
            for(i=0;i<n;i++){
                if (s[i].roll==searchRoll) {
                    printf("\nStudent Found!\n");
                    printf("Roll: %d\nName: %s\n",s[i].roll,s[i].name);
                    printf("Total: %.2f\nPercent: %.2f%%\nGrade: %c\n",
                           s[i].total,s[i].percent,s[i].grade);
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