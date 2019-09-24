#include <stdio.h>

/*
1. 打开文件，判断可用性
2. 读取内容，在放入堆空间，关闭文件
3. 再次打开文件，读取堆空间内容，写入文件中，关闭文件
*/
/*
    // {"2+3=5\n", "4*5=20"}
    char * buf[100];
    char ** buf = (char **)malloc(sizeof(char *) * 100);
    buf[i] = (char *)malloc(sizeof(char) * 20);
*/

int main(void)
{
    FILE * fp = fopen("function.txt", "r+");
    if(!fp)
        return -1;
    char ** buf = (char **)malloc(sizeof(char *) * 100);
    
    int a, b;
    char c;
    float value; 
    for(int i = 0; i < 100; i++)
    {
        buf[i] = (char *)malloc(sizeof(char) * 20);
        // fgets(buf, 20, fp);
        // 格式化读取
        fscanf(fp, "%d%c%d=\n", &a, &c, &b);
        switch (c)
        {
            case '+':
                varlue = a + b;
                break;
            case '-':
                varlue = a - b;
                break;
            case '*':
                varlue = a * b;
                break;
            case '/':
                varlue = a * 1.0 / b;
                break;
        
        }
        sprintf(buf[i], "%d%c%d=%.2f\n",a, c, b, varlue);

    }
    
    fclose(fp);
    
    fp = fopen("res.txt", "r+")
    if(!fp)
        return -1;
    for(int i = 0; i < 100; i++)
    {
        fputs(buf[i], fp);
    }
    fclose(fp);

    // 内存释放掉
    for(int i = 0; i < 100; i++)
    {
        free(buf[i]);
        buf[i] = NULL;
    }
    free(buf);

    return 0;
}