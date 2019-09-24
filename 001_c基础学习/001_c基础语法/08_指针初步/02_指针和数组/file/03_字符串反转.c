#include<stdio.h>
#include<string.h>

void str_reverse(char * str)
{
    int end = strlen(str) - 1;
    int start = 0;
    while(start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main(void)
{
    char arr[] = "hello world";
    str_reverse(arr);
    printf("%s", arr);
    return 0;
}