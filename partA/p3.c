#include <stdio.h>

int main() {
    int x, y, z, temp;

    // Input the values of x, y, and z
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    printf("Enter the value of z: ");
    scanf("%d", &z);

    // Rotate the values
    temp = x; // Store the value of x in temp
    x = y;    // Assign the value of y to x
    y = z;    // Assign the value of z to y
    z = temp; // Assign the original value of x (stored in temp) to z

    // Display the new values
    printf("After rotation:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);

    return 0;
}
