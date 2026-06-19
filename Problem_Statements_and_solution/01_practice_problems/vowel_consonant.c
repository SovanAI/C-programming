#include <stdio.h> // Include standard input-output library for printf
#include <ctype.h> // Include character testing functions (like isalpha and tolower)

// Function to check if character is a vowel or consonant, or invalid
const char* check_character_type(char c) { // Define function returning a string constant pointer
    if (!isalpha(c)) { // Check if the character is not an alphabetical letter
        return "wrong input"; // Return "wrong input" if it is a number, symbol, or space
    } // End of alphabet check

    char lower_c = tolower(c); // Convert character to lowercase to simplify comparisons

    if (lower_c == 'a' || lower_c == 'e' || lower_c == 'i' || lower_c == 'o' || lower_c == 'u') { // Check if character is a vowel
        return "vowel"; // Return "vowel" if match found
    } else { // If it is an alphabet and not a vowel, it must be a consonant
        return "consonant"; // Return "consonant"
    } // End of vowel check
} // End of check_character_type function

int main() { // Main function where program execution starts
    char test1 = 'E'; // Vowel test case
    char test2 = 'z'; // Consonant test case
    char test3 = '9'; // Non-alphabet test case

    printf("Character '%c' is classified as: %s\n", test1, check_character_type(test1)); // Output classifications for test1
    printf("Character '%c' is classified as: %s\n", test2, check_character_type(test2)); // Output classifications for test2
    printf("Character '%c' is classified as: %s\n", test3, check_character_type(test3)); // Output classifications for test3

    return 0; // Return 0 to indicate successful program execution
} // End of main function

/*
====================================================================
EXPECTED OUTPUT:
====================================================================
Character 'E' is classified as: vowel
Character 'z' is classified as: consonant
Character '9' is classified as: wrong input
*/
