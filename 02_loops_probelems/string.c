#include<stdio.h>
#include <string.h>

int main ()
{
    char name [20] ;
    scanf("%99[^\n]", name);
    printf("%s", name); 
    // to read the whole string including spaces [^\n]

}