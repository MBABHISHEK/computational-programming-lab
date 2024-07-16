#include <stdio.h>

int main() {
    int number;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is positive or negative using the ternary operator
    (number >= 0) ? printf("%d is positive.\n", number) : printf("%d is negative.\n", number);

    return 0;
}
