#include <stdio.h>

int main() {
    float marksObtained, totalMarks, percentage;

    printf("Enter obtained marks: ");
    scanf("%f", &marksObtained);

    printf("Enter total marks: ");
    scanf("%f", &totalMarks);

    percentage = (marksObtained / totalMarks) * 100;

    printf("Percentage = %.2f%%", percentage);

    return 0;
}