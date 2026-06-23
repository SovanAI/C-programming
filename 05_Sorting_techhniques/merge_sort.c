#include <stdio.h>
#include <stdlib.h>

/* Merge two sorted sub-arrays: arr[l..m] and arr[m+1..r] */
void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    /* Create temporary arrays */
    int *L = (int *)malloc(n1 * sizeof(int));
    int *R = (int *)malloc(n2 * sizeof(int));

    if (L == NULL || R == NULL) {
        printf("Memory allocation failed!\n");
        if (L) free(L);
        if (R) free(R);
        return;
    }

    /* Copy data to temporary arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    /* Merge the temporary arrays back into arr[l..r] */
    i = 0; // Initial index of first sub-array
    j = 0; // Initial index of second sub-array
    k = l; // Initial index of merged sub-array

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if any */
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if any */
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    /* Free allocated memory */
    free(L);
    free(R);
}

/* Recursive Merge Sort function */
void mergeSortHelper(int arr[], int l, int r) {
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for large l and h
        int m = l + (r - l) / 2;

        // Sort first and second halves
        mergeSortHelper(arr, l, m);
        mergeSortHelper(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

/* Wrapper Merge Sort function with input validation */
void mergeSort(int arr[], int n) {
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

    mergeSortHelper(arr, 0, n - 1);
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
    int arr[] = {12, 11, 13, 5, 6, 7, 7, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printArray(arr, n);

    mergeSort(arr, n);

    printf("Sorted array:\n");
    printArray(arr, n);

    return 0;
}
