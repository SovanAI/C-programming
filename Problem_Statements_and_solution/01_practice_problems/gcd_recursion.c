#include <stdio.h> // Include standard input-output library for printf

// Recursive function to find the Greatest Common Divisor (GCD) of two numbers
int find_gcd_recursive(int a, int b) { // Define function taking two integers a and b
    if (b == 0) { // Base case: if second number becomes 0, GCD is the first number
        return a; // Return the first number
    } // End of base case check
    return find_gcd_recursive(b, a % b); // Recursive step: call gcd with b and remainder of (a / b)
} // End of find_gcd_recursive function

int main() { // Main function where program execution starts
    int num1 = 48; // Initialize the first number
    int num2 = 18; // Initialize the second number
    int gcd_result; // Declare variable to store the calculated GCD

    gcd_result = find_gcd_recursive(num1, num2); // Call the recursive GCD function
    printf("GCD of %d and %d is %d\n", num1, num2, gcd_result); // Print the result to the console

    return 0; // Return 0 to indicate successful program execution
} // End of main function

/*
====================================================================
EXPECTED OUTPUT:
====================================================================
GCD of 48 and 18 is 6
*/
