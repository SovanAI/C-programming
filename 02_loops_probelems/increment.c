#include <stdio.h>
#include <conio.h>

int main()
{
    int i = 6, j = 9 , k = 15 ;
    int res = i + j + 1+(++i) + (--j) - (++j) - (++k) ;
    // 7 = 1 ,  5 = 8 ,
    printf("%d", res);
    return 0;
}