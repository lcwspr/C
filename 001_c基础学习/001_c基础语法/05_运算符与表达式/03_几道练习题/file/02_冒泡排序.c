#include <stdio.h>
#include <stdlib.h>

#define SIZE_ARR(x) (sizeof(x) / sizeof(x[0]))

int a[10] = {13, 42, 12, 23, 45, 84, 43, 13, 84, 24};

int main(void)
{
    for(int i = 0; i < SIZE_ARR(a) - 1; i++)
    {
        for(int j = 0; j < SIZE_ARR(a) - 1 -i; j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < SIZE_ARR(a); i++)
    {
        printf("%d\t", a[i]);
    }

    return EXIT_SUCCESS;
}