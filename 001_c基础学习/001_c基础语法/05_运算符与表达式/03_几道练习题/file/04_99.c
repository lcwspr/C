#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    for(int i = 1; i <= 9; i++)         // 到第几行  x * i
    {
        for(int j = 1; j <= i; j++)    //  
        {
            printf("%d * %d = %d\t", j, i, i * j);
        }
        puts("");
    }
    return EXIT_SUCCESS;
}