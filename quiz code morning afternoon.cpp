#include <stdio.h>

int main() {
    int hour;
    printf("Enter an hour (0-24): ");
    scanf("%d", &hour);

    switch (hour / 6) { // Divide hour into 6-hour blocks
        case 0: printf("Night\n"); break;
        case 1: printf("Morning\n"); break;
        case 2: printf("Afternoon\n"); break;
        case 3: printf("Evening\n"); break;
        case 4: printf("Night\n"); break;
        default: printf("Invalid input! Enter a number between 0 and 24.\n");
    }

    return 0;
}

