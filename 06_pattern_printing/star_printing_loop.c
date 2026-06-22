#include <stdio.h>
#include <conio.h>

int main()
{  
    
    int i, j;

    // Print H
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(j == 0 || j == 4 || i == 2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

    // Print I
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(i == 0 || i == 4 || j == 2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
// pattern printing is nothing but an art craft using mathmatical formula and printing techniques 
// using a lot of equation and logics we can draw or add patterns in pixels , here the pattern is printed using "*".
// It will increase your logical resoning ability.
// keep learning