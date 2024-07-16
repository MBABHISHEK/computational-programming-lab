#include <stdio.h>
int main() {
    float number;
    int integralPart;
    float decimalPart;

    // Input the floating-point number
    printf("Enter a floating-point number: ");
    scanf("%f", &number);

    // Separate the integral and decimal parts
    integralPart = (int)number;
    decimalPart = number - integralPart;

    // Display the separated parts
    printf("Integral part: %d\n", integralPart);
    printf("Decimal part: %.6f\n", decimalPart); // Displaying up to 6 decimal places

    return 0;
}
