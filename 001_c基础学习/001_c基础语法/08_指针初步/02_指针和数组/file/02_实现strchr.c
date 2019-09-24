#include<stdio.h>

const char * my_strchr(const char * arr, char ch)
{
    int i = 0; 
    while(*(arr + i++))
    {
        if(arr[i]==ch)
        {
            return arr+i;
        }
    }
    return NULL;
}

const char * my_strchr02(const char * arr, char ch)
{
    const char * p = arr;
    while(*p++)
    {
        if(*p == ch)
        {
            return p;
        }
    }
    return NULL;
}

int main(void)
{
    char arr1[] = "hello world";
    char ch = 'o';
    const char * p = my_strchr02(arr1, ch);
    printf("%s\n",p);

    return 0;
}