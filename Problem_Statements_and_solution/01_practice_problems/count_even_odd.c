#include <stdio.h> // Include standard input-output library for printf

// Function to count and print the number of even and odd elements in an array
void count_even_odd(int arr[], int size) { // Define function taking array and its size
    int even_count = 0; // Initialize even counter to 0
    int odd_count = 0; // Initialize odd counter to 0

    for (int i = 0; i < size; i++) { // Loop through each element of the array
        if (arr[i] % 2 == 0) { // Check if current array element is divisible by 2 with no remainder
            even_count++; // Increment the even count by 1
        } else { // If there is a remainder (element is odd)
            odd_count++; // Increment the odd count by 1
        } // End of conditional statement
    } // End of counting loop

    printf("Number of Even elements: %d\n", even_count); // Print the final count of even numbers
    printf("Number of Odd elements: %d\n", odd_count); // Print the final count of odd numbers
} // End of count_even_odd function

int main() { // Main function where program execution starts
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11}; // Declare and initialize an array of integers
    int size = sizeof(numbers) / sizeof(numbers[0]); // Calculate the total number of elements in the array

    printf("Analyzing array elements...\n"); // Print introduction message
    count_even_odd(numbers, size); // Call the count_even_odd function with the array and its size

    return 0; // Return 0 to indicate successful program execution
} // End of main function

/*
====================================================================
EXPECTED OUTPUT:
====================================================================
Analyzing array elements...
Number of Even elements: 5
Number of Odd elements: 6
*/
