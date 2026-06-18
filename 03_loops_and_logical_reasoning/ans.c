#include <stdio.h>
#include <conio.h>

int main()
{
    int marks;
    printf("Enter your marks (0-15): ");
    scanf("%d", &marks);

    if (marks == 15)
    {
       printf("A"); /* code */
    }
    
    else if (marks < 15 && marks >= 10)
    {
        printf("B");

    }
    else if (marks >= 5 && marks < 10)
    {
        printf("P");
    }
    else if( marks < 5 && marks >= 0)
    {
        printf("Fail");
    }
    else
    {
        printf("Enter the marks with in range (0-15)");
    }

    return 0;
}

// Write a program to determine the makaut grading system and calculate the gpa