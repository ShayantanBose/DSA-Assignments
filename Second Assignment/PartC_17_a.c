#include <stdio.h>
struct Student {
    int regNumber;
    char name[50];
    int age;
    float cgpa;
};
int main() {
    struct Student students[5];
    int i;
    int maxIndex = 0;
    for (i = 0; i < 5; i++) {
        printf("Enter details for student %d\n", i + 1);
        printf("Register Number: ");
        scanf("%d", &students[i].regNumber);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("CGPA: ");
        scanf("%f", &students[i].cgpa);
    }
    for (i = 1; i < 5; i++) {
        if (students[i].cgpa > students[maxIndex].cgpa) {
            maxIndex = i;
        }
    }
    printf("Student with the greatest CGPA is: %s with a CGPA of %.2f\n", students[maxIndex].name, students[maxIndex].cgpa);
    return 0;
}
