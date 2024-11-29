#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        if (number > 10) {
            printf("The number is even and greater than 10.\n");
        } else {
            printf("The number is even but not greater than 10.\n");
        }
    } else {
        printf("The number is not even.\n");
    }

    return 0;
}

