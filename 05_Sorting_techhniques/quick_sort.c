#include <stdio.h>

/* Helper function to swap two elements */
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* Partition function using Lomuto partition scheme (pivot is last element) */
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Pivot element
    int i = (low - 1);     // Index of smaller element

    for (int j = low; j < high; j++) {
        // If current element is smaller than or equal to pivot
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/* Recursive Quick Sort helper */
void quickSortHelper(int arr[], int low, int high) {
    if (low < high) {
        /* pi is partitioning index, arr[p] is now at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before partition and after partition
        quickSortHelper(arr, low, pi - 1);
        quickSortHelper(arr, pi + 1, high);
    }
}

/* Wrapper Quick Sort function with input validation */
void quickSort(int arr[], int n) {
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

    quickSortHelper(arr, 0, n - 1);
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
    int arr[] = {19, 7, 15, 12, 16, 18, 4, 11, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printArray(arr, n);

    quickSort(arr, n);

    printf("Sorted array (Quick Sort):\n");
    printArray(arr, n);

    return 0;
}
