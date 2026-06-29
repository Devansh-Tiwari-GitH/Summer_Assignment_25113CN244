#include <stdio.h>
#include <string.h>
struct Student {
    int rollNo;
    char name[50];
    float marks;
};
void main() {
    struct Student s[100];
    int choice, n = 0, i, roll, found;
    do {
        printf("\n===== Student Record System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Marks\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter Roll Number: ");
                scanf("%d", &s[n].rollNo);
                printf("Enter Name: ");
                scanf("%s", s[n].name);
                printf("Enter Marks: ");
                scanf("%f", &s[n].marks);
                n++;
                printf("Student record added successfully.\n");
                break;
            case 2:
                if(n == 0) {
                    printf("No student records available.\n");
                } else {
                    printf("\nRoll No\tName\tMarks\n");
                    for(i = 0; i < n; i++) {
                        printf("%d\t%s\t%.2f\n",
                               s[i].rollNo, s[i].name, s[i].marks);
                    }
                }
                break;
            case 3:
                printf("Enter Roll Number to search: ");
                scanf("%d", &roll);
                found = 0;
                for(i = 0; i < n; i++) {
                    if(s[i].rollNo == roll) {
                        printf("\nStudent Found!\n");
                        printf("Roll No : %d\n", s[i].rollNo);
                        printf("Name    : %s\n", s[i].name);
                        printf("Marks   : %.2f\n", s[i].marks);
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Student not found.\n");
                break;
            case 4:
                printf("Enter Roll Number to update marks: ");
                scanf("%d", &roll);
                found = 0;
                for(i = 0; i < n; i++) {
                    if(s[i].rollNo == roll) {
                        printf("Enter New Marks: ");
                        scanf("%f", &s[i].marks);
                        printf("Marks updated successfully.\n");
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Student not found.\n");
                break;
            case 5:
                printf("Enter Roll Number to delete: ");
                scanf("%d", &roll);
                found = 0;
                for(i = 0; i < n; i++) {
                    if(s[i].rollNo == roll) {
                        int j;
                        for(j = i; j < n - 1; j++) {
                            s[j] = s[j + 1];
                        }
                        n--;
                        printf("Student record deleted successfully.\n");
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Student not found.\n");
                break;
            case 6:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while(choice != 6);
}