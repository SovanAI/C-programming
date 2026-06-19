#include <stdio.h> // Include standard input-output header file for file operations and printf
#include <stdlib.h> // Include standard library header file for exit codes and utility functions

// Define a structure for binary file handling demonstration
struct Student { // Declare a Student structure
    int id; // Integer field to store the student's unique ID
    char name[50]; // Character array to store the student's name
    float gpa; // Float field to store the student's GPA
}; // End of structure declaration

// Prototype declarations for each file handling function
void write_text_file(const char *filename);
void read_text_file(const char *filename);
void append_text_file(const char *filename);
void copy_text_file(const char *source_file, const char *destination_file);
void write_binary_file(const char *filename);
void read_binary_file(const char *filename);

int main() { // Main function where program execution starts
    const char *text_file = "sample.txt"; // Define the filename for text file operations
    const char *copied_file = "copy_sample.txt"; // Define the filename for the copied text file
    const char *binary_file = "student.bin"; // Define the filename for binary file operations

    printf("--- 1. WRITING TO A TEXT FILE ---\n"); // Print header for writing text
    write_text_file(text_file); // Call function to create and write to the text file
    printf("\n"); // Print newline for spacing

    printf("--- 2. READING FROM THE TEXT FILE ---\n"); // Print header for reading text
    read_text_file(text_file); // Call function to read and display text file contents
    printf("\n"); // Print newline for spacing

    printf("--- 3. APPENDING TO THE TEXT FILE ---\n"); // Print header for appending text
    append_text_file(text_file); // Call function to append new data to the text file
    printf("\n"); // Print newline for spacing

    printf("--- 4. READING AFTER APPENDING ---\n"); // Print header for reading modified file
    read_text_file(text_file); // Call function to read updated contents of the text file
    printf("\n"); // Print newline for spacing

    printf("--- 5. COPYING FILE TO A NEW LOCATION ---\n"); // Print header for copying file
    copy_text_file(text_file, copied_file); // Call function to copy contents to a new file
    printf("\n"); // Print newline for spacing

    printf("--- 6. READING FROM THE COPIED FILE ---\n"); // Print header for reading copied file
    read_text_file(copied_file); // Call function to verify contents of the copied file
    printf("\n"); // Print newline for spacing

    printf("--- 7. WRITING STRUCT DATA TO BINARY FILE ---\n"); // Print header for binary file writing
    write_binary_file(binary_file); // Call function to write structure data to binary format
    printf("\n"); // Print newline for spacing

    printf("--- 8. READING STRUCT DATA FROM BINARY FILE ---\n"); // Print header for binary file reading
    read_binary_file(binary_file); // Call function to read structure data from binary file
    printf("\n"); // Print newline for spacing

    return 0; // Return 0 to indicate successful program execution
} // End of main function

/*
====================================================================
1. WRITING TO A TEXT FILE
====================================================================
Expected output in file (sample.txt):
Hello World!
Welcome to C File Handling tutorial.
Learning to read and write files line by line.
*/
void write_text_file(const char *filename) { // Define the text file writing function
    FILE *file_ptr = fopen(filename, "w"); // Open file in write mode ("w") which creates or overwrites it
    if (file_ptr == NULL) { // Check if the file pointer is NULL, indicating an error opening the file
        printf("Error: Could not create or open file %s for writing!\n", filename); // Print error message
        return; // Exit function early since file could not be opened
    } // End of NULL check
    fprintf(file_ptr, "Hello World!\n"); // Write the first line of text to the file
    fprintf(file_ptr, "Welcome to C File Handling tutorial.\n"); // Write the second line of text to the file
    fprintf(file_ptr, "Learning to read and write files line by line.\n"); // Write the third line of text to the file
    fclose(file_ptr); // Close the file to flush buffers and release system resources
    printf("Successfully wrote initial content to '%s'.\n", filename); // Print success confirmation
} // End of write_text_file function

/*
====================================================================
2. READING FROM A TEXT FILE
====================================================================
Expected console output:
[File Content of sample.txt]:
Hello World!
Welcome to C File Handling tutorial.
Learning to read and write files line by line.
*/
void read_text_file(const char *filename) { // Define the text file reading function
    FILE *file_ptr = fopen(filename, "r"); // Open the file in read mode ("r")
    if (file_ptr == NULL) { // Check if the file pointer is NULL, meaning the file does not exist or cannot be read
        printf("Error: Could not open file %s for reading!\n", filename); // Print error message
        return; // Exit function early since file cannot be read
    } // End of NULL check
    char buffer[100]; // Create a character buffer to store each line read from the file
    printf("[File Content of %s]:\n", filename); // Print header for the file content
    while (fgets(buffer, sizeof(buffer), file_ptr) != NULL) { // Read file line-by-line until end-of-file (EOF)
        printf("%s", buffer); // Print the content of the buffer to the console
    } // End of read loop
    fclose(file_ptr); // Close the file to release system resources
} // End of read_text_file function

/*
====================================================================
3. APPENDING TO A TEXT FILE
====================================================================
Expected updated file content (sample.txt):
Hello World!
Welcome to C File Handling tutorial.
Learning to read and write files line by line.
[APPENDED] This line was added using append mode.
*/
void append_text_file(const char *filename) { // Define the text file appending function
    FILE *file_ptr = fopen(filename, "a"); // Open the file in append mode ("a") to write at the end of the file
    if (file_ptr == NULL) { // Check if the file pointer is NULL, indicating an error opening the file
        printf("Error: Could not open file %s for appending!\n", filename); // Print error message
        return; // Exit function early since file could not be opened
    } // End of NULL check
    fprintf(file_ptr, "[APPENDED] This line was added using append mode.\n"); // Write appended line to file
    fclose(file_ptr); // Close the file to save changes and release resources
    printf("Successfully appended new content to '%s'.\n", filename); // Print success confirmation
} // End of append_text_file function

/*
====================================================================
4. COPYING A FILE
====================================================================
Expected output:
Creates a duplicate file (copy_sample.txt) with identical contents as sample.txt
*/
void copy_text_file(const char *source_file, const char *destination_file) { // Define file copying function
    FILE *src = fopen(source_file, "r"); // Open source file in read mode ("r")
    if (src == NULL) { // Check if source file pointer is NULL
        printf("Error: Could not open source file %s!\n", source_file); // Print error message
        return; // Exit function early
    } // End of source check
    FILE *dest = fopen(destination_file, "w"); // Open destination file in write mode ("w")
    if (dest == NULL) { // Check if destination file pointer is NULL
        printf("Error: Could not create destination file %s!\n", destination_file); // Print error message
        fclose(src); // Close the already opened source file before exiting
        return; // Exit function early
    } // End of destination check
    char ch; // Declare character variable to read data byte-by-byte
    while ((ch = fgetc(src)) != EOF) { // Read character by character from source file until End of File
        fputc(ch, dest); // Write the character to the destination file
    } // End of copy loop
    fclose(src); // Close the source file
    fclose(dest); // Close the destination file
    printf("Successfully copied content from '%s' to '%s'.\n", source_file, destination_file); // Print confirmation
} // End of copy_text_file function

/*
====================================================================
5. WRITING STRUCT TO BINARY FILE
====================================================================
Expected output:
Creates a binary file (student.bin) containing the serialized Student struct data.
*/
void write_binary_file(const char *filename) { // Define function to write struct to binary file
    FILE *file_ptr = fopen(filename, "wb"); // Open file in write-binary mode ("wb")
    if (file_ptr == NULL) { // Check if file pointer is NULL
        printf("Error: Could not open file %s for binary writing!\n", filename); // Print error message
        return; // Exit function early
    } // End of NULL check
    struct Student s1 = {101, "Alice Smith", 3.92}; // Create and initialize a Student struct instance
    fwrite(&s1, sizeof(struct Student), 1, file_ptr); // Write 1 instance of Student structure into binary file
    fclose(file_ptr); // Close the file to save binary data and release resources
    printf("Successfully wrote binary data for student: %s (ID: %d, GPA: %.2f) to '%s'.\n", s1.name, s1.id, s1.gpa, filename); // Print confirmation
} // End of write_binary_file function

/*
====================================================================
6. READING STRUCT FROM BINARY FILE
====================================================================
Expected console output:
Successfully read binary data from 'student.bin':
Student ID  : 101
Student Name: Alice Smith
Student GPA : 3.92
*/
void read_binary_file(const char *filename) { // Define function to read struct from binary file
    FILE *file_ptr = fopen(filename, "rb"); // Open file in read-binary mode ("rb")
    if (file_ptr == NULL) { // Check if file pointer is NULL (file not found or unreadable)
        printf("Error: Could not open file %s for binary reading!\n", filename); // Print error message
        return; // Exit function early
    } // End of NULL check
    struct Student s1; // Declare an uninitialized Student struct to store read data
    fread(&s1, sizeof(struct Student), 1, file_ptr); // Read 1 instance of Student struct from binary file
    fclose(file_ptr); // Close the binary file
    printf("Successfully read binary data from '%s':\n", filename); // Print header for output
    printf("  Student ID  : %d\n", s1.id); // Print the student's ID
    printf("  Student Name: %s\n", s1.name); // Print the student's name
    printf("  Student GPA : %.2f\n", s1.gpa); // Print the student's GPA
} // End of read_binary_file function
