#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    puts("please give me an row");
    int row; // 输入的行数
    scanf("%d",&row);

    // 外层循环遍历每一行
    for(int i = 0; i < row; i++)
    {
        // 内层循环打印每一行的内容
        // 首先打印空格 每行的空格数为行数-1
        for(int j = i; j < row - 1; j++)
        {
            printf(" ");
        }
        for(int k = 0; k < 2 * i + 1; k++)
        {
            printf("*");
        }
        puts("");

    }
    
    return EXIT_SUCCESS;
}