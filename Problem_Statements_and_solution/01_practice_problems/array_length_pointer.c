#include <stdio.h> // Include standard input-output library for printf

// Function to find the length of a null-terminated string using pointer arithmetic
int find_string_length(const char *str) { // Define function taking character pointer str
    const char *ptr = str; // Initialize a helper pointer ptr to point to the start of the string
    while (*ptr != '\0') { // Loop until the helper pointer reaches the null-terminator '\0'
        ptr++; // Increment the pointer to point to the next character in memory
    } // End of loop
    return ptr - str; // Calculate string length by subtracting the start address from the end address
} // End of find_string_length function

// Function to find length of a sentinel-terminated integer array (terminated by -1) using pointer arithmetic
int find_int_array_length(const int *arr) { // Define function taking integer pointer arr
    const int *ptr = arr; // Initialize a helper pointer ptr to point to the start of the integer array
    while (*ptr != -1) { // Loop until the pointer points to the sentinel value -1
        ptr++; // Increment the pointer to point to the next integer in memory
    } // End of loop
    return ptr - arr; // Calculate length by subtracting start address from end address
} // End of find_int_array_length function

int main() { // Main function where program execution starts
    char message[] = "Hello Antigravity"; // Declare and initialize a character array (string)
    int int_arr[] = {10, 20, 30, 40, 50, -1}; // Declare an integer array terminated by a sentinel value of -1

    int str_len = find_string_length(message); // Call function to get string length using pointer arithmetic
    int arr_len = find_int_array_length(int_arr); // Call function to get integer array length using pointer arithmetic

    printf("String length: %d\n", str_len); // Print the calculated length of the string
    printf("Integer array length (excluding -1): %d\n", arr_len); // Print the length of the integer array

    return 0; // Return 0 to indicate successful program execution
} // End of main function

/*
====================================================================
EXPECTED OUTPUT:
====================================================================
String length: 17
Integer array length (excluding -1): 5
*/
