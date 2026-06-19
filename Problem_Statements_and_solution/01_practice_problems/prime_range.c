#include <stdio.h> // Include standard input-output library for printf

// Function to check if a number is prime
int is_prime(int n) { // Define function taking an integer n
    if (n <= 1) { // Check if number is 1 or less (primes must be greater than 1)
        return 0; // Return 0 (not prime)
    } // End of check
    for (int i = 2; i * i <= n; i++) { // Loop from 2 up to the square root of n
        if (n % i == 0) { // Check if n is divisible by the loop counter i
            return 0; // Return 0 if divisor found (not prime)
        } // End of divisibility check
    } // End of loop
    return 1; // Return 1 if no divisors found (is prime)
} // End of is_prime function

// Function to list all prime numbers in a range
void print_primes_in_range(int start, int end) { // Define function taking start and end bounds
    for (int i = start; i <= end; i++) { // Loop through range from start to end
        if (is_prime(i) == 1) { // Check if the current number is prime
            printf("%d ", i); // Print the prime number
        } // End of prime check
    } // End of range loop
    printf("\n"); // Print a newline at the end
} // End of print_primes_in_range function

int main() { // Main function where program execution starts
    int start = 10; // Define start of range
    int end = 50; // Define end of range

    printf("Prime numbers between %d and %d are:\n", start, end); // Print section header
    print_primes_in_range(start, end); // Call function to find and print primes in the range

    return 0; // Return 0 to indicate successful program execution
} // End of main function

/*
====================================================================
EXPECTED OUTPUT:
====================================================================
Prime numbers between 10 and 50 are:
11 13 17 19 23 29 31 37 41 43 47 
*/
