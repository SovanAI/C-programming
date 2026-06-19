#include <stdio.h> // Include standard input-output library for printf and scanf

int main() { // Main function where program execution starts
    int number = 5; // Initialize the number to shift (binary: 00000101)
    int shift_places = 2; // Initialize the number of positions to shift left
    int result; // Declare variable to store the shifted result

    result = number << shift_places; // Perform the bitwise left shift operation

    printf("Number before shift: %d (binary: 00000101)\n", number); // Print initial value
    printf("Shifted left by     : %d places\n", shift_places); // Print shift places
    printf("Number after shift : %d (binary: 00010100)\n", result); // Print shifted result

    return 0; // Return 0 to indicate successful program execution
} // End of main function

/*
====================================================================
BITWISE LEFT SHIFT EXAMPLE AND EXPLANATION:
====================================================================
Initial number: 5
In 8-bit binary representation:
  5 = 00000101

Left shifting by 2 bits (5 << 2) shifts all bits to the left by 2 positions,
filling the vacant slots on the right with zeros:
  00000101 << 2  -->  00010100

Converting 00010100 back to decimal:
  (2^4 * 1) + (2^3 * 0) + (2^2 * 1) + (2^1 * 0) + (2^0 * 0)
  = 16 + 0 + 4 + 0 + 0 = 20

Formula for left shift: number * (2^shift_places)
  5 * (2^2) = 5 * 4 = 20

====================================================================
EXPECTED OUTPUT:
====================================================================
Number before shift: 5 (binary: 00000101)
Shifted left by     : 2 places
Number after shift : 20 (binary: 00010100)
*/
