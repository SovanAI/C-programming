#include <stdio.h>
#include <conio.h>

// while loop problems and solutions 

int main()
{   int fact;
    int sum = 1  ;
    printf("Enter the value to determine the factorial: ");
    scanf("%d", &fact);
    while(fact > 0)
    {
        
        sum = fact * sum ;
        fact = fact - 1 ;  // recursive function 
        // -- fact;   this one is predecrement function 
        
    }
    printf("%d", sum);
    return 0;
    // modify the code to determine every step in this factorial
}

// write a code using while loop to determine the number table of any number from (1 to 10)