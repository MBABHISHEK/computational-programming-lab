#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant, root1, root2;

    // Input non-zero coefficients
    printf("Enter coefficients a, b, and c (where a ≠ 0): ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    // Check discriminant for different cases
    if (discriminant > 0) {
        // Two distinct real roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Two distinct real roots exist:\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } else if (discriminant == 0) {
        // One real root (repeated root)
        root1 = root2 = -b / (2 * a);
        printf("One real root exists:\n");
        printf("Root = %.2f\n", root1);
    } else {
        // No real roots (discriminant < 0)
        printf("No real roots exist.\n");
    }

    return 0;
}
