#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

/*
    1. 以写的方式打开文件，判断文件
    2. 定义三个变量，字符串
    3. 循环100次
    4. 格式化字符串
    5. 录入内容
    6. 文件关闭

    循环四则运算100次
*/

enum myEnum
{
    add,sub,mul,div
}opt;


int main(void)
{
    srand((unsigned int)time(NULL));

    FILE * fp = fopen("function.txt","w");
    if(!fp)
        return -1;
    int a, b;
    char c;
    char buf[20];

    for(int i = 0; i < 100; i++)
    {
        memset(buf,0,20);
        
        /*switch (rand() % 4)
        {
            case 0:
                c = '+';
                break;
            case 1:
                c = '-';
                break;
            case 2:
                c = '*';
                break;
            case 3:
                c = '/';
                break;
        }*/

        switch(rand() % 4)
        {
            case add:
                c = '+';
                break;
            case sub:
                c = '-';
                break;
            case mul:
                c = '*';
                break;
            case div:
                c = '/';
                break;
        }

        a = rand() % 10 + 1;
        b = rand() % 10 + 1;

        // 格式化
        sprintf(buf, "%d%c%d=\n", a, c, b);
        int j = 0; 
        while(buf[j])
        {
            fputc(buf[j], fp);
            j++;
        }
    }
    
    fclose(fp);
}