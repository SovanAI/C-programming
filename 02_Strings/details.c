#include<stdio.h>
#include <string.h>

void info ( char name[], char college [], int roll )
{
    printf("Student's Name : %s\n", name);
    printf("Student's college name : %s \n", college);
    printf("Student's Roll no : %d \n", roll);
}

// Home Work build the function using the scanf function 

int main()
{
    char name[20] = "Sovan Rajbanshi";
    char college [20] = "AGEMC";
    int roll = 31 ;
    info(name,college, roll);
    return 0;
}