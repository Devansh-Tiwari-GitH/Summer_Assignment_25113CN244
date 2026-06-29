#include <stdio.h>
#include <string.h>
#define MAX 100
int rollNo[MAX];
char name[MAX][50];
float marks[MAX];
int count = 0;
void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void deleteStudent();
void main() {
    int choice;
    do {
        printf("\n===== Student Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student Marks\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                updateStudent();
                break;
            case 5:
                deleteStudent();
                break;
            case 6:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while(choice != 6);
}
void addStudent() {
    if(count >= MAX) {
        printf("Record limit reached.\n");
        return;
    }
    printf("Enter Roll Number: ");
    scanf("%d", &rollNo[count]);
    printf("Enter Name: ");
    scanf("%s", name[count]);
    printf("Enter Marks: ");
    scanf("%f", &marks[count]);
    count++;
    printf("Student added successfully.\n");
}
void displayStudents() {
    int i;
    if(count == 0) {
        printf("No student records available.\n");
        return;
    }
    printf("\nRoll No\tName\tMarks\n");
    for(i = 0; i < count; i++) {
        printf("%d\t%s\t%.2f\n", rollNo[i], name[i], marks[i]);
    }
}
void searchStudent() {
    int roll, i, found = 0;
    printf("Enter Roll Number to search: ");
    scanf("%d", &roll);
    for(i = 0; i < count; i++) {
        if(rollNo[i] == roll) {
            printf("\nStudent Found!\n");
            printf("Roll No : %d\n", rollNo[i]);
            printf("Name    : %s\n", name[i]);
            printf("Marks   : %.2f\n", marks[i]);
            found = 1;
            break;
        }
    }
    if(found == 0) {
        printf("Student not found.\n");
    }
}
void updateStudent() {
    int roll, i, found = 0;
    printf("Enter Roll Number to update: ");
    scanf("%d", &roll);
    for(i = 0; i < count; i++) {
        if(rollNo[i] == roll) {
            printf("Enter New Marks: ");
            scanf("%f", &marks[i]);
            printf("Student marks updated successfully.\n");
            found = 1;
            break;
        }
    }
    if(found == 0) {
        printf("Student not found.\n");
    }
}
void deleteStudent() {
    int roll, i, j, found = 0;
    printf("Enter Roll Number to delete: ");
    scanf("%d", &roll);
    for(i = 0; i < count; i++) {
        if(rollNo[i] == roll) {
            for(j = i; j < count - 1; j++) {
                rollNo[j] = rollNo[j + 1];
                strcpy(name[j], name[j + 1]);
                marks[j] = marks[j + 1];
            }
            count--;
            printf("Student record deleted successfully.\n");
            found = 1;
            break;
        }
    }
    if(found == 0) {
        printf("Student not found.\n");
    }
}