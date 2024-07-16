#include <stdio.h>

int main() {
    int N, i;
    int fib0 = 0, fib1 = 1, nextTerm;

    // Input the number of Fibonacci numbers to generate
    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &N);

    // Print the first two Fibonacci numbers
    printf("First %d Fibonacci numbers:\n", N);
    printf("%d ", fib0);
    if (N > 1)
        printf("%d ", fib1);

    // Generate and print the remaining Fibonacci numbers
    for (i = 2; i < N; i++) {
        nextTerm = fib0 + fib1;
        printf("%d ", nextTerm);
        fib0 = fib1;
        fib1 = nextTerm;
    }

    printf("\n");

    return 0;
}
