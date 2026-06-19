#include <stdio.h> // Include standard input-output library for printf

// Function to swap two variables using Call by Value
void swap_call_by_value(int num1, int num2) { // Define function taking two values
    printf("Inside swap function (Before swap): num1 = %d, num2 = %d\n", num1, num2); // Print initial local parameters
    int temp = num1; // Copy num1 into temporary variable temp
    num1 = num2; // Copy value of num2 into num1
    num2 = temp; // Copy value of temp into num2
    printf("Inside swap function (After swap) : num1 = %d, num2 = %d\n", num1, num2); // Print updated local parameters
} // End of swap_call_by_value function

int main() { // Main function where program execution starts
    int x = 10; // Initialize variable x
    int y = 20; // Initialize variable y

    printf("In main (Before calling swap)      : x = %d, y = %d\n", x, y); // Print values before calling function
    swap_call_by_value(x, y); // Call swap function using Call by Value (copies of x and y are passed)
    printf("In main (After calling swap)       : x = %d, y = %d\n", x, y); // Print values after calling function (unchanged)

    return 0; // Return 0 to indicate successful program execution
} // End of main function

/*
====================================================================
EXPECTED OUTPUT:
====================================================================
In main (Before calling swap)      : x = 10, y = 20
Inside swap function (Before swap): num1 = 10, num2 = 20
Inside swap function (After swap) : num1 = 20, num2 = 10
In main (After calling swap)       : x = 10, y = 20
====================================================================
Explanation:
Since parameters are passed by value, only the copies 'num1' and 'num2' 
in the swap function are swapped. The original variables 'x' and 'y' in main 
remain unchanged.
*/
