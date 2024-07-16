#include <stdio.h>

int main() {
    char operator;
    int operand1, operand2, result;

    // Input operator and operands
    printf("Enter an operator (+, -, *, /, %): ");
    scanf(" %c", &operator);
    printf("Enter two operands: ");
    scanf("%d %d", &operand1, &operand2);

    // Perform operation based on operator using switch statement
    switch (operator) {
        case '+':
            result = operand1 + operand2;
            printf("%d + %d = %d\n", operand1, operand2, result);
            break;
        case '-':
            result = operand1 - operand2;
            printf("%d - %d = %d\n", operand1, operand2, result);
            break;
        case '*':
            result = operand1 * operand2;
            printf("%d * %d = %d\n", operand1, operand2, result);
            break;
        case '/':
            // Check for division by zero
            if (operand2 != 0) {
                result = operand1 / operand2;
                printf("%d / %d = %d\n", operand1, operand2, result);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        case '%':
            // Check for modulus with zero
            if (operand2 != 0) {
                result = operand1 % operand2;
                printf("%d %% %d = %d\n", operand1, operand2, result);
            } else {
                printf("Error! Modulus by zero.\n");
            }
            break;
        default:
            printf("Error! Invalid operator.\n");
    }

    return 0;
}
