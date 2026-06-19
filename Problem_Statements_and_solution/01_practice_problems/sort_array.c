#include <stdio.h> // Include standard input-output library for printf

// Function to sort an array of size n using Selection Sort
void sort_array(int arr[], int n) { // Define function taking array and size n
    for (int i = 0; i < n - 1; i++) { // Outer loop: iterates through the array boundaries
        int min_index = i; // Assume current element i is the minimum
        for (int j = i + 1; j < n; j++) { // Inner loop: searches for smaller element in remaining array
            if (arr[j] < arr[min_index]) { // Check if element at j is smaller than element at current minimum index
                min_index = j; // Update minimum index to j
            } // End of check
        } // End of inner loop
        if (min_index != i) { // Check if a smaller element was found
            int temp = arr[i]; // Store element at index i in temporary variable
            arr[i] = arr[min_index]; // Swap element at index i with the found minimum element
            arr[min_index] = temp; // Swap the stored value to the minimum index position
        } // End of swap check
    } // End of outer loop
} // End of sort_array function

int main() { // Main function where program execution starts
    int numbers[] = {64, 25, 12, 22, 11, 90, 80}; // Initialize input array of integers
    int n = sizeof(numbers) / sizeof(numbers[0]); // Calculate the total number of elements in the array

    printf("Array before sorting: "); // Print introduction message
    for (int i = 0; i < n; i++) { // Loop through array to print elements
        printf("%d ", numbers[i]); // Print element
    } // End of loop
    printf("\n"); // Print newline

    sort_array(numbers, n); // Sort the array of n elements

    printf("Array after sorting : "); // Print introduction message
    for (int i = 0; i < n; i++) { // Loop through array to print sorted elements
        printf("%d ", numbers[i]); // Print element
    } // End of loop
    printf("\n"); // Print newline

    return 0; // Return 0 to indicate successful program execution
} // End of main function

/*
====================================================================
EXPECTED OUTPUT:
====================================================================
Array before sorting: 64 25 12 22 11 90 80 
Array after sorting : 11 12 22 25 64 80 90 
*/
