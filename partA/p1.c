#include <stdio.h>
int main() {
    double radius, volume;

    printf("Enter the radius of the sphere: ");
    scanf("%lf", &radius);

    volume = (4.0 / 3.0) * 3.141 * radius * radius * radius;

    printf("The volume of the sphere is: %.2lf\n", volume);

    return 0;
}
