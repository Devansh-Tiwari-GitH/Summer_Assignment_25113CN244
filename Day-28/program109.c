#include <stdio.h>
#include <string.h>
struct Book {
    int id;
    char title[50];
    char author[50];
    int issued;   // 0 = Available, 1 = Issued
};
struct Book books[100];
int count = 0;
void addBook() {
    printf("\nEnter Book ID: ");
    scanf("%d", &books[count].id);
    getchar(); // clear buffer
    printf("Enter Book Title: ");
    fgets(books[count].title, sizeof(books[count].title), stdin);
    printf("Enter Author Name: ");
    fgets(books[count].author, sizeof(books[count].author), stdin);
    books[count].issued = 0;
    count++;
    printf("Book Added Successfully!\n");
}
void displayBooks() {
    if (count == 0) {
        printf("\nNo books available.\n");
        return;
    }
    printf("\nLibrary Books:\n");
    for (int i = 0; i < count; i++) {
        printf("\nBook ID: %d", books[i].id);
        printf("\nTitle: %s", books[i].title);
        printf("Author: %s", books[i].author);
        printf("Status: %s\n",
               books[i].issued ? "Issued" : "Available");
    }
}
void searchBook() {
    int id;
    printf("\nEnter Book ID to Search: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (books[i].id == id) {
            printf("\nBook Found!\n");
            printf("Title: %s", books[i].title);
            printf("Author: %s", books[i].author);
            printf("Status: %s\n",
                   books[i].issued ? "Issued" : "Available");
            return;
        }
    }
    printf("Book Not Found!\n");
}
void issueBook() {
    int id;
    printf("\nEnter Book ID to Issue: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (books[i].id == id) {
            if (books[i].issued == 0) {
                books[i].issued = 1;
                printf("Book Issued Successfully!\n");
            } else {
                printf("Book Already Issued!\n");
            }
            return;
        }
    }
    printf("Book Not Found!\n");
}
void returnBook() {
    int id;
    printf("\nEnter Book ID to Return: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (books[i].id == id) {
            if (books[i].issued == 1) {
                books[i].issued = 0;
                printf("Book Returned Successfully!\n");
            } else {
                printf("Book Was Not Issued!\n");
            }
            return;
        }
    }
    printf("Book Not Found!\n");
}
void main() {
    int choice;
    do {
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                issueBook();
                break;
            case 5:
                returnBook();
                break;
            case 6:
                printf("Thank You!\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    } while (choice != 6);
}