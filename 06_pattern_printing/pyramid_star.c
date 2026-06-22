#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter number of rows: ");   // value needed for the pyramid structural rows 
    scanf("%d", &n);

    for(i = 1; i <= n; i++)  
    {
        // Print spaces
        for(j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // Print stars
        for(j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

/*  
     *
    ***
   *****
  *******
 *********


 */ // output of the program if the given value is n = 5

 // write or practice the program printning the decending pyramid printing program 

 /*  reqired output :

    *********
     *******
      *****
       ***
        *
        
        
 */