   #include <stdio.h>
   #include <math.h>

   void reminder_theorem(double actual_divisable, double divisor, double res, double rem)
   {
    double divisable = (divisor * res ) + rem ;
    printf("%f\n", divisable);
    if (actual_divisable == divisable)
    {
        printf("The division is true");

    }
    else {
        printf("The divisioin is false");
    }
   }

   int main ()
   {
     reminder_theorem(483.0,23.0,21.0,0.0);
      
   }