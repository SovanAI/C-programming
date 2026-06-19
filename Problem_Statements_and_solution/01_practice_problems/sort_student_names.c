#include <stdio.h> // Include standard input-output library for printf
#include <string.h> // Include string handling library for strcmp and strcpy

// Function to sort names alphabetically using Bubble Sort algorithm
void sort_names(char names[][50], int num_students) { // Define function taking 2D char array and count
    char temp[50]; // Temporary character array used for swapping names

    for (int i = 0; i < num_students - 1; i++) { // Outer loop: iterates through array passes
        for (int j = 0; j < num_students - i - 1; j++) { // Inner loop: compares adjacent elements
            if (strcmp(names[j], names[j + 1]) > 0) { // Check if current name is alphabetically greater than next name
                strcpy(temp, names[j]); // Copy current name to temp variable
                strcpy(names[j], names[j + 1]); // Overwrite current name with next name
                strcpy(names[j + 1], temp); // Copy temp name into the next name position
            } // End of swap logic block
        } // End of inner loop
    } // End of outer loop
} // End of sort_names function

int main() { // Main function where program execution starts
    char student_list[][50] = { // Declare and initialize a 2D character array of student names
        "Sovan",
        "Alice",
        "Rahul",
        "Bob",
        "David"
    }; // End of array initialization
    int size = sizeof(student_list) / sizeof(student_list[0]); // Calculate the total number of students

    printf("Names before sorting:\n"); // Print section header
    for (int i = 0; i < size; i++) { // Loop through and display initial list
        printf("  %s\n", student_list[i]); // Print current name
    } // End of print loop

    sort_names(student_list, size); // Call the function to sort names alphabetically

    printf("\nNames after sorting alphabetically:\n"); // Print section header
    for (int i = 0; i < size; i++) { // Loop through and display sorted list
        printf("  %s\n", student_list[i]); // Print current sorted name
    } // End of print loop

    return 0; // Return 0 to indicate successful program execution
} // End of main function

/*
====================================================================
EXPECTED OUTPUT:
====================================================================
Names before sorting:
  Sovan
  Alice
  Rahul
  Bob
  David

Names after sorting alphabetically:
  Alice
  Bob
  David
  Rahul
  Sovan
*/
