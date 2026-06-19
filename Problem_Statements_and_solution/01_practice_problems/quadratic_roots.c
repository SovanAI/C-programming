#include <stdio.h> // Include standard input-output library for printf
#include <math.h> // Include mathematics library for sqrt function

// Function to calculate and print the roots of a quadratic equation: ax^2 + bx + c = 0
void find_roots(double a, double b, double c) { // Define function taking coefficients a, b, and c
    double discriminant; // Declare variable to store the discriminant value
    double root1, root2; // Declare variables to store real root values
    double real_part, imag_part; // Declare variables to store real and imaginary parts of complex roots

    if (a == 0) { // Check if coefficient 'a' is zero (which makes it a linear equation, not quadratic)
        printf("Error: Coefficient 'a' cannot be zero for a quadratic equation.\n"); // Print error message
        return; // Exit function early
    } // End of linear check

    discriminant = (b * b) - (4 * a * c); // Compute the discriminant (b^2 - 4ac)

    if (discriminant > 0) { // Condition for real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a); // Compute first real root
        root2 = (-b - sqrt(discriminant)) / (2 * a); // Compute second real root
        printf("Roots are real and distinct:\n"); // Print classification header
        printf("  Root 1 = %.2f\n", root1); // Display first root
        printf("  Root 2 = %.2f\n", root2); // Display second root
    } else if (discriminant == 0) { // Condition for real and equal roots
        root1 = root2 = -b / (2 * a); // Compute double root value
        printf("Roots are real and equal:\n"); // Print classification header
        printf("  Root 1 = Root 2 = %.2f\n", root1); // Display the equal root value
    } else { // Condition for complex/imaginary roots (discriminant < 0)
        real_part = -b / (2 * a); // Compute the real component of the roots
        imag_part = sqrt(-discriminant) / (2 * a); // Compute the imaginary component of the roots
        printf("Roots are complex and imaginary:\n"); // Print classification header
        printf("  Root 1 = %.2f + %.2fi\n", real_part, imag_part); // Display first complex root
        printf("  Root 2 = %.2f - %.2fi\n", real_part, imag_part); // Display second complex root
    } // End of discriminant conditional
} // End of find_roots function

int main() { // Main function where program execution starts
    double a = 1.0, b = -5.0, c = 6.0; // Equation: x^2 - 5x + 6 = 0 (Real roots: 3 and 2)
    double a2 = 1.0, b2 = 2.0, c2 = 5.0; // Equation: x^2 + 2x + 5 = 0 (Complex roots: -1 +/- 2i)

    printf("For Equation 1 (a=%.1f, b=%.1f, c=%.1f):\n", a, b, c); // Print header for first equation
    find_roots(a, b, c); // Solve first equation
    printf("\n"); // Print newline for spacing

    printf("For Equation 2 (a=%.1f, b=%.1f, c=%.1f):\n", a2, b2, c2); // Print header for second equation
    find_roots(a2, b2, c2); // Solve second equation

    return 0; // Return 0 to indicate successful program execution
} // End of main function

/*
====================================================================
EXPECTED OUTPUT:
====================================================================
For Equation 1 (a=1.0, b=-5.0, c=6.0):
Roots are real and distinct:
  Root 1 = 3.00
  Root 2 = 2.00

For Equation 2 (a=1.0, b=2.0, c=5.0):
Roots are complex and imaginary:
  Root 1 = -1.00 + 2.00i
  Root 2 = -1.00 - 2.00i
*/
