#include <stdio.h> // Include standard input-output library for printf

// Function to check if a number is prime
void check_prime(int n) { // Define function taking integer n
    int flag = 1; // Initialize flag variable to 1 (assumes number is prime)

    if (n <= 1) { // Check if the number is less than or equal to 1
        flag = 0; // Set flag to 0 since numbers <= 1 are not prime
    } else { // For numbers greater than 1
        for (int i = 2; i * i <= n; i++) { // Loop from 2 up to the square root of n
            if (n % i == 0) { // Check if n is divisible by loop counter i
                flag = 0; // Set flag to 0 if a divisor is found (not prime)
                break; // Break out of the loop early since we know it's not prime
            } // End of divisibility check
        } // End of loop
    } // End of condition check

    if (flag == 1) { // Check if the flag remains 1
        printf("The number %d is PRIME.\n", n); // Print that the number is prime
    } else { // If flag is 0
        printf("The number %d is NOT PRIME.\n", n); // Print that the number is not prime
    } // End of print condition
} // End of check_prime function

int main() { // Main function where program execution starts
    int test1 = 29; // Initialize first test case (prime)
    int test2 = 35; // Initialize second test case (non-prime)

    check_prime(test1); // Verify and print result for test1
    check_prime(test2); // Verify and print result for test2

    return 0; // Return 0 to indicate successful program execution
} // End of main function

/*
====================================================================
EXPECTED OUTPUT:
====================================================================
The number 29 is PRIME.
The number 35 is NOT PRIME.
*/
