#include <stdio.h> // Include standard input-output library for printf

// Function to check if a number is even or odd
void check_even_odd(int num) { // Define function taking an integer num
    if (num % 2 == 0) { // Check if division of num by 2 leaves a remainder of 0
        printf("The number %d is EVEN.\n", num); // Print that the number is even
    } else { // If remainder is not 0 (it will be 1 or -1)
        printf("The number %d is ODD.\n", num); // Print that the number is odd
    } // End of conditional check
} // End of check_even_odd function

int main() { // Main function where program execution starts
    int value1 = 14; // Initialize first test value
    int value2 = 27; // Initialize second test value

    check_even_odd(value1); // Call check function for value1
    check_even_odd(value2); // Call check function for value2

    return 0; // Return 0 to indicate successful program execution
} // End of main function

/*
====================================================================
EXPECTED OUTPUT:
====================================================================
The number 14 is EVEN.
The number 27 is ODD.
*/
