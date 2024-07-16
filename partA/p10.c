#include <stdio.h>

int main() {
    int a, b, c, largest;

    // Input three numbers
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Find the largest using ternary operator
    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    // Display the largest number
    printf("The largest number among %d, %d, and %d is: %d\n", a, b, c, largest);

    return 0;
}
