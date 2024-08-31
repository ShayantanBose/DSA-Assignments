#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 100
#define NAME_LENGTH 50
int main() {
    char students[MAX_STUDENTS][NAME_LENGTH];
    int count = 0;
    char name[NAME_LENGTH];
    char choice;
    do {
        printf("Enter student name: ");
        scanf("%s", name);
        strcpy(students[count], name);
        count++;

        printf("Do you want to add another student? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' && count < MAX_STUDENTS);

    printf("\nList of students who submitted assignments:\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %s\n", i + 1, students[i]);
    }
    return 0;
}
