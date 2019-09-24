#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ** stuData = (int **)malloc(sizeof(int *) * 3);
    *stuData = (int *)malloc(sizeof(int)*5);
    *(stuData + 1) = (int *)malloc(sizeof(int) * 5);
    *(stuData + 2) = (int *)malloc(sizeof(int) * 5);

    int temp = 50;
    for(int * i = *stuData; i < *stuData + 5; i++)
    {
        *i = temp;
        temp += 20;
    }


    for(int i = 0; i < 5; i ++)
    {
        printf("%d\t",stuData[0][i]);
    }
    return 0;
}