#include <stdio.h> // Include standard input-output library for printf

// Function to check if a number is a palindrome
int is_palindrome(int num) { // Define function taking an integer
    int original = num; // Store original value of the number
    int reversed = 0; // Initialize reversed number variable to 0
    int remainder; // Declare variable to store remainder of division

    while (num > 0) { // Loop until the number becomes 0
        remainder = num % 10; // Extract the last digit of the number
        reversed = (reversed * 10) + remainder; // Append digit to reversed number
        num = num / 10; // Remove the last digit from the number
    } // End of loop

    if (original == reversed) { // Compare original number with its reverse
        return 1; // Return 1 indicating it is a palindrome
    } else { // If they are not equal
        return 0; // Return 0 indicating it is not a palindrome
    } // End of comparison
} // End of is_palindrome function

// Function to print all palindrome numbers in a given range
void print_palindromes_in_range(int start, int end) { // Define function taking start and end values
    for (int i = start; i <= end; i++) { // Loop from start range value to end range value
        if (is_palindrome(i) == 1) { // Check if current number is a palindrome
            printf("%d ", i); // Print the palindrome number followed by a space
        } // End of check
    } // End of range loop
    printf("\n"); // Print a newline at the end
} // End of print_palindromes_in_range function

int main() { // Main function where program execution starts
    int start = 10; // Define start of range
    int end = 200; // Define end of range

    printf("Palindrome numbers between %d and %d are:\n", start, end); // Print intro header
    print_palindromes_in_range(start, end); // Call function to find and print palindromes

    return 0; // Return 0 to indicate successful program execution
} // End of main function

/*
====================================================================
EXPECTED OUTPUT:
====================================================================
Palindrome numbers between 10 and 200 are:
11 22 33 44 55 66 77 88 99 101 111 121 131 141 151 161 171 181 191 
*/
