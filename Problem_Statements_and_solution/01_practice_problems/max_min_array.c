#include <stdio.h> // Include standard input-output library for printf

// Function that returns a pointer to a static array containing [max, min]
int* find_max_min(int arr[], int size) { // Define function taking array and its size
    static int result[2]; // Declare static array of size 2 to safely return its pointer (retains memory after function exits)
    
    if (size <= 0) { // Check if the array is empty
        return NULL; // Return NULL if size is invalid
    } // End of size check

    int max = arr[0]; // Initialize max with the first element of the array
    int min = arr[0]; // Initialize min with the first element of the array

    for (int i = 1; i < size; i++) { // Loop through the array starting from the second element
        if (arr[i] > max) { // Check if the current element is greater than current max
            max = arr[i]; // Update max with the new maximum value
        } // End of max check
        if (arr[i] < min) { // Check if the current element is smaller than current min
            min = arr[i]; // Update min with the new minimum value
        } // End of min check
    } // End of loop

    result[0] = max; // Store max value at index 0 of the result array
    result[1] = min; // Store min value at index 1 of the result array

    return result; // Return the pointer to the static result array
} // End of find_max_min function

int main() { // Main function where program execution starts
    int values[] = {23, 5, 67, 12, 89, 45, 2}; // Initialize input array of values
    int size = sizeof(values) / sizeof(values[0]); // Calculate the number of elements in the array
    int *res_ptr; // Declare integer pointer to hold the returned array address

    res_ptr = find_max_min(values, size); // Call function to find max and min
    
    if (res_ptr != NULL) { // Verify that the returned pointer is not NULL
        printf("Maximum value: %d\n", res_ptr[0]); // Print maximum value from index 0
        printf("Minimum value: %d\n", res_ptr[1]); // Print minimum value from index 1
    } // End of NULL check

    return 0; // Return 0 to indicate successful program execution
} // End of main function

/*
====================================================================
EXPECTED OUTPUT:
====================================================================
Maximum value: 89
Minimum value: 2
*/
