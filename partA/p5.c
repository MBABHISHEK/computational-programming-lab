#include <stdio.h>

int main() {
    float number;
    int integralPart, rightMostDigit;

    // Input the floating-point number
    printf("Enter a floating-point number: ");
    scanf("%f", &number);

    // Extract the integral part of the number
    integralPart = (int)number;

    // Get the right-most digit of the integral part
    rightMostDigit = integralPart % 10;

    // Display the right-most digit
    printf("The right-most digit of the integral part is: %d\n", rightMostDigit);

    return 0;
}
