#include <stdio.h>

int main() {
    float income;
    printf("Enter your annual income: ");
    scanf("%f", &income);

    if (income>200000) {
        printf("Tax Bracket: 32%%\n");
    } else if (income>150000) {
        printf("Tax Bracket: 22%%\n");
    } else if (income>100000) {
        printf("Tax Bracket: 12%%\n");
    } else {
        printf("Tax Bracket: No tax\n");
    }

    return 0;
}

