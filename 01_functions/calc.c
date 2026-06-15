#include<stdio.h>
#include<conio.h>
#include<math.h>

void addition(double a, double b)
{
    printf("Result is : %f", a + b);
}
void sub(float a, float b)
{
    printf("Result is : %f", a - b);
}
 void multiplication(double a , double b)
{
    // double mul = 0;
    printf("The result is : %f", a * b);
}

void div( double a  ,double b)
{
    printf("%.4f", a / b );

}
int main()
{
    // addition(10.25, 52.63);
    // sub(10,6);
    // multiplication(52.0 , 63.23);
    div ( 56.0, 58.23);

    return 0;
}