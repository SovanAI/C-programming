#include <stdio.h> // Include standard input-output library for printf

// Function to print the factorial of a number iteratively
void print_factorial_iterative(int n) { // Define function taking an integer n
    long long fact = 1; // Initialize factorial result to 1 (handles case of 0! and 1!)

    if (n < 0) { // Check if the number is negative (factorial not defined for negative numbers)
        printf("Factorial of negative numbers is not defined.\n"); // Print error message
        return; // Exit function early
    } // End of negative check

    for (int i = 1; i <= n; i++) { // Loop from 1 up to n to calculate product
        fact = fact * i; // Multiply current product by loop counter i
    } // End of calculation loop

    printf("Factorial of %d is %lld\n", n, fact); // Print final result to the console
} // End of print_factorial_iterative function

int main() { // Main function where program execution starts
    int num = 6; // Define the input number to compute factorial for
    
    print_factorial_iterative(num); // Call the iterative function with the number

    return 0; // Return 0 to indicate successful program execution
} // End of main function

/*
====================================================================
EXPECTED OUTPUT:
====================================================================
Factorial of 6 is 720
*/
