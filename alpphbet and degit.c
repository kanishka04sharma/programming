#include <stdio.h>

int main() {
    char user;
    
    printf("Enter a character and degit: ");
    scanf("%c", &user);

    if ((user >= 'A' && user <= 'Z') || (user >= 'a' && user <= 'z')) {
        printf("%c is an alphabet.\n", user);
    } else if (user >= '0' && user <= '9') {
        printf("%c is a digit.\n", user);
    } else {
        printf("Invalid input. Please enter an alphabet or a digit.\n");
    }

    return 0;
}

