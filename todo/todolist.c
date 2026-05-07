#include <stdio.h>
#include <string.h>

#define MAX 10

struct Task {
    char name[50];
    int done; // 0 = not done, 1 = done
};

struct Task tasks[MAX];
int count = 0;

void addTask() {
    if (count < MAX) {
        printf("Enter task: ");
        scanf("%s", tasks[count].name);
        tasks[count].done = 0;
        count++;
    } else {
        printf("List full!\n");
    }
}

void displayTasks() {
    for (int i = 0; i < count; i++) {
        printf("%d. %s [%s]\n", i+1, tasks[i].name,
               tasks[i].done ? "Done" : "Not Done");
    }
}

void markTask() {
    int n;
    printf("Enter task number to mark done: ");
    scanf("%d", &n);
    if (n > 0 && n <= count) tasks[n-1].done = 1;
}

void deleteTask() {
    int n;
    printf("Enter task number to delete: ");
    scanf("%d", &n);
    if (n > 0 && n <= count) {
        for (int i = n-1; i < count-1; i++) tasks[i] = tasks[i+1];
        count--;
    }
}

int main() {
    int choice;
    do {
        printf("\n1.Add 2.Display 3.Mark 4.Delete 5.Exit\nChoice: ");
        scanf("%d", &choice);
        if (choice == 1) addTask();
        else if (choice == 2) displayTasks();
        else if (choice == 3) markTask();
        else if (choice == 4) deleteTask();
    } while (choice != 5);
    return 0;
}

