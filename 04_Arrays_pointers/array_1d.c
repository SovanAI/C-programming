// numerical data stores in array

#include <stdio.h>
#include<string.h>
// #include <conio.h>
void arr_print(int arr[], int len)
{
    for (int i = 0; i < len ; i ++)
    {
        printf("%d\n", arr[i]);
    }
}

int main()
{
    int num [10] = {7,8,9,0,7,3,8,9,1,7}; // to pre define an array we need to use {} brackets
    int dig; 
    // index val = len - 1 
    int num2[3];
    for (int i = 0; i < 3; i++)
{
    scanf("%d", &dig);
    num2[i] = dig ;
}

arr_print(num,10);
return 0;
}