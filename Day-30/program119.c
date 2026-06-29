#include <stdio.h>
#include <string.h>
struct Employee {
    int id;
    char name[50];
    char department[50];
    float salary;
};
void main() {
    struct Employee e[100];
    int choice, n = 0, i, id, found;
    do {
        printf("\n===== Mini Employee Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &e[n].id);
                printf("Enter Employee Name: ");
                scanf("%s", e[n].name);
                printf("Enter Department: ");
                scanf("%s", e[n].department);
                printf("Enter Salary: ");
                scanf("%f", &e[n].salary);
                n++;
                printf("Employee added successfully.\n");
                break;
            case 2:
                if(n == 0) {
                    printf("No employee records available.\n");
                } else {
                    printf("\nID\tName\tDepartment\tSalary\n");
                    for(i = 0; i < n; i++) {
                        printf("%d\t%s\t%s\t\t%.2f\n",
                               e[i].id, e[i].name, e[i].department, e[i].salary);
                    }
                }
                break;
            case 3:
                printf("Enter Employee ID to search: ");
                scanf("%d", &id);
                found = 0;
                for(i = 0; i < n; i++) {
                    if(e[i].id == id) {
                        printf("\nEmployee Found!\n");
                        printf("ID         : %d\n", e[i].id);
                        printf("Name       : %s\n", e[i].name);
                        printf("Department : %s\n", e[i].department);
                        printf("Salary     : %.2f\n", e[i].salary);
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Employee not found.\n");
                break;
            case 4:
                printf("Enter Employee ID to update salary: ");
                scanf("%d", &id);
                found = 0;
                for(i = 0; i < n; i++) {
                    if(e[i].id == id) {
                        printf("Enter New Salary: ");
                        scanf("%f", &e[i].salary);
                        printf("Salary updated successfully.\n");
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Employee not found.\n");
                break;
            case 5:
                printf("Enter Employee ID to delete: ");
                scanf("%d", &id);
                found = 0;
                for(i = 0; i < n; i++) {
                    if(e[i].id == id) {
                        int j;
                        for(j = i; j < n - 1; j++) {
                            e[j] = e[j + 1];
                        }
                        n--;
                        printf("Employee deleted successfully.\n");
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Employee not found.\n");
                break;
            case 6:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while(choice != 6);
}