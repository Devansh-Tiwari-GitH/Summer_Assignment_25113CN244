#include <stdio.h>
#define MAX 100
struct Employee {
    int id;
    char name[50];
    float salary;
};
void main(){
    struct Employee e[MAX];
    int n,i,choice,searchId,f=0;
    printf("Enter number of employees: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nEnter details of employee %d\n",i+1);
        printf("Employee ID: ");
        scanf("%d",&e[i].id);
        printf("Name: ");
        scanf(" %s",e[i].name);
        printf("Salary: ");
        scanf("%f",&e[i].salary);
    }
    printf("1. Display All Employees\n");
    printf("2. Search Employee by ID\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch (choice) {
        case 1:
            for(i=0;i<n;i++) {
                printf("ID: %d | Name: %s | Salary: %.2f\n",
                       e[i].id,e[i].name,e[i].salary);
            }
            break;
        case 2:
            printf("Enter Employee ID to search: ");
            scanf("%d",&searchId);
            for(i=0;i<n;i++){
                if (e[i].id==searchId) {
                    printf("Employee Found!\n");
                    printf("ID: %d | Name: %s | Salary: %.2f\n",
                           e[i].id,e[i].name,e[i].salary);
                    f=1;
                    break;
                }
            }
            if (!f){
                printf("Employee not found!\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
    }
}