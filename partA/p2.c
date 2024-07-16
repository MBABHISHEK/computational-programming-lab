#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, s, area;

    // Input the lengths of the sides of the triangle
    printf("Enter the length of side a: ");
    scanf("%lf", &a);
    printf("Enter the length of side b: ");
    scanf("%lf", &b);
    printf("Enter the length of side c: ");
    scanf("%lf", &c);

    // Calculate the semi-perimeter
    s = (a + b + c) / 2.0;

    // Calculate the area using Heron's formula
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    // Display the result
    printf("The area of the triangle is: %.2lf\n", area);

    return 0;
}
