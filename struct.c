#include <stdio.h>

int main() {
    struct student {
        char name[50];
        int roll;
        float marks;
    };
    printf("Enter information of students:\n");
    struct student s1;
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter roll number: ");
    scanf("%d", &s1.roll);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);
    printf("Displaying information of student:\n");
    printf("Name: %s\n", s1.name);
    printf("Roll: %d\n", s1.roll);
    printf("Marks: %.2f\n", s1.marks);
    return 0;
}