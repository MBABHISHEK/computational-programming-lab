#include <stdio.h>

int main() {
    int N, key, found = 0;

    // Input the number of elements
    printf("Enter the number of elements (N): ");
    scanf("%d", &N);

    // Declare an array of size N
    int arr[N];

    // Input elements into the array in ascending order
    printf("Enter %d integer numbers in ascending order:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the key to search
    printf("Enter the integer key to search: ");
    scanf("%d", &key);

    // Perform Binary Search
    int low = 0, high = N - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            found = 1;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // Print result
    if (found) {
        printf("Key %d found at index %d.\n", key, mid);
    } else {
        printf("Key %d not found in the array.\n", key);
    }

    return 0;
}
