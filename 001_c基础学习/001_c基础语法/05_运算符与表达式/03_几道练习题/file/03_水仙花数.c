#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    for(int i = 100; i <1000; i++ )
    {
        int ge_wei = i % 10;
        int bai_wei = i / 100;
        int shi_wei = i / 10 % 10;
        if(pow(ge_wei,3)+pow(bai_wei,3)+pow(shi_wei,3) == i)
        {
            printf("this is ia number [%d] \n", i);
        }
    }
    
    return EXIT_SUCCESS;
}
// this is ia number [153]
// this is ia number [370]
// this is ia number [371]
// this is ia number [407]