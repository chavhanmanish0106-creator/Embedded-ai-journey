#include <stdio.h>

int main() {
    int age;
    char grade;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your grade (A/B/C): ");
    scanf(" %c", &grade);

    printf("Student Details");
    printf("Age = %d", age);
    printf("Grade = %c        ", grade);

    return 0;
}