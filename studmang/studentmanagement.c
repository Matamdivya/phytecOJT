#include <stdio.h>
#include <string.h>

#define MAX 10   // maximum number of students

struct Student {
    int id;
    char name[50];
    int age;
};

struct Student students[MAX];
int count = 0;   // how many students are stored

void addStudent() {
    if (count >= MAX) {
        printf("No space left!\n");
        return;
    }
    printf("Enter ID: ");
    scanf("%d", &students[count].id);
    printf("Enter Name: ");
    scanf("%s", students[count].name);
    printf("Enter Age: ");
    scanf("%d", &students[count].age);
    count++;
    printf("Student added!\n");
}

void displayStudents() {
    if (count == 0) {
        printf("No students yet.\n");
        return;
    }
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, Age: %d\n", students[i].id, students[i].name, students[i].age);
    }
}

void updateStudent() {
    int id;
    printf("Enter ID to update: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            printf("Enter new Name: ");
            scanf("%s", students[i].name);
            printf("Enter new Age: ");
            scanf("%d", &students[i].age);
            printf("Updated!\n");
            return;
        }
    }
    printf("Student not found.\n");
}

void deleteStudent() {
    int id;
    printf("Enter ID to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            for (int j = i; j < count - 1; j++) {
                students[j] = students[j + 1];
            }
            count--;
            printf("Deleted!\n");
            return;
        }
    }
    printf("Student not found.\n");
}

int main() {
    int choice;
    do {
        printf("\n--- Student Management ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Update Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) addStudent();
        else if (choice == 2) displayStudents();
        else if (choice == 3) updateStudent();
        else if (choice == 4) deleteStudent();
        else if (choice == 5) printf("Goodbye!\n");
        else printf("Invalid choice.\n");

    } while (choice != 5);

    return 0;
}

