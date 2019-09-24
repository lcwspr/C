// 字符串排序，根据字符串首字符，按照a-z的顺序排序
#include <stdio.h>
#include <string.h>

void bubble(char ** arr, int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n - i -1; j++ )
        {
            if(strcmp(*(arr+j), *(arr+j+1)) < 0)
            {
                char * temp = *(arr + j);
                *(arr + j) = *(arr+ j +1);
                *(arr+j+1) = temp;
            }
        }
    }
}

int main(void)
{
    char * arr[] = {"student", "tree", "new", "bee"};

    bubble(arr, 4);
    for(int i = 0; i < 4; i++)
    {
        printf("%-10s\t", *(arr + i));
    }

    return 0;
}