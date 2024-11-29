#include <stdio.h>

int main() {
    int credentials, securityLevel;
    printf("Do you have credentials? (1 for Yes, 0 for No): ");
    scanf("%d", &credentials);
    printf("Enter your security level (1-5): ");
    scanf("%d", &securityLevel);

    if (credentials == 1) {
        if (securityLevel >= 3) {
            printf("Access granted.\n");
        } else {
            printf("Access denied: Insufficient security level.\n");
        }
    } else {
        printf("Access denied: No credentials.\n");
    }

    return 0;
}

