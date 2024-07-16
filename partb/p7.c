#include <stdio.h>

int main() {
    int N;

    // Input the number of elements
    printf("Enter the number of elements (N): ");
    scanf("%d", &N);

    // Declare an array of size N
    int arr[N];

    // Input elements into the array and display them
    printf("Enter %d integer numbers:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        printf("%d ", arr[i]); // Display each element as it is entered
    }
    printf("\n");

    // Bubble Sort algorithm to sort the array in ascending order
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements if they are in the wrong order
                arr[j] = arr[j] + arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
            }
        }
    }

    // Print the sorted array
    printf("\nSorted Array (Ascending Order):\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
