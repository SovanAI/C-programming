#include <stdio.h> // Include standard input-output library for printf

// Function to concatenate two strings without using strcat()
void concatenate_strings(char dest[], const char src[]) { // Define function taking destination and source strings
    int i = 0; // Initialize loop variable to find the end of destination string
    int j = 0; // Initialize loop variable to traverse source string

    while (dest[i] != '\0') { // Loop until the null terminator of destination string is reached
        i++; // Increment index to move to next character
    } // End of length check loop (i now holds the length of dest)

    while (src[j] != '\0') { // Loop through the source string until its null terminator is reached
        dest[i] = src[j]; // Copy current character from source string to the end of destination string
        i++; // Increment destination index
        j++; // Increment source index
    } // End of character copying loop

    dest[i] = '\0'; // Append null terminator at the end of the concatenated string to mark its end
} // End of concatenate_strings function

int main() { // Main function where program execution starts
    char string1[100] = "Hello, "; // Declare and initialize first string (with extra size for concatenation)
    char string2[] = "World!"; // Declare and initialize second string

    printf("String 1 before concatenation: %s\n", string1); // Print string1 state before concat
    printf("String 2 to concatenate      : %s\n", string2); // Print string2 state before concat

    concatenate_strings(string1, string2); // Concatenate string2 onto string1

    printf("String 1 after concatenation : %s\n", string1); // Print final concatenated string1

    return 0; // Return 0 to indicate successful program execution
} // End of main function

/*
====================================================================
EXPECTED OUTPUT:
====================================================================
String 1 before concatenation: Hello, 
String 2 to concatenate      : World!
String 1 after concatenation : Hello, World!
*/
