#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct Book library[100];
    int bookCount = 0;
    int choice;
    int searchId;
    int found;

    while (1) {
        printf("\n=== MINI LIBRARY SYSTEM ===\n");
        printf("1. Add New Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (bookCount >= 100) {
                    printf("\nLibrary is full! Cannot add more books.\n");
                    break;
                }
                
                printf("\nEnter Book Details:\n");
                printf("Enter Book ID (Integer): ");
                scanf("%d", &library[bookCount].id);
                
                printf("Enter Book Title (No spaces): ");
                scanf("%s", library[bookCount].title);
                
                printf("Enter Author Name (No spaces): ");
                scanf("%s", library[bookCount].author);
                
                printf("Enter Book Price: ");
                scanf("%f", &library[bookCount].price);
                
                bookCount++; 
                printf("\nBook added successfully!\n");
                break;

            case 2:
                if (bookCount == 0) {
                    printf("\nNo books available in the library yet.\n");
                    break;
                }
                
                printf("\n--- Available Books ---\n");
                for (int i = 0; i < bookCount; i++) {
                    printf("ID: %d | Title: %s | Author: %s | Price: $%.2f\n", 
                           library[i].id, library[i].title, library[i].author, library[i].price);
                }
                break;

            case 3:
                if (bookCount == 0) {
                    printf("\nNo books available to search.\n");
                    break;
                }
                
                printf("\nEnter Book ID to search: ");
                scanf("%d", &searchId);
                
                found = 0;
                for (int i = 0; i < bookCount; i++) {
                    if (library[i].id == searchId) {
                        printf("\nBook Found!\n");
                        printf("ID: %d\nTitle: %s\nAuthor: %s\nPrice: $%.2f\n", 
                               library[i].id, library[i].title, library[i].author, library[i].price);
                        found = 1;
                        break; 
                    }
                }
                if (!found) {
                    printf("\nBook with ID %d not found.\n", searchId);
                }
                break;

            case 4:
                printf("\nExiting the library system. Thank you!\n");
                exit(0);

            default:
                printf("\nInvalid selection! Please enter a number between 1 and 4.\n");
        }
    }

    return 0;
}
