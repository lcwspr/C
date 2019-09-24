#include <stdio.h>

int main(void)
{
    char fileName[256];
    puts("which file you want to watch.");
    scanf("%s", fileName);
    getchar();

    FILE * fp = fopen(fileName, "r");
    if(!fp)
        return -1;
    // 文件的结束标记 EOF
    char ch;
    while((ch = fgetc(fp))!=EOF)
    {
        printf("%c", ch);
    }

    fclose();
}