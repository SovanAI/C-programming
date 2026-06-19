#include <stdio.h> // Include standard input-output library for printf

#define PI 3.14159f // Define a constant float value for PI

// Function to calculate the area of a circle
float calculate_area(float radius) { // Define function taking float radius as parameter
    return PI * radius * radius; // Calculate and return the area (PI * r^2)
} // End of calculate_area function

// Function to calculate the circumference of a circle
float calculate_circumference(float radius) { // Define function taking float radius as parameter
    return 2.0f * PI * radius; // Calculate and return the circumference (2 * PI * r)
} // End of calculate_circumference function

int main() { // Main function where program execution starts
    float radius = 5.0f; // Define the radius of the circle
    float area; // Declare variable to store the calculated area
    float circumference; // Declare variable to store the calculated circumference

    area = calculate_area(radius); // Call function to calculate area
    circumference = calculate_circumference(radius); // Call function to calculate circumference

    printf("Circle Stats for Radius = %.2f:\n", radius); // Print header showing radius
    printf("  Area         : %.4f\n", area); // Print the calculated area
    printf("  Circumference: %.4f\n", circumference); // Print the calculated circumference

    return 0; // Return 0 to indicate successful program execution
} // End of main function

/*
====================================================================
EXPECTED OUTPUT:
====================================================================
Circle Stats for Radius = 5.00:
  Area         : 78.5397
  Circumference: 31.4159
*/
