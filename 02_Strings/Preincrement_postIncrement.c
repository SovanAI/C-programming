#include <stdio.h>
int main()
{
    int i = 0, j = 5, k = 9;
    int res = (i++ )+ (++j)  + (--k);
    //   calculate it
    // 14 = 8  unknown =   15 = 3
    printf("%d", res);

    return 0;  

    // int i = 6, j = 9 , k = 15 ;
    // int res = i + j + 1+(++i) + (--j) - (++j) - (++k) ;
    // // 7 = 1 ,  5 = 8 ,
    // printf("%d", res);
    // return 0;
}