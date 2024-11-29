#include <stdio.h>

int main() {
    int score;
    printf("Enter your score: ");
    scanf("%d", &score);

    if (score >= 90) {
        printf("Achievement: Excellent\n");
    } else if (score >= 75) {
        printf("Achievement: Very Good\n");
    } else if (score >= 50) {
        printf("Achievement: Good\n");
    } else if (score >= 35) {
        printf("Achievement: Improve\n");
    } else {
        printf("Achievement: Poor\n");
    }

    return 0;
}

