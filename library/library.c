#include <stdio.h>
#include <string.h>

#define MAX 20   // maximum number of books

struct Book {
    int id;
    char title[50];
    char author[50];
};

struct Book library[MAX];
int count = 0;   // how many books are stored

// Add a book
void addBook() {
    if (count >= MAX) {
        printf("No space left!\n");
        return;
    }
    printf("Enter Book ID: ");
    scanf("%d", &library[count].id);
    printf("Enter Title: ");
    scanf("%s", library[count].title);
    printf("Enter Author: ");
    scanf("%s", library[count].author);
    count++;
    printf("Book added!\n");
}

// Display all books
void displayBooks() {
    if (count == 0) {
        printf("No books in library.\n");
        return;
    }
    printf("\n--- Library Books ---\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Title: %s, Author: %s\n",
               library[i].id, library[i].title, library[i].author);
    }
}

// Update a book by ID
void updateBook() {
    int id;
    printf("Enter Book ID to update: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (library[i].id == id) {
            printf("Enter new Title: ");
            scanf("%s", library[i].title);
            printf("Enter new Author: ");
            scanf("%s", library[i].author);
            printf("Book updated!\n");
            return;
        }
    }
    printf("Book not found.\n");
}

// Delete a book by ID
void deleteBook() {
    int id;
    printf("Enter Book ID to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (library[i].id == id) {
            for (int j = i; j < count - 1; j++) {
                library[j] = library[j + 1];
            }
            count--;
            printf("Book deleted!\n");
            return;
        }
    }
    printf("Book not found.\n");
}

int main() {
    int choice;
    do {
        printf("\n--- Library Management ---\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Update Book\n");
        printf("4. Delete Book\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) addBook();
        else if (choice == 2) displayBooks();
        else if (choice == 3) updateBook();
        else if (choice == 4) deleteBook();
        else if (choice == 5) printf("Goodbye!\n");
        else printf("Invalid choice.\n");

    } while (choice != 5);

    return 0;
}

