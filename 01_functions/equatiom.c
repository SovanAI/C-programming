#include <stdio.h>
#include <conio.h>
#include <math.h>
void eqn1(double x)
{
    double res = (2 * pow(x,2))+ (3*x) - 2;
    printf("%f\n", res);
}
void eqn3 (double x )
{
    double res = 0.0;
    res = (2*pow(x,3))+(2*pow(x,2))+(3*x)-10;
    printf("%f\n", res);
}

void eqn2 (double x) 
{
double ress = (2*pow(x,2))-x+1;
printf("%f\n", ress);

} 


int main()
{
    eqn1(2);
    eqn1(3);
    eqn1(4);
    eqn1(5);
    
    eqn2(2);
    eqn2(3);
    eqn2(4);
    eqn2(5);

    eqn3(2);
    eqn3(3);
    eqn3(4);


}