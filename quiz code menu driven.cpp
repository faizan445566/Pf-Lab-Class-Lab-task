#include <stdio.h>

int main() {
    int choice;
    printf("Menu:\n");
    printf("1. Say Hello\n");
    printf("2. Display Today's Date\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: 
		printf("Hello, User!\n"); 
		break;
        case 2:
		 printf("Today's date is: 15 November 2024\n");
		break; 
        case 3:
		 printf("Exiting the program. Goodbye!\n");
		 break;
        default: 
		printf("Invalid choice! Please select 1, 2, or 3.\n");
    }

    return 0;
}

