#include <stdio.h>

int main()
{
    // Variable to store the number of terms
    int n;

    // First two terms of Fibonacci series
    int first = 0, second = 1;

    // Variable used for generating next term
    int next;

    // Loop counter
    int i;      //you can define the loop counter outside the for loop 

    // Ask user for the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Display heading
    printf("Fibonacci Series:\n");

    // Print Fibonacci series
    for(i = 1; i <= n; i++)
    {
        // Print current term
        printf("%d ", first);

        // Calculate next Fibonacci number
        next = first + second;

        // Update values for next iteration
        first = second;
        second = next;
    }

    return 0;
}

// PYQ SOLUTION FOR MAKAUT SEM EXAM 