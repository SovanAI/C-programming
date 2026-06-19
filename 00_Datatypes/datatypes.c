#include <stdio.h> // Include standard input-output library for printing outputs

// Struct declaration to show user-defined composite data types
struct Point { // Define a structure named Point
    int x; // Integer member x (coordinates)
    int y; // Integer member y (coordinates)
}; // End of structure declaration

// Union declaration to show shared memory structures
union Data { // Define a union named Data
    int integer_val; // Integer member (occupies 4 bytes)
    float float_val; // Floating-point member (occupies 4 bytes)
    char char_val; // Character member (occupies 1 byte)
}; // End of union declaration (total size is size of largest member: 4 bytes)

// Enum declaration to show user-defined enumeration types
enum Day { // Define an enum named Day
    SUNDAY, // Value is automatically 0
    MONDAY, // Value is automatically 1
    TUESDAY, // Value is automatically 2
    WEDNESDAY // Value is automatically 3
}; // End of enum declaration

// Prototype declarations for each demonstration function
void demonstrate_basic_types(void);
void demonstrate_derived_types(void);
void demonstrate_user_defined_types(void);
void demonstrate_type_conversion(void);

int main() { // Main function where program execution starts
    printf("--- 1. BASIC DATA TYPES AND SIZES ---\n"); // Print header for basic types
    demonstrate_basic_types(); // Call function to show basic data types
    printf("\n"); // Print newline for spacing

    printf("--- 2. DERIVED DATA TYPES ---\n"); // Print header for derived types
    demonstrate_derived_types(); // Call function to show arrays and pointers
    printf("\n"); // Print newline for spacing

    printf("--- 3. USER-DEFINED DATA TYPES ---\n"); // Print header for user-defined types
    demonstrate_user_defined_types(); // Call function to show struct, union, and enum
    printf("\n"); // Print newline for spacing

    printf("--- 4. TYPE CONVERSIONS ---\n"); // Print header for type conversions
    demonstrate_type_conversion(); // Call function to show implicit and explicit casting
    printf("\n"); // Print newline for spacing

    return 0; // Return 0 to indicate successful program execution
} // End of main function

/*
====================================================================
1. BASIC DATA TYPES AND SIZES
====================================================================
Expected console output (sizes may vary slightly depending on system compiler):
Size of char: 1 byte, Value: 'A'
Size of short: 2 bytes, Value: 32767
Size of int: 4 bytes, Value: 2147483647
Size of long: 4 bytes, Value: 2147483647
Size of float: 4 bytes, Value: 3.141590
Size of double: 8 bytes, Value: 3.141592653500
Size of unsigned int: 4 bytes, Value: 4294967295
*/
void demonstrate_basic_types(void) { // Define function to show basic data types
    char char_var = 'A'; // Declare and initialize a character variable
    short short_var = 32767; // Declare and initialize a short integer variable
    int int_var = 2147483647; // Declare and initialize a standard integer variable
    long long_var = 2147483647L; // Declare and initialize a long integer variable
    float float_var = 3.14159f; // Declare and initialize a single-precision floating variable
    double double_var = 3.1415926535; // Declare and initialize a double-precision floating variable
    unsigned int u_int_var = 4294967295U; // Declare and initialize an unsigned integer variable

    printf("Size of char: %zu byte, Value: '%c'\n", sizeof(char_var), char_var); // Print size and value of char
    printf("Size of short: %zu bytes, Value: %d\n", sizeof(short_var), short_var); // Print size and value of short
    printf("Size of int: %zu bytes, Value: %d\n", sizeof(int_var), int_var); // Print size and value of int
    printf("Size of long: %zu bytes, Value: %ld\n", sizeof(long_var), long_var); // Print size and value of long
    printf("Size of float: %zu bytes, Value: %f\n", sizeof(float_var), float_var); // Print size and value of float
    printf("Size of double: %zu bytes, Value: %.10f\n", sizeof(double_var), double_var); // Print size and value of double
    printf("Size of unsigned int: %zu bytes, Value: %u\n", sizeof(u_int_var), u_int_var); // Print size and value of unsigned int
} // End of demonstrate_basic_types function

/*
====================================================================
2. DERIVED DATA TYPES
====================================================================
Expected console output:
Array elements: 10, 20, 30, 40, 50
Total size of array: 20 bytes (5 elements * 4 bytes each)
Pointer value (address stored): 0x...
Value pointed to by ptr: 100
*/
void demonstrate_derived_types(void) { // Define function to show derived data types
    int arr[5] = {10, 20, 30, 40, 50}; // Declare and initialize a 1D array of 5 integers
    printf("Array elements: "); // Print introductory text
    for (int i = 0; i < 5; i++) { // Loop through the array indices 0 to 4
        printf("%d ", arr[i]); // Print the element at index i
    } // End of print loop
    printf("\n"); // Move to the next line

    printf("Total size of array: %zu bytes (5 elements * %zu bytes each)\n", sizeof(arr), sizeof(arr[0])); // Print size details of array

    int number = 100; // Declare a standard integer variable
    int *ptr = &number; // Declare an integer pointer and initialize it with the address of 'number'
    printf("Pointer value (address stored): %p\n", (void*)ptr); // Print the memory address stored in ptr
    printf("Value pointed to by ptr: %d\n", *ptr); // Dereference the pointer and print the value at that address
} // End of demonstrate_derived_types function

/*
====================================================================
3. USER-DEFINED DATA TYPES
====================================================================
Expected console output:
Structure Point: x = 10, y = 20
Size of Structure Point: 8 bytes (4 bytes for x + 4 bytes for y)
Union Data after integer_val write: integer_val = 65
Union Data after char_val write: integer_val = 66, char_val = B
Size of Union Data: 4 bytes (shared memory)
Enum value for WEDNESDAY: 3
*/
void demonstrate_user_defined_types(void) { // Define function to show user-defined data types
    struct Point p1 = {10, 20}; // Create and initialize a Point structure variable
    printf("Structure Point: x = %d, y = %d\n", p1.x, p1.y); // Access and print structure members
    printf("Size of Structure Point: %zu bytes\n", sizeof(p1)); // Print structure size (sum of members + padding)

    union Data d1; // Declare a Union variable
    d1.integer_val = 65; // Assign an integer value to the union member
    printf("Union Data after integer_val write: integer_val = %d\n", d1.integer_val); // Print integer value

    d1.char_val = 'B'; // Assign a char value to the union member, overwriting previous data since memory is shared
    printf("Union Data after char_val write: integer_val = %d, char_val = %c\n", d1.integer_val, d1.char_val); // Print overwritten state
    printf("Size of Union Data: %zu bytes\n", sizeof(d1)); // Print union size (equal to size of largest member)

    enum Day today = WEDNESDAY; // Declare an enum variable and assign an enum constant
    printf("Enum value for WEDNESDAY: %d\n", today); // Print the underlying integer representation of the enum value
} // End of demonstrate_user_defined_types function

/*
====================================================================
4. TYPE CONVERSIONS
====================================================================
Expected console output:
Implicit Conversion (char to int): ASCII 'A' + 5 = 70
Explicit Conversion (double to int): (int)9.99 = 9
Explicit Conversion (int to float): 5 / 2 = 2 (integer division)
Explicit Conversion (casted float): 5.0 / 2 = 2.50
*/
void demonstrate_type_conversion(void) { // Define function to show type conversions
    char c = 'A'; // Declare char variable (ASCII value 65)
    int implicit_result = c + 5; // Implicit conversion: char is promoted to int (65 + 5 = 70)
    printf("Implicit Conversion (char to int): ASCII '%c' + 5 = %d\n", c, implicit_result); // Print conversion output

    double pi = 9.99; // Declare double variable
    int explicit_result = (int)pi; // Explicit conversion (type casting): double is truncated to integer
    printf("Explicit Conversion (double to int): (int)%.2f = %d\n", pi, explicit_result); // Print casted output

    int a = 5; // Declare integer a
    int b = 2; // Declare integer b
    float result_div1 = a / b; // Performs integer division (5/2 = 2), then implicitly converts 2 to float (2.0)
    float result_div2 = (float)a / b; // Explicit cast: converts 'a' to float (5.0), leading to float division (5.0/2 = 2.5)
    printf("Explicit Conversion (int to float): 5 / 2 = %.1f (integer division)\n", result_div1); // Print result of integer division
    printf("Explicit Conversion (casted float): 5.0 / 2 = %.2f\n", result_div2); // Print result of casted float division
} // End of demonstrate_type_conversion function
