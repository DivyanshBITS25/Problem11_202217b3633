#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Element found at index i
        }
    }
    return -1; // Element not found
}

int main() {
    int arr[] = {10, 2, 8, 5, 17}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Size of the array
    int target = 8; // Target element to be searched
    int result = linearSearch(arr, n, target); // Call to linear search function
    
    if (result == -1) {
        printf("Element not found in the array.\n"); // Element not found
    } else {
        printf("Element found at index: %d\n", result); // Element found at index result
    }
    
    return 0;
}
