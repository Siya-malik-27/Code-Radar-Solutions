// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Input size of the array

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Input elements of the array
    }

    // Loop through each element to print its frequency
    for (int i = 0; i < n; i++) {
        int count = 1;  // Count current element
        if (arr[i] != -1) {  // Check if the element is already counted
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;  // Increment count if the element is found again
                    arr[j] = -1;  // Mark the element as counted
                }
            }
            printf("%d %d", arr[i], count);
        }
    }

    return 0;
}
