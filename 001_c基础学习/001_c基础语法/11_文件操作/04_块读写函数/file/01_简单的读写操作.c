#include <stdio.h>

int main(void)
{

    FILE * fp = fopen("test.txt", "wb");
    if(!fp)
        printf("失败了");
//  example 01
    char arr[16] = "hello world";
    fwrite(arr, sizeof(char), 16, fp);

//  example 02
    int num[] = {1,2,3,4};
    fwrite(num, sizeof(int), 4, fp);
    fflush(fp);


// example 03
    FILE * rp = fopen("test.txt", "rb");
    if(!rp)
        printf("失败了");
    int i = 0;
    int res_num[10]={0};

    fread(res_num + i++, sizeof(int), 1, rp);
    while(!feof(rp))
    {
        printf("read it   %d\n");
        fread(res_num + i++, sizeof(int), 1, rp);
    }

    for(int i = 0; i < 10; i ++)
    {
        printf("%d\t", res_num[i]);
    }

    fclose(fp);
    fclose(rp);

    return 0;
}