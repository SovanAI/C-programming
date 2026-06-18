#include <stdio.h>
#include<conio.h>

// solution of the asked question previously

int main ()
{
    int num = 1; // fixed for the entire program 
    int num_user ; // the value given by the user to determine the table 
    int cal ; // calculate the table 
    
    printf("Enter a number to calculate the table: ");
    scanf("%d", &num_user);

    while ( num <= 10 && num < 11)// and operation is to make sure the logical meaning is same 
    // logic to operate the table range 
    {
            cal = num * num_user;
            printf("%d * %d = %d \n", num , num_user, cal);
            ++ num;
    }
    return 0;
}
// solve the problem using decrement function