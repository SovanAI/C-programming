#include <stdio.h>
#include <math.h>

// The solution of an given equation is calculated using the formula: x^2 - 2x + 3

void equation (double x )
{
    double sol = pow(x,2) - (2*x) + 3 ;
    printf("The solution of the equation is : %f\n", sol);
}

int main()
{
    equation(3);
    equation(2.0);
    return 0;
}