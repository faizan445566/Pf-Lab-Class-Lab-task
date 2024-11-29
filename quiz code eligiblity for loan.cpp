#include <stdio.h>

int main() {
    int age;
    float income;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your annual income: ");
    scanf("%f", &income);

    if (age >= 18) {
        if (income >= 50000) {
            printf("You are eligible for the loan.\n");
        } else {
            printf("You are not eligible for the loan due to low income.\n");
        }
    } else {
        printf("You are not eligible for the loan due to age restrictions.\n");
    }

    return 0;
}

