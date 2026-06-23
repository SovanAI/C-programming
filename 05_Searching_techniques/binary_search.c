#include <stdio.h>

/* Iterative Binary Search function: Returns index of target, or -1 if not found.
   Assumes the input array is already sorted. */
int binarySearch(int arr[], int n, int target) {
    // Edge Case 1: NULL array
    if (arr == NULL) {
        printf("Invalid input: Array is NULL\n");
        return -1;
    }

    // Edge Case 2: Empty array
    if (n <= 0) {
        printf("Invalid input: Array size is 0 or negative\n");
        return -1;
    }

    int low = 0;
    int high = n - 1;

    while (low <= high) {
        // Avoid overflow for large indices
        int mid = low + (high - low) / 2;

        // Check if target is present at mid
        if (arr[mid] == target) {
            return mid;
        }

        // If target is greater, ignore left half
        if (arr[mid] < target) {
            low = mid + 1;
        }
        // If target is smaller, ignore right half
        else {
            high = mid - 1;
        }
    }

    return -1; // Target not found
}

/* Print Array helper function */
void printArray(int arr[], int n) {
    if (arr == NULL || n <= 0) {
        printf("Nothing to print\n");
        return;
    }

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    // Sorted array is required for binary search
    int arr[] = {12, 23, 34, 45, 56, 78, 89};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 45;

    printf("Sorted array elements:\n");
    printArray(arr, n);

    printf("Searching for target %d...\n", target);
    int result = binarySearch(arr, n, target);

    if (result != -1) {
        printf("Target %d found at index: %d\n", target, result);
    } else {
        printf("Target %d not found in the array.\n", target);
    }

    // Test searching for an absent element
    target = 50;
    printf("\nSearching for target %d...\n", target);
    result = binarySearch(arr, n, target);

    if (result != -1) {
        printf("Target %d found at index: %d\n", target, result);
    } else {
        printf("Target %d not found in the array.\n", target);
    }

    return 0;
}
