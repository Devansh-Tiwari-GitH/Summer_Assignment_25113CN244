#include <stdio.h>
#include <string.h>
#define MAX 100
struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};
struct Contact contacts[MAX];
int count = 0;
void addContact() {
    if (count >= MAX) {
        printf("Contact list is full!\n");
        return;
    }
    printf("Enter Name: ");
    scanf(" %[^\n]", contacts[count].name);
    printf("Enter Phone Number: ");
    scanf("%s", contacts[count].phone);
    printf("Enter Email: ");
    scanf("%s", contacts[count].email);
    count++;
    printf("Contact added successfully!\n");
}
void viewContacts() {
    if (count == 0) {
        printf("No contacts available.\n");
        return;
    }
    printf("\n--- Contact List ---\n");
    for (int i = 0; i < count; i++) {
        printf("\nContact %d\n", i + 1);
        printf("Name : %s\n", contacts[i].name);
        printf("Phone: %s\n", contacts[i].phone);
        printf("Email: %s\n", contacts[i].email);
    }
}
void searchContact() {
    char searchName[50];
    int found = 0;
    printf("Enter name to search: ");
    scanf(" %[^\n]", searchName);
    for (int i = 0; i < count; i++) {
        if (strcmp(contacts[i].name, searchName) == 0) {
            printf("\nContact Found!\n");
            printf("Name : %s\n", contacts[i].name);
            printf("Phone: %s\n", contacts[i].phone);
            printf("Email: %s\n", contacts[i].email);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Contact not found.\n");
    }
}
void main() {
    int choice;
    do {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. View Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                viewContacts();
                break;
            case 3:
                searchContact();
                break;
            case 4:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 4);
}