#include <stdio.h>
#include <conio.h>
void swap_using_var(int a , int b)
{
    printf("%d\n", a);
    printf("%d \n", b);   // swaping the value using the third variable 
    int temp ;
    temp = a;
    a = b ;
    b = temp;
    printf("Swap successfully done\n");
    printf("%d \n", a);
    printf("%d", b);
}

void swap(int a , int b)
{  
    printf("%d\n", a );
    printf("%d\n", b);   // with out using a third variable
    a = a + b;
    b = a - b ; 
    a = a - b; 
    printf("%d\n", a );
    printf("%d", b);

}

int main ()
{
    swap(6, 7);
}