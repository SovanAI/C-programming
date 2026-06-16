#include <stdio.h>
#include <math.h>
#include <conio.h>

void hypotenuse (double a, double b)
{
    double hyp = sqrt(pow(a,2) + pow(b,2));
    printf("The length of the hypotenuse is : %f\n", hyp);
}

void height(double hyp, double base)
{
    double height = sqrt(pow(hyp,2) - pow(base,2));
    printf("The length of the height is : %f\n", height);
}
void base(double hyp, double height)
{
    double base = sqrt(pow(hyp,2) - pow(height,2));
    printf("The length of the base is : %f\n", base);
}

int main()
{
    hypotenuse(3,4);
    height(5,3);
    base(5,4);
    return 0;
}