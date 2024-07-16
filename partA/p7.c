#include <stdio.h>

int main() {
    int number;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is odd or even
    if (number % 2 == 0) {
        printf("NUMBER IS EVEN\n");
    } else {
        printf("NUMBER IS ODD\n");
    }

    return 0;
}
