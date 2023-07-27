#include <stdio.h>

int main() {
    int rollNumber;
    float physicsMarks, chemistryMarks, computerMarks;
    float totalMarks, percentage;
    char division;

    printf("Input the Roll Number of the student: ");
    scanf("%d", &rollNumber);

    printf("Input the marks of Physics, Chemistry, and Computer Application: ");
    scanf("%f %f %f", &physicsMarks, &chemistryMarks, &computerMarks);
    totalMarks = physicsMarks + chemistryMarks + computerMarks;
    percentage = totalMarks / 3.0;
    if (percentage >= 60) {
        division = 'A';
    } else if (percentage >= 50) {
        division = 'B';
    } else if (percentage >= 40) {
        division = 'C';
    } else {
        division = 'F';
    }

    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Division: %c\n", division);

    return 0;
}

