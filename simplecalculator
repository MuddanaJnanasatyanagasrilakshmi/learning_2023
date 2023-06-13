#include <stdio.h>

int main() {
    double operand1, operand2;
    char operator;

    printf("Enter Number1: ");
    scanf("%lf", &operand1);

    printf("Enter the operator: ");
    scanf(" %c", &operator);

    printf("Enter Number2: ");
    scanf("%lf", &operand2);

    double result;

    switch (operator) {
        case '+':
            result = operand1 + operand2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = operand1 - operand2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = operand1 * operand2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (operand2 != 0) {
                result = operand1 / operand2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}

