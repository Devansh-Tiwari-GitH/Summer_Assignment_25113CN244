#include <stdio.h>
#include <string.h>
struct Book {
    int id;
    char title[50];
    char author[50];
    int quantity;
};
void main() {
    struct Book b[100];
    int choice, n = 0, i, id, found;
    do {
        printf("\n===== Mini Library System =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &b[n].id);
                printf("Enter Book Title: ");
                scanf("%s", b[n].title);
                printf("Enter Author Name: ");
                scanf("%s", b[n].author);
                printf("Enter Quantity: ");
                scanf("%d", &b[n].quantity);
                n++;
                printf("Book added successfully.\n");
                break;
            case 2:
                if(n == 0) {
                    printf("No books available.\n");
                } else {
                    printf("\nID\tTitle\tAuthor\tQuantity\n");
                    for(i = 0; i < n; i++) {
                        printf("%d\t%s\t%s\t%d\n",
                               b[i].id, b[i].title, b[i].author, b[i].quantity);
                    }
                }
                break;
            case 3:
                printf("Enter Book ID to search: ");
                scanf("%d", &id);
                found = 0;
                for(i = 0; i < n; i++) {
                    if(b[i].id == id) {
                        printf("\nBook Found!\n");
                        printf("ID       : %d\n", b[i].id);
                        printf("Title    : %s\n", b[i].title);
                        printf("Author   : %s\n", b[i].author);
                        printf("Quantity : %d\n", b[i].quantity);
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Book not found.\n");
                break;
            case 4:
                printf("Enter Book ID to issue: ");
                scanf("%d", &id);
                found = 0;
                for(i = 0; i < n; i++) {
                    if(b[i].id == id) {
                        found = 1;
                        if(b[i].quantity > 0) {
                            b[i].quantity--;
                            printf("Book issued successfully.\n");
                        } else {
                            printf("Book is not available.\n");
                        }
                        break;
                    }
                }
                if(found == 0)
                    printf("Book not found.\n");
                break;
            case 5:
                printf("Enter Book ID to return: ");
                scanf("%d", &id);
                found = 0;
                for(i = 0; i < n; i++) {
                    if(b[i].id == id) {
                        b[i].quantity++;
                        printf("Book returned successfully.\n");
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Book not found.\n");
                break;
            case 6:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while(choice != 6);
}