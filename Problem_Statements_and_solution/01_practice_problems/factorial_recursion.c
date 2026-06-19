#include <stdio.h> // Include standard input-output library for printf and scanf

// Recursive function to calculate the factorial of a number
long long factorial(int n) { // Function definition taking an integer n
    if (n == 0 || n == 1) { // Base case: factorial of 0 or 1 is 1
        return 1; // Return 1 if the base case is met
    } // End of if statement
    return n * factorial(n - 1); // Recursive step: n * factorial(n-1)
} // End of factorial function

int main() { // Main function where program execution starts
    int num = 5; // Define the input number to calculate factorial for
    long long result; // Declare variable to store the calculated factorial result

    result = factorial(num); // Call recursive factorial function
    printf("Factorial of %d is %lld\n", num, result); // Print the result to the console

    return 0; // Return 0 to indicate successful program execution
} // End of main function

/*
====================================================================
EXPECTED OUTPUT:
====================================================================
Factorial of 5 is 120
*/
