#include <stdio.h>

/* Linear Search function: Returns index of target, or -1 if not found */
int linearSearch(int arr[], int n, int target) {
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

    // Loop through each element of the array
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Target found, return index
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
    int arr[] = {23, 45, 12, 56, 89, 78, 34};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 56;

    printf("Array elements:\n");
    printArray(arr, n);

    printf("Searching for target %d...\n", target);
    int result = linearSearch(arr, n, target);

    if (result != -1) {
        printf("Target %d found at index: %d\n", target, result);
    } else {
        printf("Target %d not found in the array.\n", target);
    }

    // Test searching for an absent element
    target = 100;
    printf("\nSearching for target %d...\n", target);
    result = linearSearch(arr, n, target);

    if (result != -1) {
        printf("Target %d found at index: %d\n", target, result);
    } else {
        printf("Target %d not found in the array.\n", target);
    }

    return 0;
}
