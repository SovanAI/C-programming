#include <stdio.h> // Include standard input-output library for printf

// Define structure to represent Student details
struct Student { // Declare Student structure
    char name[50]; // Member: Character array to store name
    int roll; // Member: Integer to store roll number
    float marks; // Member: Float to store marks
}; // End of structure declaration

// Function to print student records and calculate average marks
void process_student_records(struct Student class_list[], int size) { // Define function taking array and its size
    float total_marks = 0.0f; // Initialize total marks accumulator to 0.0
    float average_marks; // Declare variable to hold calculated average

    printf("==========================================\n"); // Print layout border
    printf("%-20s %-10s %-10s\n", "Student Name", "Roll No", "Marks"); // Print table header columns
    printf("==========================================\n"); // Print layout border

    for (int i = 0; i < size; i++) { // Loop through each student record in the array
        printf("%-20s %-10d %-10.2f\n", class_list[i].name, class_list[i].roll, class_list[i].marks); // Print individual student details
        total_marks = total_marks + class_list[i].marks; // Add current student's marks to total marks accumulator
    } // End of print loop

    printf("==========================================\n"); // Print layout border
    average_marks = total_marks / size; // Compute the average marks
    printf("Average Marks of the Class: %.2f\n", average_marks); // Print the final average marks
} // End of process_student_records function

int main() { // Main function where program execution starts
    struct Student list[10] = { // Declare and initialize an array of 10 Student structures
        {"Sovan", 1, 85.5f}, // Student 1
        {"Alice", 2, 92.0f}, // Student 2
        {"Bob", 3, 78.5f}, // Student 3
        {"Charlie", 4, 88.0f}, // Student 4
        {"David", 5, 74.0f}, // Student 5
        {"Emma", 6, 91.5f}, // Student 6
        {"Frank", 7, 65.0f}, // Student 7
        {"Grace", 8, 83.0f}, // Student 8
        {"Henry", 9, 79.5f}, // Student 9
        {"Jack", 10, 89.0f} // Student 10
    }; // End of array initialization

    process_student_records(list, 10); // Process and print student records

    return 0; // Return 0 to indicate successful program execution
} // End of main function

/*
====================================================================
EXPECTED OUTPUT:
====================================================================
==========================================
Student Name         Roll No    Marks     
==========================================
Sovan                1          85.50     
Alice                2          92.00     
Bob                  3          78.50     
Charlie              4          88.00     
David                5          74.00     
Emma                 6          91.50     
Frank                7          65.00     
Grace                8          83.00     
Henry                9          79.50     
Jack                 10         89.00     
==========================================
Average Marks of the Class: 82.60
*/
