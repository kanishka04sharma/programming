#include <stdio.h>

int main() {
    int rollNumber;
    float physics,chemistry,computer;
    float total, per;
    char division;

    printf("enter the  Roll Number of the student");
    scanf("%d", &rollNumber);

    printf("entr the marks of Physics, Chemistry, and Computer");
    scanf("%f %f %f", &physics, &chemistry, &computer);
    total = physics+chemistry+computer;
    per = total /3;
    if (per >= 60) {
        printf("division = first\n");
    } else if (per >= 50) {
        printf("division = second\n");
    } else if (per >= 33) {
        printf("division = third\n");
    } else {
        printf("division = fail\n");
    }

    printf("Total Marks: %f\n", total);
    printf("Percentage: %.f\n", per);

    return 0;
}

