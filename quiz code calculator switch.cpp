#include <stdio.h>

int main() {
    char sign;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &sign);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (sign) {
        case '+': 
		result = num1 + num2; break;
        case '-':
		 result = num1 - num2; break;
        case '*':
		 result = num1 * num2; break;
        case '/': 
            if (num2 != 0) {
                result = num1 / num2; 
            } else {
                printf("Division by zero is not allowed.\n");
                return 1;
            }
            break;
        default:
		 printf("Invalid operator.\n"); return 1;
    }

    printf("Result: %.2lf\n", result);
    return 0;
}

