#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

void swap(int * arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int bubble(int * arr, int n)
{
    for(int i = n-1; i > 0; i--)
    {
        for(int j = 0; j < i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr, j, j+1);
            }
        }
    }
}

int main(void)
{
    srand((unsigned int)time(NULL));
    int * arr = (int *)malloc(sizeof(int) * SIZE);
    for(int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 200;
    }
    bubble(arr,SIZE);

    for(int i = 0; i < SIZE; i++)
    {
        printf("%d\t",arr[i]);
    }

    return 0;
}