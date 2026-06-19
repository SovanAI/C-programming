#include <stdio.h> // Include standard input-output header file for printing outputs
#include <string.h> // Include string header file for strcpy function

// Define a simple structure using typedef to represent a Book
typedef struct { // Start of structure definition with typedef
    char title[100]; // Member: Character array to store the book title
    char author[50]; // Member: Character array to store the author name
    float price; // Member: Float to store the price of the book
} Book; // Name of the typedef alias is 'Book'

// Define a structure to demonstrate nested structures
struct Address { // Start of Address structure definition
    char city[50]; // Member: City name
    int pin_code; // Member: PIN code
}; // End of Address structure

struct Employee { // Start of Employee structure definition
    int emp_id; // Member: Employee ID
    char name[50]; // Member: Employee Name
    struct Address addr; // Nested member: Address structure inside Employee structure
}; // End of Employee structure

// Prototype declarations for each demonstration function
void demonstrate_basic_struct(void);
void demonstrate_struct_pointers(void);
void demonstrate_passing_structs(void);
void demonstrate_array_of_structs(void);
void demonstrate_nested_structs(void);

// Auxiliary functions for passing-by-value vs passing-by-reference demos
void print_book_by_value(Book b); // Function declaration: takes Book by value
void update_book_price_by_ref(Book *b, float new_price); // Function declaration: takes Book pointer by reference

int main() { // Main function where program execution starts
    printf("--- 1. BASIC STRUCTURE DECLARATION AND ACCESS ---\n"); // Print header for basic structure
    demonstrate_basic_struct(); // Call function to show basic structures and designated initializers
    printf("\n"); // Print newline for spacing

    printf("--- 2. STRUCTURE POINTERS AND ARROW OPERATOR ---\n"); // Print header for structure pointers
    demonstrate_struct_pointers(); // Call function to show pointer usage with structures
    printf("\n"); // Print newline for spacing

    printf("--- 3. PASSING STRUCTURES TO FUNCTIONS ---\n"); // Print header for passing structures
    demonstrate_passing_structs(); // Call function to show pass-by-value vs pass-by-reference
    printf("\n"); // Print newline for spacing

    printf("--- 4. ARRAY OF STRUCTURES ---\n"); // Print header for array of structures
    demonstrate_array_of_structs(); // Call function to show arrays of structures
    printf("\n"); // Print newline for spacing

    printf("--- 5. NESTED STRUCTURES ---\n"); // Print header for nested structures
    demonstrate_nested_structs(); // Call function to show structures within structures
    printf("\n"); // Print newline for spacing

    return 0; // Return 0 to indicate successful program execution
} // End of main function

/*
====================================================================
1. BASIC STRUCTURE DECLARATION AND ACCESS
====================================================================
Expected console output:
Book 1: Title: C Programming, Author: Dennis Ritchie, Price: 350.50
Book 2: Title: Data Structures, Author: Reema Thareja, Price: 420.00
*/
void demonstrate_basic_struct(void) { // Define the basic structure demonstration function
    Book b1; // Declare a Book variable b1 (using the typedef alias)
    strcpy(b1.title, "C Programming"); // Copy string literal into the b1 title member array
    strcpy(b1.author, "Dennis Ritchie"); // Copy string literal into the b1 author member array
    b1.price = 350.50f; // Assign floating-point value to the b1 price member

    // Initialize Book variable b2 using designated initializers
    Book b2 = { // Open initialization block
        .title = "Data Structures", // Specify initializer for the title member
        .author = "Reema Thareja", // Specify initializer for the author member
        .price = 420.00f // Specify initializer for the price member
    }; // Close initialization block

    printf("Book 1: Title: %s, Author: %s, Price: %.2f\n", b1.title, b1.author, b1.price); // Print members of b1
    printf("Book 2: Title: %s, Author: %s, Price: %.2f\n", b2.title, b2.author, b2.price); // Print members of b2
} // End of demonstrate_basic_struct function

/*
====================================================================
2. STRUCTURE POINTERS AND ARROW OPERATOR
====================================================================
Expected console output:
Book via pointer (*ptr): Title: The C Standard, Author: ANSI, Price: 500.00
Book via arrow (ptr->): Title: The C Standard, Author: ANSI, Price: 500.00
Updated price via arrow: 550.00
*/
void demonstrate_struct_pointers(void) { // Define the structure pointers demonstration function
    Book b = {"The C Standard", "ANSI", 500.00f}; // Declare and initialize a Book variable
    Book *ptr = &b; // Declare a Book pointer and assign the address of b to it

    // Access members using dereferencing and dot operator (*ptr).member
    printf("Book via pointer (*ptr): Title: %s, Author: %s, Price: %.2f\n", (*ptr).title, (*ptr).author, (*ptr).price); // Print Book members
    
    // Access members using structure pointer arrow operator ptr->member
    printf("Book via arrow (ptr->): Title: %s, Author: %s, Price: %.2f\n", ptr->title, ptr->author, ptr->price); // Print Book members

    ptr->price = 550.00f; // Modify member value directly using pointer arrow operator
    printf("Updated price via arrow: %.2f\n", b.price); // Print modified price to verify value changed
} // End of demonstrate_struct_pointers function

/*
====================================================================
3. PASSING STRUCTURES TO FUNCTIONS
====================================================================
Expected console output:
[Inside print_book_by_value] Book: Title: Algorithms, Author: CLRS, Price: 800.00
Updating price to 850.00...
New Price in main after update: 850.00
*/
void demonstrate_passing_structs(void) { // Define the structure passing demonstration function
    Book b = {"Algorithms", "CLRS", 800.00f}; // Declare and initialize a Book variable
    
    print_book_by_value(b); // Pass structure by value (makes a copy of b inside function)
    
    printf("Updating price to 850.00...\n"); // Print message indicating upcoming update
    update_book_price_by_ref(&b, 850.00f); // Pass structure by reference using its address to modify members
    
    printf("New Price in main after update: %.2f\n", b.price); // Print updated price in main function
} // End of demonstrate_passing_structs function

void print_book_by_value(Book b) { // Define function that accepts structure by value
    printf("[Inside print_book_by_value] Book: Title: %s, Author: %s, Price: %.2f\n", b.title, b.author, b.price); // Print book details
} // End of print_book_by_value function

void update_book_price_by_ref(Book *b, float new_price) { // Define function that accepts structure by pointer
    b->price = new_price; // Modify the price member of the structure referenced by the pointer
} // End of update_book_price_by_ref function

/*
====================================================================
4. ARRAY OF STRUCTURES
====================================================================
Expected console output:
Student Book list:
Book Index 1: Programming PHP by Rasmus Lerdorf (Price: $25.99)
Book Index 2: Learning Python by Mark Lutz (Price: $45.50)
*/
void demonstrate_array_of_structs(void) { // Define function for array of structures
    Book library[2] = { // Declare and initialize an array containing 2 Book structures
        {"Programming PHP", "Rasmus Lerdorf", 25.99f}, // Initialize first structure element
        {"Learning Python", "Mark Lutz", 45.50f} // Initialize second structure element
    }; // End of array initialization

    printf("Student Book list:\n"); // Print section header
    for (int i = 0; i < 2; i++) { // Loop through array elements index 0 to 1
        printf("Book Index %d: %s by %s (Price: $%.2f)\n", i + 1, library[i].title, library[i].author, library[i].price); // Print details of each book
    } // End of print loop
} // End of demonstrate_array_of_structs function

/*
====================================================================
5. NESTED STRUCTURES
====================================================================
Expected console output:
Employee details:
  ID: 1001
  Name: John Doe
  City: Kolkata
  PIN Code: 700001
*/
void demonstrate_nested_structs(void) { // Define function for nested structures demonstration
    struct Employee emp; // Declare a struct Employee variable
    emp.emp_id = 1001; // Assign integer ID to employee ID member
    strcpy(emp.name, "John Doe"); // Copy string literal into employee name member
    strcpy(emp.addr.city, "Kolkata"); // Copy string into city member of nested structure addr
    emp.addr.pin_code = 700001; // Assign integer value to pin_code member of nested structure addr

    printf("Employee details:\n"); // Print employee header
    printf("  ID: %d\n", emp.emp_id); // Print employee ID
    printf("  Name: %s\n", emp.name); // Print employee name
    printf("  City: %s\n", emp.addr.city); // Access and print nested member city
    printf("  PIN Code: %d\n", emp.addr.pin_code); // Access and print nested member pin_code
} // End of demonstrate_nested_structs function
