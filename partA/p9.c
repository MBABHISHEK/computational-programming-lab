#include <stdio.h>

int main() {
    int a, b, n;
    int c, d, e, f, g, h;

    // Input values for variables a, b, and n
    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);
    printf("Enter value for n: ");
    scanf("%d", &n);

    // Perform bitwise operations
    c = a & b;       // bitwise AND
    d = a | b;       // bitwise OR
    e = ~a;          // bitwise NOT (complement)
    f = a >> n;      // right shift a by n bits
    g = a << n;      // left shift a by n bits
    h = a ^ b;       // bitwise XOR

    // Display results
    printf("a & b = %d\n", c);
    printf("a | b = %d\n", d);
    printf("~a    = %d\n", e);
    printf("a >> n = %d\n", f);
    printf("a << n = %d\n", g);
    printf("a ^ b  = %d\n", h);

    return 0;
}
