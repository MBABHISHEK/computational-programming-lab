#include <stdio.h>

int main() {
    int N1, N2;

    // Input range from user
    printf("Enter the range (N1 and N2): ");
    scanf("%d %d", &N1, &N2);

    // Ensure N1 is less than N2
    if (N1 > N2) {
        int temp = N1;
        N1 = N2;
        N2 = temp;
    }

    printf("Prime numbers between %d and %d are:\n", N1, N2);

    // Check each number in the range for primality and print if prime
    for (int num = N1; num <= N2; num++) {
        int isPrime = 1; // Assume num is prime initially

        // Handle special cases
        if (num <= 1) {
            isPrime = 0; // num <= 1 is not prime
        } else {
            // Check divisibility from 2 to sqrt(num)
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    isPrime = 0; // num is not prime
                    break;
                }
            }
        }

        // Print if prime
        if (isPrime) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}
