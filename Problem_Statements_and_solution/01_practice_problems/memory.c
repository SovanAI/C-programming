#include<stdio.h>

int main()
{
    int a = 10;
    printf("%p", (void*)&a);  // printing the address of variable a
    return 0;
}