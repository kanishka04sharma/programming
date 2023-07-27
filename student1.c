#include <stdio.h>

int main() {
    int a,b,c,d,e,total;
	float average;
    char grade;

    printf("Enter 5 subject marks: \n");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
		if(a>40 && b>40 && c>40 && d>40 && e>40)
{
	printf("marks>40");
}
    else if (average >= 80) {
        printf("grade = a\n");
    } else if (average >= 60) {
        printf("grade = b\n");
    } else if (average >= 50) {
       printf("grade = c\n");
    } else if (average >= 45) {
        printf("grade = d\n");
    } else {
        printf("grade = f\n");
    }
    total=a+b+c+d+e;
    printf("total = %d\n",total);
    average = total / 5;
	 printf("Average marks: %f\n", average);

    return 0;
}

