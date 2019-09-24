#include<stdio.h>

#define ARR_SIZE(x) (sizeof(x)/sizeof(x[0]))

int bubble_sort(int * arr, int n)
{
    for(int i = 0; i < n -1; i++)
    {
        for(int *  j = arr; j < arr + n - i - 1; j++)
        {
            if(*j > *(j+1))
            {
                int temp = *j;
                *j = *(j+1);
                *(j+1) = temp;
            }
        }
    }
}


int main(void)
{

    int arr[] = {12,23,5, 43, 42, 2, 58, 32, 42, 35, 5, 33, 5, 58, 35, 43};
    bubble_sort(arr, ARR_SIZE(arr));
    for(int i = 0; i < ARR_SIZE(arr); i++)
    {
        printf("%d\t", *(arr+i));
    }

    return 0;
}