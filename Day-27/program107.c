#include <stdio.h>
#define MAX 100
struct Employee {
    int id;
    char name[50];
    float basic,allowance,deduction,netSalary;
};
void main() {
    struct Employee e[MAX];
    int n,i,choice,searchId,f=0;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    // Input employee details
    for(i=0;i<n;i++){
        printf("\nEnter details of employee %d\n",i+1);
        printf("Employee ID: ");
        scanf("%d",&e[i].id);
        printf("Name: ");
        scanf(" %s",e[i].name);
        printf("Basic Salary: ");
        scanf("%f",&e[i].basic);
        printf("Allowance: ");
        scanf("%f",&e[i].allowance);
        printf("Deduction: ");
        scanf("%f",&e[i].deduction);
        // Salary calculation
        e[i].netSalary=e[i].basic+e[i].allowance-e[i].deduction;
    }
    printf("1. Display All Salary Records\n");
    printf("2. Search Employee by ID\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            for(i=0;i<n;i++){
                printf("ID: %d | Name: %s | Net Salary: %.2f\n",
                       e[i].id,e[i].name,e[i].netSalary);
            }
            break;
        case 2:
            printf("Enter Employee ID to search: ");
            scanf("%d",&searchId);
            for(i=0;i<n;i++){
                if (e[i].id==searchId) {
                    printf("Employee Found!\n");
                    printf("ID: %d\nName: %s\nNet Salary: %.2f\n",
                           e[i].id,e[i].name,e[i].netSalary);
                    f=1;
                    break;
                }
            }
            if(!f){
                printf("Employee not found!\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
    }
}