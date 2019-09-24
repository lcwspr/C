#include <stdlib.h>
/*
    1. 以读或者写形式打开文件
    2. 判断文件可用性
    3. 写文件||读文件
    4. 关闭文件
*/
int main(void)
{
    //1. r读  w写  a追加
    FILE * fp = fopen("D:\\Code\\a.txt", "r");
    // 注意： 文件类型指针 不需要用户操作
    // 2. 判断可用
    if(fp == NULL)
    {
        // 找不到文件
        // 没有权限
        // 程序打开文件超出上限 65535
        printf("file is not open\n");
        return -1;
    }
    //3. 文件操作
    printf("file is open\n");

    fpuc('A', fp);          // 将一个字符吸入文件中
    char ch = fgetc(fp);    // 读取字符

    // 读取全部
    char ch;
    while((ch = fgetc(fp))!= EOF)
    {
        printf("%c\n", ch);
    }

    // 4. 文件关闭
    fclose(fp);
}

