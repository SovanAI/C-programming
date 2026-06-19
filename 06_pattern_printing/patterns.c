#include <stdio.h> // Include standard input-output header file for printing outputs

// Prototype declarations for each pattern printing function
void print_half_pyramid(int rows);
void print_inverted_half_pyramid(int rows);
void print_full_pyramid(int rows);
void print_hollow_full_pyramid(int rows);
void print_floyds_triangle(int rows);
void print_pascals_triangle(int rows);

int main() { // Main function where program execution starts
    int rows = 5; // Define the default number of rows for the patterns

    printf("--- 1. HALF PYRAMID PATTERN ---\n"); // Print header for the first pattern
    print_half_pyramid(rows); // Call function to print half pyramid
    printf("\n"); // Print newline for spacing

    printf("--- 2. INVERTED HALF PYRAMID PATTERN ---\n"); // Print header for the second pattern
    print_inverted_half_pyramid(rows); // Call function to print inverted half pyramid
    printf("\n"); // Print newline for spacing

    printf("--- 3. FULL PYRAMID PATTERN ---\n"); // Print header for the third pattern
    print_full_pyramid(rows); // Call function to print full pyramid
    printf("\n"); // Print newline for spacing

    printf("--- 4. HOLLOW FULL PYRAMID PATTERN ---\n"); // Print header for the fourth pattern
    print_hollow_full_pyramid(rows); // Call function to print hollow full pyramid
    printf("\n"); // Print newline for spacing

    printf("--- 5. FLOYD'S TRIANGLE ---\n"); // Print header for the fifth pattern
    print_floyds_triangle(rows); // Call function to print Floyd's triangle
    printf("\n"); // Print newline for spacing

    printf("--- 6. PASCAL'S TRIANGLE ---\n"); // Print header for the sixth pattern
    print_pascals_triangle(rows); // Call function to print Pascal's triangle
    printf("\n"); // Print newline for spacing

    return 0; // Return 0 to indicate successful program execution
} // End of main function

/*
====================================================================
1. HALF PYRAMID OF STARS
====================================================================
Output representation:
* 
* * 
* * * 
* * * * 
* * * * * 
*/
void print_half_pyramid(int rows) { // Define the function for half pyramid
    for (int i = 1; i <= rows; i++) { // Outer loop: iterates through each row from 1 to 'rows'
        for (int j = 1; j <= i; j++) { // Inner loop: prints 'i' stars for row 'i'
            printf("* "); // Print a star followed by a space
        } // End of inner loop
        printf("\n"); // Print a newline character to move to the next row
    } // End of outer loop
} // End of print_half_pyramid function

/*
====================================================================
2. INVERTED HALF PYRAMID OF STARS
====================================================================
Output representation:
* * * * * 
* * * * 
* * * 
* * 
* 
*/
void print_inverted_half_pyramid(int rows) { // Define the function for inverted half pyramid
    for (int i = rows; i >= 1; i--) { // Outer loop: iterates backwards from 'rows' down to 1
        for (int j = 1; j <= i; j++) { // Inner loop: prints 'i' stars for the current row
            printf("* "); // Print a star followed by a space
        } // End of inner loop
        printf("\n"); // Print a newline character to move to the next row
    } // End of outer loop
} // End of print_inverted_half_pyramid function

/*
====================================================================
3. FULL PYRAMID OF STARS
====================================================================
Output representation:
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
*/
void print_full_pyramid(int rows) { // Define the function for full pyramid
    for (int i = 1; i <= rows; i++) { // Outer loop: iterates through each row from 1 to 'rows'
        for (int space = 1; space <= rows - i; space++) { // Inner loop 1: prints leading spaces for alignment
            printf(" "); // Print a single space to shift the stars to the right
        } // End of space loop
        for (int j = 1; j <= i; j++) { // Inner loop 2: prints 'i' stars for row 'i'
            printf("* "); // Print a star followed by a space to create the pyramid shape
        } // End of star loop
        printf("\n"); // Print a newline character to move to the next row
    } // End of outer loop
} // End of print_full_pyramid function

/*
====================================================================
4. HOLLOW FULL PYRAMID OF STARS
====================================================================
Output representation:
    * 
   * * 
  *   * 
 *     * 
* * * * * 
*/
void print_hollow_full_pyramid(int rows) { // Define the function for hollow full pyramid
    for (int i = 1; i <= rows; i++) { // Outer loop: iterates through each row from 1 to 'rows'
        for (int space = 1; space <= rows - i; space++) { // Inner loop 1: prints leading spaces for alignment
            printf(" "); // Print a single space to shift the pattern elements right
        } // End of space loop
        for (int j = 1; j <= i; j++) { // Inner loop 2: prints stars and inner spaces for row 'i'
            if (j == 1 || j == i || i == rows) { // Check if we are at the first star, last star, or the last row
                printf("* "); // Print a star followed by a space (border elements)
            } else { // For any other intermediate position in intermediate rows
                printf("  "); // Print two spaces (hollow inner region)
            } // End of conditional statement
        } // End of pattern printing loop
        printf("\n"); // Print a newline character to move to the next row
    } // End of outer loop
} // End of print_hollow_full_pyramid function

/*
====================================================================
5. FLOYD'S TRIANGLE
====================================================================
Output representation:
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
*/
void print_floyds_triangle(int rows) { // Define the function for Floyd's triangle
    int num = 1; // Initialize the counter variable to start printing from 1
    for (int i = 1; i <= rows; i++) { // Outer loop: iterates through each row from 1 to 'rows'
        for (int j = 1; j <= i; j++) { // Inner loop: prints 'i' sequential numbers in row 'i'
            printf("%d ", num); // Print the current number followed by a space
            num++; // Increment the number counter by 1
        } // End of inner loop
        printf("\n"); // Print a newline character to move to the next row
    } // End of outer loop
} // End of print_floyds_triangle function

/*
====================================================================
6. PASCAL'S TRIANGLE
====================================================================
Output representation:
    1 
   1 1 
  1 2 1 
 1 3 3 1 
1 4 6 4 1 
*/
void print_pascals_triangle(int rows) { // Define the function for Pascal's triangle
    for (int i = 0; i < rows; i++) { // Outer loop: iterates through each row from 0 to 'rows - 1'
        for (int space = 1; space <= rows - i - 1; space++) { // Inner loop 1: prints leading spaces for centering
            printf(" "); // Print a single space to shift the values to the right
        } // End of space loop
        int val = 1; // Initialize the first value of the row to 1
        for (int j = 0; j <= i; j++) { // Inner loop 2: calculates and prints the values in row 'i'
            printf("%d ", val); // Print the calculated value followed by a space
            val = val * (i - j) / (j + 1); // Calculate the next value in the row using binomial coefficient formula
        } // End of calculation/printing loop
        printf("\n"); // Print a newline character to move to the next row
    } // End of outer loop
} // End of print_pascals_triangle function
