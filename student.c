#include <stdio.h>

int main() {
    float marks, percentage;
    char grade;

    printf("Enter the marks obtained by the student: ");
    scanf("%f", &marks);
    percentage = (marks / 100)*100;
    if (percentage < 25) {
        printf("grade = F\n");
    } else if (percentage >= 25 && percentage < 45) {
        printf("grade = E\n");
    } else if (percentage >= 45 && percentage < 50) {
       printf("grade = d\n");
    } else if (percentage >= 50 && percentage < 60) {
        printf("grade = C\n");
    } else if (percentage >= 60 && percentage < 80) {
       printf("grade = b\n");
   }
    else if("percentage < 80")
    {
        printf("grade = a\n");
    }
    else
    {
    	printf("please enter valid percenteage\n");
	}

   printf("Percentage: %f", percentage);


    return 0;
}

