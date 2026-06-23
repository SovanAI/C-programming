#include <stdio.h>

/* Helper function to swap two elements */
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* Heapify a subtree rooted with node i which is an index in arr[]. n is size of heap */
void heapify(int arr[], int n, int i) {
    int largest = i;   // Initialize largest as root
    int left = 2 * i + 1;  // Left child index
    int right = 2 * i + 2; // Right child index

    // If left child is larger than root
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // If right child is larger than largest so far
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If largest is not root
    if (largest != i) {
        swap(&arr[i], &arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

/* Main Heap Sort function with input validation */
void heapSort(int arr[], int n) {
    // Edge Case 1: NULL array
    if (arr == NULL) {
        printf("Invalid input: Array is NULL\n");
        return;
    }

    // Edge Case 2: Empty or single element array
    if (n <= 1) {
        printf("Array is already sorted\n");
        return;
    }

    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // One by one extract an element from heap
    for (int i = n - 1; i > 0; i--) {
        // Move current root to end
        swap(&arr[0], &arr[i]);

        // Call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
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
    int arr[] = {12, 11, 13, 5, 6, 7, 10, 5, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printArray(arr, n);

    heapSort(arr, n);

    printf("Sorted array (Heap Sort):\n");
    printArray(arr, n);

    return 0;
}
