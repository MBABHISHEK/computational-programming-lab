#include <stdio.h>

int main() {
    int number;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is odd or even using bitwise AND
    if (number & 1) {
        printf("%d is ODD\n", number);
    } else {
        printf("%d is EVEN\n", number);
    }

    return 0;
}
