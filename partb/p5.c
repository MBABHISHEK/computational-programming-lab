#include <stdio.h>

int main() {
    int number, originalNumber, reverseNumber = 0, remainder;

    // Input a four-digit integer number
    printf("Enter a four-digit integer number: ");
    scanf("%d", &number);

    // Store the original number
    originalNumber = number;

    // Reverse the number
    while (number != 0) {
        remainder = number % 10;
        reverseNumber = reverseNumber * 10 + remainder;
        number /= 10;
    }

    // Check if the original number is equal to its reverse
    if (originalNumber == reverseNumber) {
        printf("%d is a palindrome.\n", originalNumber);
    } else {
        printf("%d is not a palindrome.\n", originalNumber);
    }

    return 0;
}
