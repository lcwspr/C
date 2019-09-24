#include <stdio.h>
#include <string.h>
#include <time.h>

int main(int argc, char * argv[])
{
    unsigned int start_time = time(NULL);

    if(argc < 3)
    {
        printf("need more argument\n");
        return -1;
    }
    // mycp sourceFile targetFile
    FILE * fp_r = fopen(argv[1],"rb");
    FILE * fp_w = fopen(argv[2],"wb");
    if(!fp_r || !fp_w)
    {
        printf("system error\n");
        return -2;
    }
    char ch[1024];
    
    char * count = fgets(ch, 1024, fp_r);
    while(count != NULL)
    {
        memset(ch, 0, 1024);
        fputs(ch, fp_w);
        count = fgets(ch, 1024, fp_r);
    }

    fclose(fp_r);
    fclose(fp_w);
    unsigned int end_time = time(NULL);
    printf("use time is %d", end_time - start_time);

}