#include <stdio.h>
#include <conio.h>

void swap(int a , int b)
{  printf("%d\n", a );
    printf("%d\n", b);
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