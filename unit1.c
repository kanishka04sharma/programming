#include <stdio.h>

int main() {
    int units;
    float amount, discount , totalPayAmount;
    printf("Enter the units ");
    scanf("%d", &units);
    if (units <= 10) {
        amount = units * 4.0;
    } else if (units <= 20) {
        amount = 10 * 4.0 + (units - 10) * 4.0 * 1.1;
        discount = 10;
    } else if (units <= 40) {
        amount = 10 * 4.0 + 10 * 4.0 * 1.1 + (units - 20) * 4.0 * 1.15;
        discount = 15;
    } else {
        amount = 10 * 4.0 + 10 * 4.0 * 1.1 + 20 * 4.0 * 1.15 + (units - 40) * 4.0 * 1.3;
        discount = 30;
    }

    totalPayAmount = amount - (amount * discount / 100.0);

    printf("Unit: %d\n", units);
    printf("Amount: %f\n", amount);
    printf("Discount: %f\n", discount);
    printf("Total Pay Amount: %f\n", totalPayAmount);

    return 0;
}

