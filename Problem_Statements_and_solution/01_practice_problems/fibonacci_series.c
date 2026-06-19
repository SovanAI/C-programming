#include <stdio.h> // Include standard input-output library for printf

// Function to print the Fibonacci series up to the nth term
void print_fibonacci(int n) { // Define function taking an integer n
    int term1 = 0; // Initialize first term of the Fibonacci series
    int term2 = 1; // Initialize second term of the Fibonacci series
    int next_term; // Declare variable to hold calculated next term

    printf("Fibonacci Series up to %d terms: ", n); // Print header for series output

    for (int i = 1; i <= n; i++) { // Loop from 1 up to the requested number of terms
        printf("%d ", term1); // Print the current term
        next_term = term1 + term2; // Calculate the next term by adding current two terms
        term1 = term2; // Update term1 to be the value of term2 for next iteration
        term2 = next_term; // Update term2 to be the value of calculated next term
    } // End of print loop
    printf("\n"); // Print newline at the end
} // End of print_fibonacci function

int main() { // Main function where program execution starts
    int terms = 8; // Define the number of Fibonacci terms to print

    print_fibonacci(terms); // Call function to generate and print the series

    return 0; // Return 0 to indicate successful program execution
} // End of main function

/*
====================================================================
EXPECTED OUTPUT:
====================================================================
Fibonacci Series up to 8 terms: 0 1 1 2 3 5 8 13 
*/
