#include <stdio.h>

void mystrcat(char * arr, char * s1)
{
    while(*arr)
    {
        arr++;
    }

    while(*s1){
        *arr++ = *s1++;
    }

}

int main(void)
{

    char arr[100] = "hello ";
    char * s1 = "world";
    mystrcat(arr, s1);

    printf("%s\n", arr);


    return 0;
}