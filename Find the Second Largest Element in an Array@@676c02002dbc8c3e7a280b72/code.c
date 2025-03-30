#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    if (size < 2) {
        // If the array has less than two elements, there can't be a second largest number
        printf("-1\n");
        return 0;
    }

    int arr[size];

    // Input array elements
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize two variables for the largest and second largest numbers
    int largest = arr[0];
    int second_largest = -1;

    // Find the largest and second largest numbers
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            second_largest = largest; // The current largest becomes the second largest
            largest = arr[i];        // Update largest to the current element
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i]; // Update second largest
        }
    }

    // Print the second largest number, or -1 if it doesn't exist
    if (second_largest == -1) {
        printf("-1\n");  // No second largest number found
    } else {
        printf("%d\n", second_largest);  // Print the second largest number
    }

    return 0;
}
