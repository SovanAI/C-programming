#include <stdio.h> // Include standard input-output library for printf

// Function to print the main diagonal elements of a 5x5 matrix
void print_diagonal_elements(int matrix[5][5]) { // Define function taking 5x5 matrix
    printf("Diagonal elements of the given 5x5 matrix: "); // Print header message
    for (int i = 0; i < 5; i++) { // Loop through the row index (0 to 4)
        printf("%d ", matrix[i][i]); // Print the element where row index matches column index (matrix[i][i])
    } // End of loop
    printf("\n"); // Print newline at the end
} // End of print_diagonal_elements function

// Function to construct and print a 5x5 diagonal matrix from a list of diagonal values
void print_diagonal_matrix(int diagonal_values[5]) { // Define function taking array of 5 values
    printf("\nConstructed 5x5 Diagonal Matrix:\n"); // Print header message
    for (int i = 0; i < 5; i++) { // Outer loop: iterates through rows
        for (int j = 0; j < 5; j++) { // Inner loop: iterates through columns
            if (i == j) { // Check if we are on the main diagonal (row index == column index)
                printf("%2d ", diagonal_values[i]); // Print the diagonal value corresponding to row index
            } else { // For any position off the main diagonal
                printf("%2d ", 0); // Print zero (representing a diagonal matrix's off-diagonal element)
            } // End of conditional check
        } // End of inner loop
        printf("\n"); // Print newline at the end of each row
    } // End of outer loop
} // End of print_diagonal_matrix function

int main() { // Main function where program execution starts
    int mat[5][5] = { // Initialize a sample 5x5 matrix
        {1,  2,  3,  4,  5}, // Row 0
        {6,  7,  8,  9,  10}, // Row 1
        {11, 12, 13, 14, 15}, // Row 2
        {16, 17, 18, 19, 20}, // Row 3
        {21, 22, 23, 24, 25}  // Row 4
    }; // End of matrix initialization

    int diag_vals[5] = {9, 8, 7, 6, 5}; // Array of values to place on the diagonal of a new matrix

    print_diagonal_elements(mat); // Call function to extract and print diagonal elements from mat
    print_diagonal_matrix(diag_vals); // Call function to generate and print a diagonal matrix from diag_vals

    return 0; // Return 0 to indicate successful program execution
} // End of main function

/*
====================================================================
EXPECTED OUTPUT:
====================================================================
Diagonal elements of the given 5x5 matrix: 1 7 13 19 25 

Constructed 5x5 Diagonal Matrix:
 9  0  0  0  0 
 0  8  0  0  0 
 0  0  7  0  0 
 0  0  0  6  0 
 0  0  0  0  5 
*/
