#include <stdio.h>
#include <string.h>

int main(void)
{
    char fileName[256];
    printf("please give me a filename:\n");
    scanf("%s",fileName);
    getchar();
    FILE * fp = fopen(fileName, "w");
    if(fp == NULL)
    {
        return -1;
    }
    // scanf("%[^\n]",buf);
    // fgets()

    char buf[1024];

    while(1)
    {
        memset(buf, 0, 1024);
        fgets(buf,1024,stdin);
        // comm=exit代表录入结束
        if(!strcmp("comm=exit\n",buf))
        {
            break;
        }

        int i = 0;
        while(buf[i])
        {
            fputc(buf[i++], fp);
        }
        fflush(fp);  // 更新缓冲区
    }


    return 0;
}