#include <stdio.h> // Include standard input-output library for printf and scanf

int main() { // Main function where program execution starts
    double num1 = 12.5; // Define the first number
    double num2 = 4.0; // Define the second number
    char op = '/'; // Define the operator to use (e.g., '+', '-', '*', '/')
    double result; // Declare variable to store the result of the operation

    switch (op) { // Start switch block to check the operator character
        case '+': // Case for addition
            result = num1 + num2; // Perform addition
            printf("%.2f + %.2f = %.2f\n", num1, num2, result); // Print addition output
            break; // Break out of switch
        case '-': // Case for subtraction
            result = num1 - num2; // Perform subtraction
            printf("%.2f - %.2f = %.2f\n", num1, num2, result); // Print subtraction output
            break; // Break out of switch
        case '*': // Case for multiplication
            result = num1 * num2; // Perform multiplication
            printf("%.2f * %.2f = %.2f\n", num1, num2, result); // Print multiplication output
            break; // Break out of switch
        case '/': // Case for division
            if (num2 != 0.0) { // Check if denominator is not zero to prevent division by zero
                result = num1 / num2; // Perform division
                printf("%.2f / %.2f = %.2f\n", num1, num2, result); // Print division output
            } else { // Executed if division by zero is attempted
                printf("Error: Division by zero is not allowed!\n"); // Print error message
            } // End of if-else check
            break; // Break out of switch
        default: // Case for invalid operator
            printf("Error: Invalid operator entered!\n"); // Print error message
            break; // Break out of switch
    } // End of switch block

    return 0; // Return 0 to indicate successful program execution
} // End of main function

/*
====================================================================
EXPECTED OUTPUT:
====================================================================
12.50 / 4.00 = 3.12
*/
